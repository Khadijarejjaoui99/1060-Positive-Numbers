// beecrowd 1060 Positive Numbers
#include <iostream>

using namespace std;
 
int main() {
    float number;
    int count=0;
    for(int i=0; i<6;i++){
        cin>> number;
        if(number>0){
            count++;
        }
    }
    cout<<count<<" valores positivos"<<endl;
    system("pause");
    return 0;
}