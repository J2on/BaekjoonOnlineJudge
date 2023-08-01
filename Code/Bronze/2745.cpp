#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main(){
    string N;
    int B;
    
    cin >> N >> B;
    
    int sizeOfN = N.size();
    
    int result = 0;
    int temp;
    for(int i=0; i<sizeOfN; i++){
        temp = int(N[sizeOfN - i -1]);
        if(temp >= 65){
            temp -= 55;
        }
        else {
            temp -= 48;
        }
        
        result += temp * pow(B,i);
      
    }
    cout << result;
}
