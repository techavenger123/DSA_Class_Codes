// isfull size peak 
#include <iostream>
using namespace std;
#define MAX 100
class Stack
{
    int top;
    char arr[MAX];
    public:
    Stack()
    {
        top=-1;
    }
    void push(char c)
    {
        if(top==MAX-1)
        {
            cout<<"Stack Overflow";
            return;
        }
        else
        {
            arr[++top]=c;
        }
    }
    char pop()
    {
        if(top==-1)
        {
            cout<<"Empty Stack";
            return 'a';
        }
        else
        {
            return arr[top--];
        }
    }
    bool isempty()
    {
        if(top==-1)
        {
            return true;
        }
        return false;
    }
    bool isfull()
    {
        if(top==MAX-1)
        {
            return true;
        }
        return false;
    }
    int size()
    {
        return top+1;
    }
    char peek()
    {
        return arr[top];
    }
};
int presedence(char c)
{
    if(c=='^')
    {
        return 3;
    }
    else if(c=='*' || c=='/')
    {
        return 2;
    }
    else if(c=='-'||c=='+')
    {
        return 1;
    }
    else 
    {
        return 0;
    }
}
bool isoperand(char c)
{
    if((c>='A' && c<='Z') || (c>='a' && c<='z') || (c>='0' && c<='9'))
    {
        return true;
    }
    return false;
}
string infixtopostfix(string expression)
{
    Stack operators;
    string postfix;
    char c;
    for(int i=0;i<expression.length();i++){
    
        
        c=expression[i];
        if(isoperand(c))
        {
            postfix+=c;
        }
        else if(c=='(')
        {
            operators.push(c);
        }
        else if(c==')')
        {
            while(operators.peek()!='(' && !operators.isempty())
            {
                postfix+=operators.pop();
            }
            operators.pop();
        }
        else
        {
            while(operators.peek()!='(' && !operators.isempty() && presedence(operators.peek())>=presedence(c))
            {
                postfix+=operators.pop();
            }
            operators.push(c);
        }
    }
    while(!operators.isempty())
    {
        postfix+=operators.pop();
    }
    return postfix;
}
int main()
{
    Stack s;
    string e="A+B-C*D/E";
    string result=infixtopostfix(e);
    cout<<result;
    return 0;
}
