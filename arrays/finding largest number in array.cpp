#include <iostream>
#include <climits>
using namespace std;

int main(){
    int nums[]={56,78,-14,36,87};
    int size=5;
    int largest= INT_MIN;
    for(int i=0;i<size;i++){
        if(nums[i]>largest){
            largest  = nums[i];
        }
        
    }
    cout<<" LARGEST="<<largest<<endl;

    return 0;
}
