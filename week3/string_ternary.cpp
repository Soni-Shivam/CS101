#include <simplecpp>

main_program {
    int n, m, sum = 0, weight = 0, sum1 = 0;
    bool lastvowel = false;
    char letter;
    cin >> n >> m;
    for (int j = 0; j < 2; j++) {
        sum = 0;
        for (int i = 0; i < n; i++) {
            cin >> letter;
            if (i == 0) {
                lastvowel = (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u');
                weight = lastvowel ? 3 : 2;
            } else {
                if (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u') {
                    sum += lastvowel ? 0 : weight;
                    weight = lastvowel ? weight * 3 : 3;
                    lastvowel = true;
                } else {
                    sum += lastvowel ? weight : 0;
                    weight = lastvowel ? 2 : weight * 2;
                    lastvowel = false;
                }
            }
        }
        sum += weight;
        if (j == 0) {sum1 = sum; n = m;}
    }
    m = (sum1 == sum) ? 0 : ((sum1 > sum) ? 1 : 2);
    cout << sum1 << " " << sum << " " << m << endl;
}
