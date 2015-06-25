#include <stdio.h>
#define MAXSIZE 5

typedef struct stack
{
    int stk[MAXSIZE];
    int top;
};
typedef struct stack ST;
ST *s;
int errorcode=0;
void push();
int  pop();
void display();
void main ()
{
s = (ST *)malloc(sizeof(ST));   
 int choice,num;
    int option = 1;
    
 s->top = -1;
 
    printf ("STACK OPERATION\n");
    while (option)
    {
        printf ("------------------------------------------\n");
        printf ("      1    -->    PUSH               \n");
        printf ("      2    -->    POP               \n");
        printf ("      3    -->    DISPLAY               \n");
        printf ("      4    -->    EXIT           \n");
        printf ("------------------------------------------\n");
 
        printf ("Enter your choice\n");
        scanf    ("%d", &choice);
        switch (choice)
        {
        case 1:
            
            push();
           if(errorcode==-1)
           printf ("Stack is Full\n");
      
            break;
        case 2:
            pop();
             if(errorcode==-3)
           printf ("Stack is empty\n");
           
            break;
        case 3:
            
            display();
             if(errorcode==-2)
           printf ("Stack is empty\n");
           
            break;
        case 4:
            return;
        }
        
        printf ("Do you want to continue(Type 0 or 1)?\n");
        scanf    ("%d", &option);
    
    }
}

void push (num)
{
   
    if (s->top == (MAXSIZE - 1))
    {
       errorcode = -1;
        return(errorcode);
     
        
    }
    else
    {
        printf ("Enter the element to be pushed\n");
        scanf ("%d", &num);
        s->top = s->top + 1;
        s->stk[s->top] = num;
        
    }
}

int pop ()
{
  int num;
if (s->top == - 1)
    {
        errorcode = -3;
        return(errorcode);
    }
    else
    {
        num = s->stk[s->top];
        printf ("poped element is = %d\n", s->stk[s->top]);
        s->top = s->top - 1;
       
        return(num);
    }
   
}

void display ()
{
  
 int i;
    if (s->top == -1)
    {
        errorcode = -2;
        return(errorcode);
    }
    
    else
    {
        printf ("\n The status of the stack is \n");
        for (i = s->top; i >= 0; i--)
        {
            printf ("%d\n", s->stk[i]);
              
        }
    }
}
    