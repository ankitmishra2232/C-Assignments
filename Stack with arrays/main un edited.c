#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
#include"stack.h"
int main()
{
    printf("\n Program for stack using array");
    int choice,size;
    char c;
    eleType input,popped_ele, peeked_ele,display;
    printf("\n Please Enter the Size of stack maximum 50 :- ");
    if(scanf("%d%c", &size, &c) != 2 || c != '\n')
    {
    printf("Please enter valid input (Integer value)\n");
    }
    else
    {
    printf("valid input--->proceed\n");
    stackType s =createStack(size);
    do
    {
        printf("\nPlease Choose:-\n(1)push\n(2)pop\n(3)peak\n(4)EXIT\n");
        if(scanf("%d%c",&choice,&c) !=2 || c !='\n')
        {
            printf("Invalid input please select any Integer between 1-4");
            break;
        }
        else{
                switch (choice)
                {
                case 1: //Push
                        if(!isFull(s))
                        {
                            printf(" Enter a Integer value to be pushed:");
                            if(scanf("%d%c",&input,&c) !=2 || c !='\n')
                            {
                                printf("please Provide Integer to be pushed");
                                break;
                            }
                            else
                            {
                                if(push(input, &s)==true)
                                printf("Element Added to the stack");
                            }
                            
                        }
                        else
                            printf("\n Overflow");
                        break;

                case 2: //POP
                        if(!isEmpty(s))
                        {
                            popped_ele= pop(&s);
                            printf("\n Popped element: %d",popped_ele);

                        }
                        else
                            printf("\n UNDERFLOW");
                        break;

                case 3: //Peek
                        if(!isEmpty(s))
                        {
                            peeked_ele=peek(&s);
                            printf("\n peeked element :%d",peeked_ele);
                        }
                        else
                        {
                            printf("\n UNDERFLOW");
                        }
                        break;
                case 4:
                    printf("EXIT");
                    break;

                default:
                    printf ("\n\t Please Enter a Valid Choice(1/2/3/4)");
                }
        }
        
        

    } while (choice != 4 );
    destroyStack(&s);
    printf("\n%d",s.stack_array[0]);
    printf("\n%d",s.top);
    
    /*
        
    stackType s1 = createStack(3);
	stackType s2 = createStack(5);
	push( 10, &s1);
	push( 20, &s1);push( 30, &s1);
	push( 25, &s2);push( 35, &s2);push( 45, &s2);
	peeked_ele = peek(&s1);
	printf("\n Peeked element from s1: %d", peeked_ele );
	peeked_ele = peek(&s2);
	printf("\n Peeked element from s2: %d", peeked_ele );
	
	//Pop
	popped_ele = pop(&s1);
	printf("\n Popped element from s1: %d", popped_ele );
	popped_ele = pop(&s2);
	printf("\n Popped elementfrom s2: %d", popped_ele );
	//PEEK
	peeked_ele = peek(&s1);
	printf("\n Peeked element from s1: %d", peeked_ele );
	peeked_ele = peek(&s2);
	printf("\n Peeked element from s2: %d", peeked_ele );*/
    
    
    
    
    
    
    
    
    
    return 0;
    }

}
