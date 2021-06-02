#include<bits/stdc++.h>
#include<fstream>
#include<cstdlib>
using namespace std;
// int main() {
//     string line;
//     ifstream file("oracle.c++");
//     if(file.is_open()) {
//         while(getline(file,line)) {
//             cout<<line;
//         }
//         file.close();
//     }
//     else cout<<"NOT opened";
//     return 0;
// }

int main() {
    string word;
    fstream file;
    string filename("oracle.c++");
    file.open(filename.c_str());
    while(getline(file,word)) {
        cout<<word<<"     ";
    }
    return 0;
}
