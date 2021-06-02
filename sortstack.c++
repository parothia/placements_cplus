#include<bits/stdc++.h>
using namespace std;
 
 int main()
 {
     stack<int> s;
     int n;
     cout<<"number of elements";
     cin>>n;
     for(int i=1;i<=n;i++)
     {
         int num;
         cin>>num;
         s.push(num);
     }
//         while(!s.empty())
//         {
//             cout<<s.top()<<" ";
//             s.pop();
//         }
        
        stack<int>ss;
        while(!s.empty())
        {
            int temp;
            temp=s.top();
            s.pop();
            if(ss.empty())
                    ss.push(temp);
                else
                    {
                            while(temp>ss.top())
                            {
                                s.push(ss.top());
                                ss.pop();
                            }
                            ss.push(temp);
                            
                    }
        }
        
        while(!ss.empty())
        {
            cout<<ss.top()<<" K  ";
            s.push(ss.top());
            ss.pop();
        }
   
 }
