#include <iostream>
#include <climits>
using namespace std;

int main(){
    int nums[]={56,78,-14,36,87};
    int size=5;
    int smallest = INT_MAX;
    for(int i=0;i<size;i++){
        if(nums[i]<smallest){
            smallest = nums[i];
        }
        
    }
    cout<<" SMALLEST="<<smallest<<endl;

    return 0;
}

