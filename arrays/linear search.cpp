 #include<iostream>
 using namespace std;

 int linearsearch(int arr[],int sz,int traget){
    for(int i=0;i<sz;i++){
        if(arr[i]==traget){
            return i;
        }
    } 
    return -1;
 }
 int main(){
    int arr[]={4,2,7,8,1,2,5};
    int sz=7;
    int traget=8;
    cout<<linearsearch(arr,sz,traget)<<endl;
    return 0;
 }
