#include <iostream>
#include <string.h>
using namespace std;
class Students{
    char name[100];
    int sclass;
    char section[100];
    static string school ;
    static void school_name(){
      school = "RNw";  
    };
    public:
        void iname( string name){
            cin>>name;
            strcpy(this->name , name);
            cout<<name;
        };
        void inclass(int sclass){
            cin>>class;
            //this->class = class;
            
        };
        void section(string section){
            cin>>section;
            strcpy(this->section , section);
            cout<<section;
        };
    
    
};
int main(){
  Students  student;
  student.iname("zeel");
}