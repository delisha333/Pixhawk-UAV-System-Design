# Working Principle of the Quadcopter

The drone operates based on continuous feedback and correction.

At any moment during flight, the controller is trying to keep the drone stable by adjusting motor speeds.

## How stabilization happens

The KK 2.1.5 controller has onboard sensors:
- Gyroscope → detects rotation
- Accelerometer → detects tilt

When the drone tilts (for example, right side goes down):

1. Sensors detect change in orientation
2. Controller compares current state with desired stable position
3. Error is generated
4. Opposite motors increase speed
5. Tilt is corrected

## Real observation

While testing, I noticed:
- Even small tilt is corrected instantly
- Motor speed changes are very fast and continuous
- Stability depends heavily on correct sensor calibration

## Important understanding

The drone is not "stable by default"  
It is constantly correcting itself using feedback.

This was the key concept I understood during this project.
