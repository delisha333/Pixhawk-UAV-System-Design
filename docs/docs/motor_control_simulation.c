#include <stdio.h>

#define PWM_MIN 1000
#define PWM_MAX 2000

int generate_pwm(int throttle) {
    if (throttle < 0) throttle = 0;
    if (throttle > 100) throttle = 100;

    return PWM_MIN + (throttle * (PWM_MAX - PWM_MIN)) / 100;
}

int main() {
    int throttle = 60;
    int pwm = generate_pwm(throttle);

    printf("Throttle: %d%% → PWM: %d\n", throttle, pwm);
    return 0;
}
- Understood how different modes affect drone behavior

## What I learned

Using Mission Planner helped me understand how software interacts with hardware in a drone system.

It made clear how:
- Sensor calibration affects stability
- Motor outputs are controlled
- Parameters influence flight behavior
