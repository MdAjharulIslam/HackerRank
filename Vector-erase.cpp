#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>> v[i];
    }
    int q1;
    cin>>q1;

    v.erase(v.begin()+ q1-1);

    int q2,q3;
    cin>>q2>>q3;

    v.erase(v.begin()+q2-1, v.begin ()+q3-1);

    cout<<v.size()<<endl;

    for(int i=0;i< v.size();i++){
        cout<<v[i]<<" ";
    }
    return 0;
}
