/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int main()
{
    int opt, opt1, id;
    char name[50], sub[50];
    FILE *fp;
    int add_teacher();
    int add_student();
    int admin();
    printf("\t\t\twelcome\t\t\t");
    printf("\n\t\tmenu\t\t\n");
    printf("1.Admin\n2.Teacher\n3.Student\n");
    printf("enter menu option: ");
    scanf("%d",&opt);
    if (opt==1)
    {
        printf("\n\tsubmenu\t\n");
        printf("1.Add teacher\n2.Add student\n");
        printf("enter submenu option: \n");
        scanf("%d",&opt1);
        fp=fopen("admin.txt","w+");
        fprintf(fp,"\t\t\tWELCOME\t\t\t\n");
        fprintf(fp,"\n\n");
        fprintf(fp,"\t\tMENU: \t\t\n");
        fprintf(fp,"\t\t\t1.Admin\n\t\t\t2.Teacher\n\t\t\t3.Student\n");
        fprintf(fp,"\t\tenter menu option: %d\n",opt);
        fprintf(fp,"\n\n");
        fprintf(fp,"\t\tSUB MENU:\t\t\n");
        fprintf(fp,"\t\t\t1.Add teacher\n\t\t\t2.Addstudent\n");
        fprintf(fp,"enter submenu option: %d\n",opt1);
        if (opt1==1)
        {
            printf("\nenter details of teacher\n");
            printf("name: ");
            scanf("%s",&name);
            printf("\nid: ");
            scanf("%d",&id);
            printf("\nsubject: ");
            scanf("%s",&sub);
            fprintf(fp,"\t\tenter details of teacher\t\t\n");
            fprintf(fp,"name: %s\n",name);
            fprintf(fp,"id: %d\n",id);
            fprintf(fp,"subject: %s\n",sub);
            fclose(fp);
        }
        else if (opt1==2)
        {
            printf("enter details of student\n");
            printf("name: ");
            scanf("%s",&name);
            printf("\nid: ");
            scanf("%d",&id);
            fprintf(fp,"\t\tenter details of student\t\t\n");
            fprintf(fp,"name: %s\n",name);
            fprintf(fp,"id: %d\n",id);
            fclose(fp);
        }
        else
        {
            fprintf(fp,"\n\ninvalid submenu\n");
            fclose(fp);
        }
    }
    else
    {
        printf("invalid");
    }
    return 0;
}

