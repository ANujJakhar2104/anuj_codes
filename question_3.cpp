#include <iostream>
#include <vector>
#include <algorithm> // For std::sort
using namespace std;

// Function to combine and sort two vectors
vector<int> combined_sorted(vector<int> a, vector<int> b) {
    vector<int> c = a; // Start with the elements of 'a'
    c.insert(c.end(), b.begin(), b.end()); // Append elements of 'b'
    sort(c.begin(), c.end()); // Sort the combined vector
    return c;
}

// Function to print a vector
void print(const vector<int>& a) {
    for (int i = 0; i < a.size(); i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main() {
    // Initialize the vectors
    vector<int> a = {1, 3, 5, 7, 9};
    vector<int> b = {2, 4, 6, 8};

    // Combine and sort the vectors
    vector<int> c = combined_sorted(a, b);

    // Print the combined sorted vector
    cout << "Combined sorted vector: ";
    print(c); // Print the combined sorted vector
    return 0;
}
