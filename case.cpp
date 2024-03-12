#include<iostream>
#include<cstring>
#include<cctype>
using namespace std;
int main()
{
   char str1[] ="a is goodgirl";
    int i;
    char ch;

    cout<<"the uppercase of \""<<str1 <<"\" is "<< endl;
    for(i=0;i<strlen(str1);i++)
        {
            ch=toupper(str1[i]);
            cout<<ch;

    }

    return 0;
}
