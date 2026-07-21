 #include <iostream>
 using namespace std;

 void reversearray(int arr[],int sz){
    int start=0,end=sz-1;
    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
    int main(){
        int arr[]={9,8,7,6,5,4,3,2,1,};
        int sz=9;
        reversearray(arr,sz);
        for(int i=0;i<sz;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        return 0;
    }
