#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> vec={3,2,3,5,4,2,3};
    for(int i=0;i<vec.size();i++){
        int count=1;
        for(int j=i+1;j<vec.size();j++){
            if(vec[i]==vec[j]){
                count++;
            }
           
        }
         cout<<vec[i]<<" is total "<<count<<endl;
    }
    
    
   

};