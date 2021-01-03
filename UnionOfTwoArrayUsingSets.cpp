//This program only prints the size of the union array.
#include <iostream>
#include <unordered_set>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        int size1, size2;
        unordered_set <int> setUnion;
        cin >> size1;
        cin >> size2;
        for (int i = 0; i < size1+size2 ; i++) {
            int temp;
            cin>> temp;
             setUnion.insert(temp);
        }
    int res = setUnion.size();
    cout<< res<< endl;
    }
    return 0;
} 
