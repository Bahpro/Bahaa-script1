#include<iostream>

using namespace std;

int Eng()
{
string s;
    int i = 0;
    int y = 0;
    cout<<"enter your text\n";
    getline (cin, s);

    for (s= s ; s[i] != '\0';)
    {
        if(s[i] != ' ')
        {
            y++;
        }
        i++;
    }
    //i = i - y;
    cout<<"your number is: ";
    cout<<y<<endl;
    return 0;
}
int Arbc()
{
    int i = 0;
    int y = 0;
    string s;
    cout<<"enter your text\n";
    getline (cin, s);
    for (s= s ; s[i] != '\0';)
    {
        if(s[i] != ' ')
        {
            y++;
        }
        i++;
    }
    //i = i - y;
    y = y / 2;
    cout<<"your number is: ";
    cout<<y<<endl;
    return 0;

}
int main()
{
    for (int y = 0; y <10;y++){
        for(int j =0; j<3; j++){
            cout<<"BahaaXD";
        }
        cout<<endl;
    }

    cout<<"====================="<<endl;
    string a;
    string j;

    cout<<endl<<"Enter E:English for text in english \n \nEnter A:Arabic for text in arabic"<<endl;
    getline (cin, a);



if( a == "e" || a == "E" || a == "English" || a == "english")
{
Eng();
}
else if( a == "A" || a == "a" || a == "Arabic" || a == "arabic")
{
Arbc();

}
else
{
cout<<endl<<"YOU DONT SHOOSE ANY LANGUAGE"<<endl;
}
return 0;
}
