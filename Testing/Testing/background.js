chrome.runtime.onInstalled.addListener(() => {
  chrome.contextMenus.create({
    id: "saveTextToAFile",
    title: "Save highlighted text to file",
    contexts: ["selection"]
  });
});

chrome.contextMenus.onClicked.addListener((info) => {
  if (info.menuItemId === "saveTextToAFile" && info.selectionText) {
    // Convert the selected text to a data URL
    const text = info.selectionText;
    const dataUrl = 'data:text/plain;charset=utf-8,' + encodeURIComponent(text);

    // Use the chrome.downloads.download API to download the text as a file
    chrome.downloads.download({
      url: dataUrl,
      filename: "text2touch.txt"
    }, (downloadId) => {
      console.log(`Downloaded file with ID: ${downloadId}`);
    });
  }
});