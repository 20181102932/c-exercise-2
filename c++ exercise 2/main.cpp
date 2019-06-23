#include <iostream>
using namespace std;
class Student{
public:
    Student(int a,string b,char c){
        num=a;
        name=b;
        sex=c;
    }
    ~Student(){
        cout<<"Destructor called."<<'\n';
    }
    void display(){
        cout<<"Constructor called."<<'\n'<<"num:"<<num<<'\n'<<"name:"<<name<<'\n'<<"sex:"<<sex<<'\n';
        
    }
    
private:
    int num;
    string name;
    char sex;
    
};
int main()
{Student stud1(10010,"Wang_li",'f');
    stud1.display();
    Student stud2(10011,"Zhang_fun",'m');
    stud2.display();
    return 0;
}
#include <iostream>
#include <fstream>
using namespace std;
struct student{
    char num[10];
    char xueyuan[10];
    char xingming[10];
};
int main (){
    int n;
    cin>>n;
    student m[n];
    ofstream in("/Users/s20181106279/Desktop/ffff.txt");
    ifstream out("/Users/s20181106279/Desktop/eee.txt");
    if(out.is_open()){
        for(int i=0;i<n;i++){
            out>>m[i].num>>m[i].xueyuan>>m[i].xingming;
        }
        out.close();
    }
    if(in.is_open())
    {
        for(int j=0;j<n;j++){
            in<<m[j].num<<" "<<m[j].xueyuan<<" "<<m[j].xingming<<endl;
        }
        in.close();
    }
    return 0;
    
}
