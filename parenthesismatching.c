#include<stdio.h>
#define max 50
int k=0;
struct stack
{
    char stk[max];
    int top;
};
struct stack s;
void push(char);
void pop();
void main()
{
    s.top=-1;
    char exp[100];
    printf("\nEnter expression: ");
    scanf("%s",exp);
    int i=0;
    while(exp[i]!='#')
    {
        if(exp[i]=='(')
            push(exp[i]);
        else if(exp[i]==')')
        {
            if(exp[i]==')')
            {
                if(s.stk[s.top]=='(')
                    pop();
                else
                    {
                    printf("\nUnbalanced expression");
                    break;
                    }
           }
        }
    i++;
    }

   if (s.top == - 1)
        printf("\nBalanced expression");
    else
        printf("\nUnbalanced expression");
}
void push(char item)
{
if (s.top == (max - 1))
    printf ("Stack is Full\n");
else
        {
		s.top = s.top + 1;
		s.stk[s.top] = item;
		printf("\n%c pushed in stack",s.stk[s.top]);
        }
}
void pop()
{
if (s.top == - 1)
        {
		printf ("Stack is Empty\n");
        }
    else
        {
		printf("\n%c popped from stack",s.stk[s.top]);
		s.top = s.top - 1;
        }
}