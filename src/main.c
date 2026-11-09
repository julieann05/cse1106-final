#include <stdio.h>
#include <math.h>

#define READING_COUNT 5

double calculateAverage(double readings[], int count) {
    double total = 0;
    for (int i = 0; i < count; i++) total += readings[i];
    return total / count;
}

void displayReadings(double readings[], int count) {
    printf("Temperature Readings:\n");
    for (int i = 0; i < count; i++) printf("%.1f F\n", readings[i]);
}

int isOutOfRange(double temperature) {
    return (temperature > 76) ? 1 : 0;
}

void checkReadings(double readings[], int count) {
    printf("\nReadings requiring attention:\n");
    for (int i = 0; i < count; i++) {
        if (isOutOfRange(readings[i])) printf("%.1f F\n", readings[i]);
    }
}

int testsRun = 0;
int testsPassed = 0;

void recordTest(const char *testName, int passed)
{
    testsRun++;
    if (passed) {
        testsPassed++;
        printf("NORMAL: %s\n", testName);
    } else {
        printf("WARNING: %s\n", testName);
    }
}

int main(void) {
   double readings[READING_COUNT];
   for(int i=0; i < READING_COUNT; i++){
   printf("Enter temperature %d: ", i);
    scanf("%d", &readings[i]);

    printf("========================================\n\n");
    printf("Smart Classroom Comfort Monitor\n");
    printf("========================================\n\n");


    
    displayReadings(readings, READING_COUNT);
    printf("\nAverage temperature: %.1f F\n",
           calculateAverage(readings, READING_COUNT));
    checkReadings(readings, READING_COUNT);

runInitialTests();

    printf("\n========================================\n");
    printf("TEST SUMMARY\n");
    printf("========================================\n");
    printf("Tests passed: %d/%d\n", testsPassed, testsRun);
	
	testsRun = 0;
	testsPassed = 0;
	
    return 0;
}


/*/
Test cases T1-T5
void test_T1_normalTemperature(void) {
    double temperature = 75;
    recordTest("T1 - 75 F is normal",
               isOutOfRange(temperature) == 0);
}
void test_T2_belowMinimum(void) {
    double temperature = 64;
    recordTest("T2 - 64 F warning",
               isOutOfRange(temperature) == 1);
}
void test_T3_aboveMaximum(void) {
    double temperature = 78;
    recordTest("T3 - 78 F warning",
               isOutOfRange(temperature) == 1);
}
void test_T4_belowMinimum(void) {
 double temperature = 45;
 recordTest( "T4 - 45 F warning",
    isOutOfRange(temperature)==1);
}
void test_T5_normalTemperature(void) {
    double temperature = 71;
    recordTest("T4 - 71 is normal"
        isOutOfRange(temperature) ==0)

}


void runInitialTests(void) {
    printf("\n============================\n");
    printf("\nSmart Classroom Comfort Monitor\n");
    printf("==============================\n\n");

    test_T1_normalTemperature();
    test_T2_belowMinimum();
    test_T3_aboveMaximum();
    test_T4_belowMinimum();
    test_T5_normalTemperature();
}


int main(void) {
    double readings[READING_COUNT] = {68.0, 69.0, 70.0, 71.0, 100.0};

    printf("========================================\n");
    printf("Smart Classroom Comfort Monitor\n");
    printf("========================================\n\n");

    displayReadings(readings, READING_COUNT);
    printf("\nAverage temperature: %.1f F\n",
           calculateAverage(readings, READING_COUNT));
    checkReadings(readings, READING_COUNT);

    runInitialTests();

    printf("\n========================================\n");
    printf("TEST SUMMARY\n");
    printf("========================================\n");
    printf("Tests passed: %d/%d\n", testsPassed, testsRun);
	
	testsRun = 0;
	testsPassed = 0;
	
    return 0;
}
    */
    

    //Temperature Readings and Statuses to a file
temperature(temp){
    File*file = fopen("temperature_log.txt", "a");
    if(file == NULL){
        printf("Values not found");
    }
fprint("file, %2f", temp);
    fclose(file);
  }
}
