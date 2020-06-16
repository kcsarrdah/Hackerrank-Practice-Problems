#include<stdio.h>
#define SIZE 20
#include<math.h>


struct stack
{
	int data[SIZE];
	int top;
};

//fn decl
void init_stack(struct stack *);
void push(struct stack *,int);
int pop(struct stack *);
int isalpha1(char);

void main()
{
	char postfix[SIZE];
	int i,op1,op2,val;
	struct stack s;
	init_stack(&s);
	printf("Enter the postfix expression");
	gets(postfix);
	//Analyse every character in postfix expression
	for(i=0;postfix[i]!='\0';i++)
	{
		//operand
		if(isalpha1(postfix[i]))
		{
			printf("Enter the value for operand %c:- ",postfix[i]);
			scanf("%d",&val);
			push(&s,val);
		}
		else
		{
			op2=pop(&s);
			op1=pop(&s);
			if(postfix[i]=='+')
			{
				push(&s,op1+op2);
			}
			else if (postfix[i]=='-')
			push(&s,op1-op2);
			else if (postfix[i]=='*')
			push(&s,op1*op2);
			else if (postfix[i]=='/')
			push(&s,op1/op2);
			else if (postfix[i]=='%')
			push(&s,op1%op2);
			else //$ or ^
			push(&s,pow(op1,op2));
		}
	}
	printf("Result is %d",pop(&s));
	getch();
}
void init_stack(struct stack *ps)
{
	ps->top==-1;
}
void push(struct stack *ps ,int no)
{
	ps->top++;
	ps->data[ps->top]=no;
}
int pop(struct stack *ps)
{
	return ps->data[ps->top--];
}
int isalpha1(char ch)
{
	int no=ch;
	if((no>=65 && no<=90) || (no>=97 && no<=122))
	return 1;
	return 0;
}

