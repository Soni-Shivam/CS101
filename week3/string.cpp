#include <simplecpp>
main_program {
    int n, m,sum = 0, weight = 0, sum1 = 0;
    bool lastvowel = false;
    char letter;
    cin >> n >> m;
    for (int j=0; j<2; j++){
        sum = 0;
        for (int i = 0; i < n; i++) {
            cin >> letter;
            if (i==0) {
                if (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u') {
                    lastvowel = true;
                    weight = 3;
                } else {
                    lastvowel = false;
                    weight = 2;
                }
            }
            else {
                if (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u') {
                    if (lastvowel) {
                        weight *= 3; 
                    } else {
                        lastvowel = true;
                        sum += weight;
                        weight = 3;
                    }
                } else { 
                    if (lastvowel) {
                        lastvowel = false;
                        sum += weight;
                        weight = 2; 
                    } else {
                        weight *= 2; 
                    }
                }
            }
        }
        (sum += weight);
        if (j==0) {sum1 = sum; n = m;}
    }
    if (sum1==sum) {
        m = 0;
    } else if (sum1>sum) {
        m = 1;
    } else {
        m = 2;
    }
    cout << sum1 << " " << sum <<" "<< m <<endl;
}