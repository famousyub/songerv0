#include <iostream>

#include<string>
#include<iomanip>
#include <cstdlib>


using namespace std;

string replaceAll(string str_ , const string &from , const string & repl){

    size_t   pos = 0;

    while((pos = str_.find(from,pos)) != string::npos )
    {
        str_.replace(pos,from.length(),repl);
        pos+=  repl.length();
    }

    return str_;
}



int main(int argc , const char *argv[])
{

    if(argc > 2)
    {

        string origin = string(argv[1]);
        string repl = string(argv[3]);
        string from = string(argv[2]);

        cout << replaceAll(origin,from ,repl)<<endl;
        return 1 ;
    }

    else  {
        cout<<"something wrong " <<endl ;
        return 1;
    }
}