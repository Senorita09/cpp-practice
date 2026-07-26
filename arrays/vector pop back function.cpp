 #include<iostream>
 #include<vector>
 using namespace std;

 int main(){
    vector<int>vec={1,2,3};
    cout<<"SIZE="<<vec.size()<<endl;
    vec.pop_back();
    cout<<"size after  pop_back="<<vec.size()<<endl;
    return 0;
 }
