#include <iostream>
using namespace std;

string encrypt(string text,int s)
{
    string result="";

    for(int i=0;i<text.length();i++)
    {
        if(isupper(text[i]))
        result+=char(int(text[i]+s-65) % 26+65);
        else
        result+=char(int(text[i]+s-97) % 26+97);
    }
    return result;
}
int main()
{
    string text;
    int s;
    cout<<"\nEnter The text: ";
    cin>>text;
    cout<<"\nText: "<<text;
    cout<<"\nEnter the number of shift to do: ";
    cin>>s;
    cout<<"\nShift: "<<s;
    cout<<"\nCipher: "<<encrypt(text,s);
    return 0;
}
