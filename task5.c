#include <stdio.h>

// Function to check birth year and zodiac sign
void birthdayInfo(int bday) {

    int year, month, day;

    // Extract year, month and day from YYYYMMDD
    year = bday / 10000;
    month = (bday / 100) % 100;
    day = bday % 100;

    // Check whether the birth year is a leap year
    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
        printf("Leap Year. ");
    }
    else {
        printf("Not Leap Year. ");
    }

    // Determine the zodiac sign using month and day
    if ((month == 3 && day >= 21) || (month == 4 && day <= 19)) {
        printf("Zodiac is Aries.\n");
    }
    else if ((month == 4 && day >= 20) || (month == 5 && day <= 20)) {
        printf("Zodiac is Taurus.\n");
    }
    else if ((month == 5 && day >= 21) || (month == 6 && day <= 20)) {
        printf("Zodiac is Gemini.\n");
    }
    else if ((month == 6 && day >= 21) || (month == 7 && day <= 22)) {
        printf("Zodiac is Cancer.\n");
    }
    else if ((month == 7 && day >= 23) || (month == 8 && day <= 22)) {
        printf("Zodiac is Leo.\n");
    }
    else if ((month == 8 && day >= 23) || (month == 9 && day <= 22)) {
        printf("Zodiac is Virgo.\n");
    }
    else if ((month == 9 && day >= 23) || (month == 10 && day <= 22)) {
        printf("Zodiac is Libra.\n");
    }
    else if ((month == 10 && day >= 23) || (month == 11 && day <= 21)) {
        printf("Zodiac is Scorpio.\n");
    }
    else if ((month == 11 && day >= 22) || (month == 12 && day <= 21)) {
        printf("Zodiac is Sagittarius.\n");
    }
    else if ((month == 12 && day >= 22) || (month == 1 && day <= 19)) {
        printf("Zodiac is Capricorn.\n");
    }
    else if ((month == 1 && day >= 20) || (month == 2 && day <= 18)) {
        printf("Zodiac is Aquarius.\n");
    }
    else {
        printf("Zodiac is Pisces.\n");
    }
}

int main() {

    // Test the function with two birthdates
    birthdayInfo(20040410);
    birthdayInfo(20031118);

    return 0;
}