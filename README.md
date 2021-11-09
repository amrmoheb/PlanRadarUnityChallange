# PlanRadarUnityChallange

Unity version: 2020.3.18f1

Control
-one touch control:
You can use one finger to rotate the 3d model right and left
-double touch control
You can use 2 fingers for zooming and dragging

Platforms:
The app is playable on android and IOS only and doesn’t support editor 

Android :
1-	You can build and run from the unity project
Just connect your android device and File->Build and run

2-	Or you can find the apk file in the “AndroidBuild” folder 

IOS:
1-	Find the xcode project in “IOSBuild” folder
2-	Open xcode project and select unity iphone schema and target
3-	Set signing as manual signing
4-	Set your development team and bundle id
5-	Make sure you changed bundle id in build settings
6-	Run the app to your connected iphone
important note: if you have signing issue in xcode check this
-select target unity-iphone
-build settings
-signing -> developmemt team
be sure that the development team has been updated to your development team for debug and all release stages
