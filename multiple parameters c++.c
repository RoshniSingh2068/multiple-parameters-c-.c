// multiple parameters
// inside the function you can add as many as parameter you want

#include <iostream>
#include<string>

using namespace std ;
void myfunction (string fname , int age ) {

// imporatnt line of the execustion
cout << fname <<"Refsenes " <<age << "year old \n";

}
int main (){
    myfunction ("liam",3);
    myfunction ("jenny",4);
    myfunction ("anjani",30);
    return 0;
}

