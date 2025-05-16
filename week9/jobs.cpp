#include<iostream>
#include<vector>
using namespace std;
struct Job {
    int id;
    int start_time;
    int end_time;
};

bool compareByStartThenEndTime(const Job& a, const Job& b) {
    if (a.start_time == b.start_time) {
        return a.end_time > b.end_time; // If start times are equal, sort by end time
    }
    return a.start_time > b.start_time; // Otherwise, sort by start time
}

void insertion_sort(int size, vector<Job>& arr, int index, bool (*compare)(const Job&, const Job&)) {
    if (index == size) return;

    if (index == 1) {
        if (compare(arr[0], arr[1])) {
            Job element = arr[1];
            arr.erase(arr.begin() + 1);
            arr.insert(arr.begin(), element);
        }
    } else {
        for (int i = 0; i < index; i++) {
            if (compare(arr[i], arr[index])) {
                Job element = arr[index];
                arr.erase(arr.begin() + index);
                arr.insert(arr.begin() + i, element);
                break;
            }
        }
    }
    insertion_sort(size, arr, index + 1, compare);
}

void print_vector(const vector<Job>& arr) {
    for (const auto& job : arr) {
        cout << "(" << job.id << ", " << job.start_time << ", " << job.end_time << ") ";
    }
    cout << endl;
}

int main() {
    vector<Job> jobs = {
        {1, 5, 10},
        {2, 2, 8},
        {3, 3, 7},
        {4, 1, 5},
        {5, 3, 6}  // Same start_time as id 3 but different end_time
    };

    // Sort by start time, break ties with end time
    insertion_sort(jobs.size(), jobs, 1, compareByStartThenEndTime);

    cout << "Sorted by start time, tie by end time:\n";
    print_vector(jobs);

    return 0;
}
