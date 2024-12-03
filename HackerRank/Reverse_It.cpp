// https://www.hackerrank.com/contests/final-exam-a-introduction-to-c-for-dsa-a-batch-05/challenges/reverse-it-8-2
#include <bits/stdc++.h>
using namespace std;
class student{
    public:
    string nm;
    int cls;
    char s;
    int id;

};
int main(){
    int s;
    cin>>s;
    student *st=new student[s];
    for (int i = 0; i < s; i++)
    {
        cin>>st[i].nm>>st[i].cls>>st[i].s>>st[i].id;
    }
    int i=0,j=s-1;
    while (i<j)
    {
        swap(st[i].s,st[j].s);
        i++;
        j--;
    }
    
    for (int i = 0; i < s; i++)
    {
        cout<<st[i].nm<<" "<<st[i].cls<<" "<<st[i].s<<" "<<st[i].id<<endl;
    }
    delete [] st; 
}