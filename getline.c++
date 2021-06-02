#include<iostream>
#include<vector>
#include<iterator>
using namespace std;
int main(){
    int test_case,num1,num2;
    cin>>test_case>>num1>>num2;
    cout<<test_case<<num1<<num2;
    vector <int> array_data;
    int t=num1+num2;
    while(t--) {
        int temp;
        cin>>temp;
        array_data.push_back(temp);
    }
    vector<int>::iterator it = array_data.begin();
	vector<int>::iterator bit = array_data.begin();    
    advance(it,num1);
    for(auto i=it;i<array_data.end();i++){
        int flag=0;
        for(auto j=bit;j<i;j++) {
            if(*i<*j)
                flag=1;
        }
        if(flag==1)
            cout<<"NO";
        else
            cout<<"YES";
        
    }
    
}