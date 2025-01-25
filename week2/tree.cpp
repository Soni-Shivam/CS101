#include<simplecpp>
#include<string>

main_program {
    int n;
    cin >> n;
    for (int j = 0; j < n; j++) {
        string output = "";
        for (int i = 1; i < (n-j); i++) {
        output += " ";
        }
        for (int i = 0; i < (j); i++) {
            output += "*+";
        }
        output += "*";
        cout << output << endl;
    }
    int old = n;
    n = floor(n/2);

    string output = "";
    for(int i=0; i <= old-3; i++) {
        output += " ";
    }

    for(int i = 0; i < 3; i++) {
        output += "*";
    }

    for(int i=0; i < n; i++) {
        cout << output << endl;
    }
   
    
}
