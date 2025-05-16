#include<iostream>
#include<vector>
#include<string>
using namespace std;

string subarray(string expression, int start, int length) {
    string result = "";
    for (int i = start; i < start + length && i < expression.size(); i++) result += expression[i];
    return result;
}

void evaluate_power(string expression) {
    string word = "";
    int power;
    for(int i =0; i < expression.size(); i++) {
        if (expression.at(i) == '^') {
            power = stoi(subarray(expression, i+1, expression.size()));
            word = subarray(expression, 0, i);
            break;
        };
    }
    for(int i =0; i < power; i++) cout << word;
}

void print_vector(vector<string> arr) {
    for(int i=0;i<arr.size();i++) {
        cout<< arr[i] << " ";
    }
}

vector<string> divide_all(string expression) {
    vector<string> split_expressions;
    string current = "";
    for (int i = 0; i < expression.size(); i++) {
        current += expression[i];
        if ((i < expression.size()-1 && isalpha(expression[i + 1]) && !isalpha(expression[i])) || i == expression.size() - 1) {
            split_expressions.push_back(current);
            current = "";
        }
    }
    return split_expressions;
}

int main() {
    string text = "abc^2kbc^3lol^5";
    vector<string> split_text = {text};
    print_vector(divide_all(text));
    cout << endl;
    for(auto element : divide_all(text)) {
        evaluate_power(element);
    }
    return 0;
}