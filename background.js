chrome.contextMenus.create({
  id: "textToFile",
  title: "Save highlighted text to file",
  contexts: ["selection"]
});

chrome.runtime.onStartup.addListener(function () {
  chrome.runtime.onMessage.addListener((message, sender, sendResponse) => {
    if (message.text) {
      const selectedText = message.text;

      chrome.serial.connect("COM5", { bitrate: 9600 }, (connectionInfo) => {
        if (!connectionInfo) {
          console.error("Could not connect to serial port.");
          return;
        }

        const textEncoder = new TextEncoder();
        const dataToSend = textEncoder.encode(selectedText + '\n'); 
        chrome.serial.send(connectionInfo.connectionId, dataToSend, (sendInfo) => {
          if (sendInfo.error) {
            console.error("Error sending data:", sendInfo.error);
          } else {
            console.log("Data sent successfully.");
          }
        });
      });
    }
  });
});