#include <iostream>
using namespace std;


int main(){
    int n,m;
    
    cin >> n >> m;
    int* baskets = new int[n]; 
    
    int start, end;
    int ballNum;
    for(int i=0; i<m; i++){
        cin >> start >> end >> ballNum;
        for(int i=start-1; i<end; i++){
            baskets[i] = ballNum;
        }
    }
    
    for(int i=0; i<n; i++){
        cout << baskets[i] << ' ';
    }
    delete[] baskets;
}
