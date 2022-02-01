#include <iostream>
#include <assert.h>

int alertFailureCount = 0;

int networkAlertStub(float celcius) {
    std::cout << "ALERT: Temperature is " << celcius << " celcius.\n";
    // Return 200 for ok
    // Return 500 for not-ok
    // stub always succeeds and returns 200
    if(celcius <= 200.0f)
    {
		// celcius less or equaling 200 is OK
        return 200;     // OK
    }
    else
    {
        // celcius higher than 200 is NOT okay
        return 500;
    }
}

void alertInCelcius(float farenheit) {
    float celcius = (farenheit - 32) * 5 / 9;
    int returnCode = networkAlertStub(celcius);
    if (returnCode > 200) {
        // non-ok response is not an error! Issues happen in life!
        // let us keep a count of failures to report
        // However, this code doesn't count failures!
        // Add a test below to catch this bug. Alter the stub above, if needed.
        alertFailureCount += 1;
    }
}

int main() {
    alertInCelcius(400.5);  // 400F corresponds to 204 degree C
    alertInCelcius(303.6);  // 303.6F corresponds to 150 degree C
    std::cout << alertFailureCount << " alerts failed.\n";
    assert(alertFailureCount == 1);
    std::cout << "All is well (maybe!)\n";
    return 0;
}
