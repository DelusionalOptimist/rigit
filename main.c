#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(int argc, char* argv[])
{
    char operation[][15]={"add","checkout","commit","hash-object","init","log","merge","rebase","rm","tag"};
    int choice;
    int i=0;
    if (argc<=2)
    {
        while(1)
        {
            if ((strcmp(argv[1],operation[i]))==0
            )
            {
                choice=i;
                break;
            }
            ++i;
        }
    }
    else
    {
        //help function
        exit(0);
    }
    
    switch (choice)
    {
        case 0:
            {
                //call add function
                break;
            }
        case 1:
            {
                //call checkout function
                break;
            }
        case 2:
            {
                //call commit function
                break;
            }
        case 3:
            {
                //hash-object function
                break;
            }
        case 4:
            {
                //init function
                break;
            }
        case 5:
            {
                //log function
                break;
            }
        case 6:
            {
                //merge
                break;
            }
        case 7:
            {
                //rebase
                break;
            }
        case 8:
            {
                //rm
                break;
            }
        case 9:
            {
                //tag
                break;
            }
        default:
            {
                //call help function
            }
    }
    return 0;
}