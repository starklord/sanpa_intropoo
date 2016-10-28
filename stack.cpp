#include <iostream>
#include <stack>

using namespace std;

int
main()
{
    stack<int> intStack;
    intStack.push(1);
    intStack.push(2);
    cout<<"The size is="<<intStack.size()<<endl;
    cout<<"The stack ";
    (intStack.empty()==true)?cout<<" is " : cout<<" it is not ";
    cout<<" empty "<<endl;

    int nElement =intStack.top();
    cout<<"The size is="
    <<intStack.size()<<endl;
    cout<<"The stack ";
    (intStack.empty()==true)?cout<<" is " : cout<<" it is not ";
    cout<<" empty "<<endl;

    cout<<"taking the top element"<<endl;
    intStack.pop();
    cout<<"The size is="
    <<intStack.size()<<endl;
    cout<<"The stack ";
    (intStack.empty()==true)?cout<<" is " : cout<<" it is not ";
    cout<<" empty "<<endl;

    intStack.pop();

    return 0;
}
