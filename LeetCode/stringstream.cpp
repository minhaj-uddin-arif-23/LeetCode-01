#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    stringstream ss(s);
    string word;
    int cnt =0;
    while(ss >> word){// word ar length ,word 
        cout<<word<<endl;
        cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}
58. Length of Last Word [Leet Code problem]

 stringstream ss(s);
        string word;
        while(ss >> word);
        return word.length();