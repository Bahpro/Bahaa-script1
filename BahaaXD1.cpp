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

class Average2
{
    private:
        int num1;
        int num2;
    public:
        Average2()
        {
            cout<<"Enter The Number 1 :"<<endl;
            cin>>num1;
            cout<<"Enter The Number 2 :"<<endl;
            cin>>num2;
            int b = (num1 + num2)/2;
            cout<<"The Avrage is : "<<b<<endl;
        }
};
class Average3
{
    private:
        int num1;
        int num2;
        int num3;
    public:
        Average3()
        {
            cout<<"Enter The Number 1 :"<<endl;
            cin>>num1;
            cout<<"Enter The Number 2 :"<<endl;
            cin>>num2;
            cout<<"Enter The Number 3 :"<<endl;
            cin>>num3;
            int b = (num1 + num2 + num3)/3;
            cout<<"The Avrage is : "<<b<<endl;
        }
};
void Ave2()
{
    Average2 ob1;
}
void Ave3()
{
    Average3 ob1;
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
cout<<"Enter A2:Average of 2 numbers"<<endl;
cout<<"Enter A3:Average of 3 numbers"<<endl;
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
else if(b== "A2" || b == "a2" || b == "average2" || b == "Average2")
{
    Ave2();
}
else if(b== "A3" || b == "a3" || b == "average3" || b == "Average3")
{
    Ave3();
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
void dec()
{
    char a;
    cout<<"Pleas Enter Your Letter : "<<endl;
    cin>>a;
    cout<<"The decimal number of "<<a<<" is : "<<(int)a<<endl;
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
else
{
    cout<<"YOU DID NOT CHOOSE THE TYPE \n"<<endl;
}

return 0;
}
