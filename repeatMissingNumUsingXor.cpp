vector<int> findTwoElement(const vector<int> &A) {
   int n=A.size();
   int X=0;
   for(int i=0;i<n;i++){
       X=X^A[i];
       X=X^(i+1);
   }
   int setBit=X&(~(X-1));
   int x=0,y=0;
   for(int i=0;i<n;i++){
       if(A[i]&setBit)
        x=x^A[i];
       else
        y=y^A[i];
       if((i+1)&setBit)
        x=x^(i+1);
     else y=y^(i+1);
   }
   vector<int> res(2);
   for(int i=0;i,n;i++){
       if(A[i]==x){
           res[0]=x;
           res[1]=y;
           break;
       }
       else if(A[i]==y){
            res[0]=y;
            res[1]=x;
            break;
       }
   }
   return res;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
    vector<int> res = findTwoElement(a);

    cout << "missing element is "<< res[0]<< endl;
    cout << "repeat element is "<< res[1] << endl;
    }
    return 0;
} 
