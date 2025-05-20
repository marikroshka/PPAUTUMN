#include<iostream>
#include<stack>

using namespace std;


int main()
{

    int count;
    cin >> count;

    stack<int> main;
    stack<int> max;

    for (int i = 0; i < count; i++)
    {
        string command;
        cin >> command;

        if(command == "add")
        {
            int x;
            cin >> x;
            main.push(x);

            if(max.empty () || x >= max.top())
            {
                max.push(x);
            }
            else
            {
               max.push(max.top()); 
            }
        }
        else if(command == "delete")
        {
            if(!main.empty())
            {
                main.pop();
                max.pop();
            }
        }

        else if(command == "getcur")
        {
            if(!main.empty())
            {
                cout << main.top() << endl;
            }
            else cout << "error" << endl;

        }
        else if(command == "getmax")
        {
            if(!max.empty())
            {
                cout << max.top() << endl;
            }
            else cout << "error" << endl;

        }
    }
    
   



    return 0;
}