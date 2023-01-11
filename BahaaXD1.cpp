#include<iostream>

using namespace std;


int Word()
{
string s;
    int i = 0;
    int y = 0;
    cout<<"ُEnter your text: \n";
    getline (cin, s);

    for (s= s ; s[i] != '\0';)
    {
        if(s[i] == ' ')
        {
            y++;
        }
        i++;
    }
    y = y +1 ;
    cout<<"Word count is: ";
    cout<<y<<endl;
    return 0;
}
int Eng()
{
string s;
    int i = 0;
    int y = 0;
    cout<<"Enter your text: \n";
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
    cout<<"Enter your text: \n";
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

    cout<<"====================="<<endl<<"     YT: BahaaXD      "<<endl<<"====================="<<endl;
    string a;
    string w;

    cout<<"\nEnter C:Character if you want to count characters \n"<<endl;
    cout<<"Enter W:Word if you want to count the number of words \n"<<endl;
    getline(cin, w);

if (w == "c" || w == "Character" || w == "Characters" || w == "character" || w == "C" || w == "characters")
{
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
}
else if (w == "W" || w == "w" || w == "Word" || w == "word" || w == "Words" || w == "words")
{
    Word();
}
else
{
    cout<<"YOU DID NOT CHOOSE THE TYPE \n"<<endl;
}

return 0;
}
