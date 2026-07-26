 #include<iostream>
 #include<vector>
 using namespace std;

 int main(){
    vector<int>vec={1,2,3};
    cout<<"SIZE="<<vec.size()<<endl;
    vec.push_back(25);
    cout<<"size after push back="<<vec.size()<<endl;
    return 0;
 }
