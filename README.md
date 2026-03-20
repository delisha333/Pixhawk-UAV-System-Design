# 🚁 UAV Drone using Pixhawk

## What this project is about
This project is my attempt to understand how a drone actually stabilizes itself in air using a Pixhawk flight controller.

Instead of just assembling components, I focused on understanding the complete flow — from sensing orientation to correcting it using motors.

---

## How I understand a drone now

A drone is basically a feedback system that keeps correcting itself continuously.

The working can be broken into 3 parts:

### 1. Sensing
The drone uses an IMU (accelerometer + gyroscope) to detect its orientation.

- Accelerometer → tells tilt  
- Gyroscope → tells rotation  

So at any moment, the drone knows if it is tilting or rotating.

---

### 2. Processing (Pixhawk)
Pixhawk acts as the brain.

- It reads sensor data  
- Compares it with the desired position (stable / level)  
- Calculates the error  

Example:
If the drone tilts to the right, Pixhawk detects that deviation.

---

### 3. Actuation (Motors + ESC)
Based on the error, Pixhawk sends PWM signals to ESCs.

- ESC controls motor speed  
- Motor speed changes thrust  

Example:
If the drone tilts right → left motors speed up → drone balances

---

## Complete Loop

Sensor → Pixhawk → Motor → Correction → Sensor again

This loop runs continuously, which keeps the drone stable.

---

## What I worked on in this project
- Understanding Pixhawk connections and working  
- Studying how PWM controls ESC and motor speed  
- Basic IMU data interpretation  
- Exploring control logic (PID concept)  
- System-level understanding of drone stabilization  

---

## Challenges I faced
- Initially, I couldn’t connect how sensors affect motor output  
- PWM and ESC working was confusing at first  
- Understanding how fast corrections happen in real time  

---

## What I learned
- A drone is not just hardware — it is a control system  
- Stability comes from continuous feedback and correction  
- Even small errors are corrected instantly using motor speed changes  

---

## Future improvements
- Add obstacle avoidance  
- Improve control tuning  
- Explore autonomous navigation  

---

## Project Structure
- `firmware/` → basic control and logic code  
- `hardware/` → circuit and design files  
- `docs/` → explanations and notes  

---

## Author
Delisha Singh
