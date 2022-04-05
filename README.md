# Simple Camera Driver with Inferface V4L2

## Brief description
Simple example of a camera driver with the interface V4L2. This code capture, process (bitshift) and save one raw image.

## Build

```
$ g++ capturev4l2.cpp -o capturev4l2
```

## Usage

This code has 2 optional arguments. 

- The first is the camera number (/dev/video0, /dev/video1, etc);
- The second is how many bits the image will shift, if will be 0 (RAW8), 2 (RAW10) or 4 (RAW12);

So, to grab a raw image from the camera located at /dev/video2 and save a RAW12 raw imge, this is the command:

```
$ ./capturev4l2 2 RAW12
```
