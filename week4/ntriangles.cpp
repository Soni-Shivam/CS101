#include<simplecpp>
void print_starry_line(int num_spaces, int num_stars) {
    for (int j = 0; j < 3; j++){
        for(int i = 0; i < num_spaces; i ++) cout << " ";
        for(int i = 0; i < num_stars; i++) cout << "*";
        for(int i = 0; i < num_spaces +1; i ++) cout << " ";
    }
    cout << endl;
}

main_program {
    int n;
    cin >> n;
    for (int i =0; i < n; i++) print_starry_line((n-1)-i, 2*i+1);
}