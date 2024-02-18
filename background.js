chrome.contextMenus.create({
  id: "textToFile",
  title: "Save highlighted text to file",
  contexts: ["selection"]
});

chrome.runtime.onMessage.addListener(async (message, sender, sendResponse) => {
  if (message.text) {
    try {
      const port = await navigator.serial.requestPort();
      // Assuming 9600 baud matches Arduino expectation
      await port.open({ baudRate: 9600 });

      const textEncoder = new TextEncoder();
      const dataToSend = textEncoder.encode(message.text + '\n'); // Add a newline if needed

      const writer = port.writable.getWriter();
      await writer.write(dataToSend);
      writer.releaseLock(); // Important for cleanup of resource  
      console.log("Data sent successfully.");

    } catch (error) {
      console.error("Error sending data:", error);
    }
  }
});