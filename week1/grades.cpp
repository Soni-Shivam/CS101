#include<simplecpp>
#include<string>

int main() {
    float marks;
    int x;
    string grade = "";
    cin >> marks;
    marks /= 10;
    x = (int)(floor(marks));
    switch (x)
    {
    case 10:
        grade = "A";
        break;
    case 9:
        grade = "A";
        break;
    case 8:
        grade = "B";
        break;
    case 7:
        grade = "C";
        break;
    case 6:
        grade = "D";
        break;
    case 5:
        grade = "E";
        break;
    default:
        grade = "F";
        break;
    }
    cout << grade << endl;
    return 0;
}

