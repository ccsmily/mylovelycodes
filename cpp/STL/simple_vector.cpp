#include<vector>
#include<iostream>
using namespace std;

int main(int argc,char* argv[])
{
 vector<int> v;
    v.push_back(2);
    v.push_back(7);
    v.push_back(9);
 /*
 vector<int> v(3);
 v[0]=2;
 v[1]=7;
 v[2]=9;
*/
    v.insert(v.begin(),1);
    v.insert(v.begin()+2,2);
    v.insert(v.end(),9);

    //�������������
    vector<int>::iterator it;
    for(it=v.begin();it!=v.end();it++)
    {
        cout<<*it<<" ";
    }
    //cout<<v[0]<<" "<<v[1]<<" "<<v[2]<<" "<<endl;

    cout<<endl;
    return 0;
}