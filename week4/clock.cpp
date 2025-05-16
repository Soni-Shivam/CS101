#include<iostream>
using namespace std;

int main() {
    int hour, min,sec;
    float h_angle, m_angle, s_angle;
    char time;
    char colon1, colon2;
    float conversion = 22/7/180;
    cin >> hour >> colon1 >> min>> colon2>> sec; /// mast cheez sekhi !!!!! nice lovely wow
    if (!(hour<0 || hour>24 || min>60 || sec>60)) { // ez ez very ez
        hour = hour % 12;
        h_angle = 30.0*hour + min*1.0/2 + sec*1.0/120;
        m_angle = min*6.0 + sec*1.0/10;
        s_angle = sec*6.0;
        cout << h_angle-m_angle << " " << h_angle-s_angle << " " << m_angle-s_angle << endl;
    }

}