#include <iostream>
#include <cstring>
#include <string>
#include <stdio.h>

using namespace std;

int main()
{
    int i,STD;
    cout<< "\nplease enter students number: ";
    cin>> STD;
    float sum[STD]= {0};
    string fname[STD],lname[STD];

    for (i=0; i<STD; i++)
    {
        cout<< "\nEnter fname of student no. "<<i+1<<" : ";
        cin >> fname[i];
        cout<< "\nEnter lname of student no. "<<i+1<<" : ";
        cin >> lname[i];
    }

    int index=0,longestNameLength=0;
    string fullname,longestName;
    for (i=0; i<STD; i++)
    {
        fullname= fname[i]+" "+lname[i];
        cout<< "\nfull name of student No. "<<i+1<<" is "<<fullname<<endl;
        if (fullname.size()>longestNameLength)
        {
            longestNameLength = fullname.size();
            longestName=fullname;
            index=i;
        }
    }
    cout<< "\nlongest name is "<<longestName<< " and student number "<<index+1<<endl;

    return 0;
}
