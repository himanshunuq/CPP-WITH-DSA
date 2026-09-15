/*

Char apple[] ={'a','p','p','l','e'}

Char arr[10];

Null Character = \0

char take 1 bytes size

agar null charater dikha ke ga to koe chij uske aage ka print nahi kar ta hai

String:

String s;
cin>>s;
cout<<s;
output : Himanshu   --> here also in last it will add Null char \0;
last space is reserve for null char
String s="Himanshu Shekhar"
string create a dynamic memory allocation and memory allocate in heap

string l = s.append(s2)
*/

#include <iostream>
#include <string>
using namespace std;

int main()
{

    string test = "shekahr";
    string s;
    string ss;
    char a = 'H';
    char b[] = {'H', 'm', 'a', 'n', 's', 'h', 'u'};

    for (int i = 0; i < 7; i++)
    {
        cout << b[i];
    }

    cout << test << endl;
    char arr[20];
    cin >> arr;
    arr[2] = '\0';
    cout << arr;

    cin >> s; // "Himanshu Shekhar"
    cout << s;

    getline(cin, ss); // this is use for taking as multiline string
    cout << ss;

    cout << sizeof(s);
    // combine two string
    string sss = s + ss;
    cout << sss;
    test.push_back('S');
    test.pop_back();

    // string pp = "Himanshu is belong to \"Jharkhand\" india Ranchi";
    // escape charter \ help to print "
    // how to print then \ --> use "\\"

    string pp = "Himanshu is belong to \"Jharkhand\" india Ranchi";
    cout << pp;
    string ppp = "\\";
    cout << ppp;
}