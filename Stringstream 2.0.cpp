#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
	vector<int>ret;
    string temp;
    for(int i=0;i<str.size();i++){
        if(str[i]==','){
            ret.push_back(stoi(temp));
            temp.clear();
        }

        else{
            temp.push_back(str[i]);
        }

        if(i==str.size()-1){
            ret.push_back(stoi(temp));
            temp.clear();

        }
    }
    return ret;
}
int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++)
     {
        cout << integers[i] << "\n";
    }

    return 0;
}
