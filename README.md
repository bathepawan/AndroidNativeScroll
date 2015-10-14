# AndroidNativeScroll

Horizontal and Vertical Scrolling Native Scripts (Doesn't need ADB to be connected while running )

#Steps

#Command:
1. adb shell /data/local/scroll v/h XResolution YResolution LoopCount 

	~adb shell /data/local/scroll v/h XResolution YResolution LoopCount  

#Procedure:
1. Push libs/armeabi/scroll binary to device via adb
	~ adb push libs/armeabi/scroll /data/local/tmp/

2. Launch use case where you wish to scroll. 

3. To start vertical or horizontal scroll depending upon usecase, run below commands.
	For instance you want to check browser scroll , launch a webpage you wish to scroll in browser.
	and run command-
	~ adb shell /data/local/tmp/scroll v 1920 1080 10 

	- Assumed that your device resolution is 1920 1080, change the values with actual device resolution.
	- Last parameter 10 is loop count, you may use this as per need to do scroll for long time or short time.
