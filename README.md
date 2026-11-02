# cse1106-final
Develop a simple classroom monitoring system for university facilities department.
The department wants to monitor classroom temperatures and identify when conditions fall outside an acceptable range.
Develop a Raspberry Pi-based application that processes temperature readings,
determines whether the classroom environment is acceptable,
and provides a visible warning when temperature is outside the specified range.

## Expected Product Functionality
- Allow user to enter classroom temperature reading in Fahrenheit.
- Determine whether a temperature is within the acceptable range of **68°F-76°F**, inclusive.
- Display an appropriate **NORMAL** or **WARNING** status.
- Calculate the average of the recorded temperature.
- Save temperature readings and their status to a file.
- Use an LED connected to the Raspberry Pi to indicate a warning condition.
- Allow the accepted temperature range to be changed according to a new client requirement.

### Example:
              TEMPERATURE      SYSTEM STATUS        WARNING LED
              72°F             NORMAL               OFF
              79°F             WARNING              ON
              65°F             WARNING              ON
