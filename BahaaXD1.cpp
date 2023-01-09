#include<iostream>

using namespace std;
int main()
{
    for (int y = 0; y <10;y++){
        for(int j =0; j<3; j++){
            cout<<"BahaaXD";
        }
        cout<<endl;
    }

    cout<<"====================="<<endl;


    string s;
    cout<<"enter your text\n";
    getline (cin , s);
    int i = 0;
    int y = 0;
    for (s= s ; s[i] != '\0';)
    {
        if(s[i] == ' ')
        {
            y++;
        }
        i++;
    }
    i = i - y;
    cout<<"your number is: ";
    cout<<i<<endl;

}