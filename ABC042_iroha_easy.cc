#include <iostream>
using namespace std;
int main(void){
    // Your code here!
    int A,B,C;
    cin >> A >> B >> C;
    
    if(A ==5 && C == 5){
        cout << "YES" <<endl;
    }else if(A==5 && B ==5){
        cout << "YES" <<endl;
    }else if(B==5 && C==5){
        cout << "YES" <<endl;
    }else{
        cout << "NO" <<endl;
    } 
    
}
