#include<iostream>
using namespace std;

int min(int a,int b){
    if(a<b){
        return a;
    }else{
        return b;
    }
}
int main(){
    cout<<"MIN is ="<<min(4,9);

    return 0;
}
