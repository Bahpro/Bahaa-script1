#include<iostream>

using namespace std;

class Cul{

    private:
        int nb1;
        int nb2;
    public:
    Cul()
    {
        cout<<"Enter number 1"<<endl;
        cin>>nb1;
        cout<<"Enter number 2"<<endl;
        cin>>nb2;
    }
    int sum()
    {
        return nb1 + nb2;
    }
    int min()
    {
        return nb1 - nb2;
    }
    double shut()
    {
        return (double)nb1/nb2;
    }
    int mod()
    {
        return nb1%nb2;
    }
    int foi()
    {
        return nb1*nb2;
    }
};

int veer()
{

int length;
cout<<"how many score?\n";
cin>>length;

int result=0;

int scor[length];
int a=1;
for (int i=0;i<length;i++)
{

cout<<"Enter number "<<a<<" : ";
cin>>scor[i];
result += scor[i];
a++;
}

cout<<"Your Average is: "<<result / (float)length<<endl;

return 0;
}

void nass()
{
int i;
string s;
cout<<"Enter Your Text : "<<endl;
getline (cin , s);
cout<<"Enter the number of repetitions : \n";
cin>>i;
for(int a=1 ; a<=i ; a++)
{
cout<<a<<": "<<s<<endl;
}

}

int ko(int n)
{
if (n==1)
return 1;
else
return n*ko(n-1);
}

int cal()
{
    string b;
    cout<<"Enter + or Sum for the sum of two numbers\n";
    cout<<"Enter - or Minus for the minus of two numbers\n";
    cout<<"Enter * or Multiply for the multipy two numbers\n";
    cout<<"Enter / or Divide two numbers\n";
    cout<<"Enter % "<<"or Modluse for the modluse two numbers\n";
cout<<"Enter !:Factorial for show factorial to numbers"<<endl;
cout<<"Enter A:Average of numbers"<<endl;
    cin>>b;
    if (b == "+" || b== "Sum" || b=="sum"){
    Cul ob1;
    cout<<"Your number is: "<<ob1.sum()<<endl;
    }
    else if ( b == "-" || b== "Minus" || b == "minus"){
        Cul ob1;
        cout<<"Your number is: "<<ob1.min()<<endl;
    }
    else if (b=="*" || b == "Multiply" || b == "multiply")
    {
        Cul ob1;
        cout<<"Your number is: "<<ob1.foi()<<endl;
    }
    else if (b == "/" || b== "Divide" || b== "divide")
    {
        Cul ob1;
        cout<<"Your number is: "<<ob1.shut()<<endl;
    }
    else if (b=="%" || b == "Modluse" || b == "modluse")
{
    Cul ob1;
   cout<<"Your number is: "<<ob1.mod()<<endl;
}

else if(b == "!" || b == "Factorial" || b == "factorial")
{
int n;
cout<<"Enter Your Number : "<<endl;
cin>>n;
cout<<"Your Number Is : "<<ko(n)<<endl;
}
else if(b== "A" || b == "a" || b == "average" || b == "Average")
{
    veer();
}

else
{
    cout<<"YOU DID NOT CHOOSE ANY TYPE"<<endl;
}
return 0;
}
int Word()
{
string s;
    int i = 0;
    int y = 0;
    cout<<"??Enter your text: \n";
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
void dec()
{
    char a;
    cout<<"Pleas Enter Your Letter : "<<endl;
    cin>>a;
    cout<<"The decimal number of "<<a<<" is : "<<(int)a<<endl;
}

void tashfir()
{
    string p;
    cout<<"Enter E:Encryption to encrypt the text"<<endl;
    cout<<"Enter D:Decryption to decrypt the text"<<endl;
    getline(cin,p);

    if (p == "E" || p == "Encryption" || p == "e" || p == "encryption")
    {
    cout<<"Enter your Text : \n";
    string a;
    getline(cin,a);
    cout<<"Your text is : \n";
    for (int i=0 ;a[i] != '\0'; i++ )
    {
        cout<<a[i]<<"#%$#^#%#&";
    }
    cout<<endl;
    }
    else if (p == "D" || p == "d" ||p == "Decryption" ||p == "decryption" )
    {
        cout<<"Enter your Text : \n";
    string b ;
    getline(cin,b);
    cout<<"Your text is : \n";
    for (int i=0 ;b[i] != '\0'; i++ )
    {
        if (b[i] != '#' &&b[i] !='%'&&b[i] !='$' &&b[i] != '#' &&b[i] != '^' &&b[i] != '%' &&b[i] != '&')
        cout<<b[i];
    }
    cout<<endl;
    }
    else
    cout<<"You did not choose any type!!!"<<endl;
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

    cout<<"\nEnter L:Letter if you want to count letters \n"<<endl;
    cout<<"Enter W:Word if you want to count the number of words \n"<<endl;
    cout<<"Enter C:Calculator to use the calculator\n"<<endl;
    cout<<"Enter D:Decimal To show a decimal number for characters"<<endl;
cout<<endl<<"Enter R:Repetition to repeat the text "<<endl;
cout<<"\nEnter E:Encryption to encrypt the text"<<endl;
getline(cin, w);

if (w == "L" || w == "Letter" || w == "Letters" || w == "letter" || w == "l" || w == "letters")
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
else if (w == "C" || w == "calculator" || w == "c" || w == "Calculator")
{
    cal();
}
else if ( w == "D" || w == "Decimal" || w == "decimal" || w == "d")
{
    dec();
}
else if ( w == "R" || w == "Repetition" || w == "r" || w == "repetition")
{
nass();
}
else if (w == "e" || w == "E" || w == "Encryption" || w == "encryption")
{
tashfir();
}

else
{
    cout<<"YOU DID NOT CHOOSE THE TYPE \n"<<endl;
}

return 0;
}
