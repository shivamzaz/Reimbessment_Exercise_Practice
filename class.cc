#include "bits/stdc++.h"
using namespace std;
class Shivam{
    private:
    string fn,ln;
    public:
    Shivam(string fg,string hj){
    fn=fg;ln=hj;}
    string makeip(){
    return fn+" "+ln;}
};
class Exer{
    private:
    string a,c;
    int b;
    public:
    Exer(string name, int rno, string father){
        a=name;
        b=rno;
        c=father;
        }
    int prinnt(){
    //printf("%s %d %s\n",a,b,c);}
    printf("%d\n",b);
    cout<<a<<b<<c<<"\n";
    return 0;
    }
};
class Node{
    //int data;
    public:
    int data;
    Node(int data){
    data=data;
    Node *next;}
    };
int main(){
 //Shivam obj("shivam","Gupta");
 //Exer obj1("ram",123,"gupta");
 Node shiv(5);
 shiv.data=6;
 shiv.next=NULL;
// cout<<obj1.prinnt()<<endl;
 return 0;
}
