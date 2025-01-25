#include <simplecpp>

main_program{
    int day, month, year;
    bool is_leap_year = false;
    cin >> year >> day;
    if (year % 400 ==0) {
        is_leap_year = true;
    } else if (year % 100 == 0) {
        is_leap_year = false;
    } else if (year % 4 == 0) {
        is_leap_year = true;
    }

    if (is_leap_year) {
        if (day>=1 && day<=31) { 
            month = 1;
        } else if (day>=32 && day<=60) {
            day -= 31; 
            month = 2;
        } else if (day>=61 && day<=91) {
            day -= 60; 
            month = 3;
        } else if (day>=92 && day<=121) {
            day -= 91;
            month = 4;
        } else if (day>=122 && day<=152) {
            day -= 121;
            month = 5;
        } else if (day>=153 && day<=182) {
            day -= 152;
            month = 6;
        } else if (day>=183 && day<=213) {
            day -= 182;
            month = 7;
        } else if (day>=214 && day<=244) {
            day -= 213;
            month = 8;
        } else if (day>=245 && day<=274) {
            day -= 244;
            month = 9;
        } else if (day>=275 && day<=305) {
            day -= 274;
            month = 10;
        } else if (day>=306 && day<=335) {
            day -= 305;
            month = 11;
        } else if (day>=336 && day<=366) {
            day -= 335;
            month = 12;
        }
    } 
    else {
        if (day>=1 && day<=31) {
            month = 1;
        } else if (day>=32 && day<=59) {
            day -= 31;
            month = 2;
        } else if (day>=60 && day<=90) {
            day -= 59;
            month = 3;
        } else if (day>=91 && day<=120) {
            day -= 90;
            month = 4;
        } else if (day>=121 && day<=151) {
            day -= 120;
            month = 5;
        } else if (day>=152 && day<=181) {
            day -= 151;
            month = 6;
        } else if (day>=182 && day<=212) {
            day -= 181;
            month = 7;
        } else if (day>=213 && day<=243) {
            day -= 212;
            month = 8;
        } else if (day>=244 && day<=273) {
            day -= 243;
            month = 9;
        } else if (day>=274 && day<=304) {
            day -= 273;
            month = 10;
        } else if (day>=305 && day<=334) {
            day -= 304;
            month = 11;
        } else if (day>=335 && day<=365) {
            day -= 334;
            month = 12;
        }
    }
    cout << day << "/" << month << "/" << year << endl;
} 