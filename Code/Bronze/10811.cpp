#include <iostream>
using namespace std;


int main(){
    int n,m;
    
    cin >> n >> m;
    int* baskets = new int[n]; 

    for(int i=0; i<n; i++){
      baskets[i] = i+1;
    }
    
    int start, end;
    int temp;
    for(int i=0; i<m; i++){
      cin >> start >> end;
      start--;
      end--;

      int range;
      if((end-start)%2 == 0){range = (end-start)/2;}
      else{range = (end-start)/2 + 1;}
      for(int i=0; i<range; i++){
        temp = baskets[start+i];
        baskets[start+i] = baskets[end-i];
        baskets[end-i] = temp;
      }
      
    }
    for(int i=0; i<n; i++){
      cout << baskets[i] << ' ';
    }
    
    
    delete[] baskets;
}
