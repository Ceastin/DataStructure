#include <iostream>
#include <string> 
using namespace std;

#define no 3


void insert(int n,  int posn, int s[no])
{
    for (int i = no - 1; i >= posn; i--)
    {
        if (i == posn)
        {
           
            s[i]= n;
        }
        else
        {
        
            s[i ]= s[i-1];
        }
    }
}

void delet(int posn, int s[no])
{
    for (int i = posn; i < no - 1; i++) 
    {
       
        s[i]= s[i + 1];
    }
   
 
}

void print(int s[no])
{
    for (int i = 0; i < no; i++)
    {
        cout << s[i] << endl;
     
    }
}

int main()
{
    int s[no];
    cout << "\n\n--------Menu---------- \n";
    cout << "1.Create\n 2.Display\n 3.Insert\n 4.Delete\n 5.Exit\n";
    cout << "   ";
    int ch;
    
        	int n,posn;
    cout << "\nEnter your choice: ";

    do
    {
        cin >> ch;
        switch (ch)
        {
        case 1:
            for (int i = 0; i < no; i++)
            {
                
                cout << "enter rollno " << i + 1 << ": ";
                cin >> s[i];
            }
            break;
        case 2:
            print(s);
            break;
        case 3:
        	cout<<"which element to insert at what posn"<<endl;
        	
        	cout<<"enter  posn and uid:  ";
        	cin>>posn>>n;
            insert(n,posn,s);
            cout<<"New array as follows:"<<endl;
            print(s);
            break;
        case 4:
        	cout<<"which element to delete at what posn:  ";
        	int posn;
            delet(posn, s);
            break;
        case 5:
            break;
        }
    } while (ch != 5);

    return 0;
}
