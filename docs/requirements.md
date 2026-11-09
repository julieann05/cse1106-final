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

