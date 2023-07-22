#include <iostream>
using namespace std;
int studentList[30];
int main() {

    
    int num;
    
    for(int i=0; i<30; i++){
        cin >> num;
        studentList[num-1] = 1;
    }
    
    
    for(int i=0; i<30; i++){
        
        if(studentList[i] != 1){
            cout << i+1 << endl;
        }
    }
    
}
