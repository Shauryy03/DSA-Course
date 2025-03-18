// STL pair

#include<iostream>
#include<vector>
using namespace std;
int main(){
    pair<int , int> p1 ={1,2};
    cout<<p1.first<<endl;
    cout<<p1.second<<endl;


    pair<char , int> p2 ={'a',2};
    cout<<p2.first<<endl;
    cout<<p2.second<<endl;

    // pairs of pairs
    pair<int ,pair<string,int>> p3 ={3,{"shaury",11}};
    cout<<p3.first<<endl;
    cout<<p3.second.first<<endl;
    cout<<p3.second.second<<endl;

    // vector of pair
    vector<pair<int,int>> vec={{10,11},{20,21},{30,31}};
    vec.push_back({40,41});
    vec.emplace_back(50,51);

    for(pair<int,int> p : vec){
        cout<<"("<<p.first<<","<<p.second<<") ";
    }
    return 0;
}