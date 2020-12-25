#include <bits/stdc++.h>
using namespace std;

struct Pair
{
    int missing;
    int repeat;
};

    struct Pair findTwoElement(int arr[], int n) {
       int array[n];
       
    struct Pair missDoublePair;
      for(int i=0; i<n; i++)
       {
           array[i]=0;
       }
       for (int j=0; j<n; j++)
       {
           array[arr[j]-1]++;
       }
       
       for (int k=0; k<n ; k++)
       {
           if(array[k]==0)  
               missDoublePair.missing = k+1;
            if(array[k]==2)
                missDoublePair.repeat=k+1;
                
       }
       return (missDoublePair);
    }

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
    struct Pair pair = findTwoElement(a, n);

    cout << "missing element is "<< pair.missing << endl;
    cout << "repeat element is "<< pair.repeat << endl;
    }
    return 0;
} 
