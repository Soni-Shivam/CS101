#include<simplecpp>
bool isAnagram(int m, int n) {
    char letter;
    int sum2 = 0, prod2 =1, sum1 =0, prod1 =1;
    for (int j = 0; j <2; j++) {
        sum2 = 0;
        prod2 =1;
        for (int i =0; i < n; i++) {
            cin >> letter;
            if (letter<97) letter += 'a' - 'A';
            sum2 += letter, prod2 *= letter;
        }
        if (j==0) ((n=m),(sum1= sum2),(prod1=prod2));
    }
    if (m!=n) return false;
    else if ((sum1==sum2)&&(prod1==prod2)) return true;
    else return false;
}

main_program {
    int len1, len2, t;
    cin >> t;
    for (int repeat_times = t; repeat_times >0; repeat_times--) {
        cin >> len1>>len2;
        cout << isAnagram(len1, len2) << endl;
    }
}