#include <iostream>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    
    int* baskets = new int[n];
    for(int i=0; i<n; i++){
        baskets[i] = i+1;
    }
    int to, from;
    int temp;
    for(int i=0; i<m; i++){
        cin >> to >> from;
        to--;
        from--;
        temp = baskets[to];
        baskets[to] = baskets[from];
        baskets[from] = temp;
    }
    
    for(int i=0; i<n; i++){
        cout << baskets[i]<< ' ';
    }
}
