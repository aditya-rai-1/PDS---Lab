/* Name - Aditya Rai
   Roll no- 21AG30002 */

#include<stdio.h>
int main()
{   int i,j=0;
    char P[1000];
    printf("Enter a poem with its name and poet:\n");
    scanf("%[^#]s",P);
    printf("\nPoem name: ");
    for(i=0;P[i]!='\n';i++){
        printf("%c",P[i]);
    }
    printf("\nPoet name: ");
    i=i+2;
    for(;P[i]!='\n';i++){
        printf("%c",P[i]);
    }
    printf("\n");
    i=i+2;
    int t=i+1,count_stanza=1;
    //Number of stanzas
    for(;P[t]!='\0';t++){
        if(P[t-1]=='\n'&& P[t]=='\n') count_stanza++;
        if((P[t-1]=='.'&& P[t]=='\n')||(P[t-1]==','&& P[t]==' ')||(P[t-1]==','&& P[t]=='\n')) j++;
        
    }
    //printf("\nStanzas: %d",count_stanza);

    //Number of lines
    t=i;
    int count_line=0;
    for(;P[t]!='\0';t++){
        if(P[t]=='\n') count_line++;
    } 
    count_line = count_line-(count_stanza-1);
    //printf("\nLines: %d",count_line);
    //Number of marks
    t=i;
    int count_marks=0;
    for(;P[t]!='\0';t++){
        if(P[t]=='.'||P[t]==','||P[t]==':'||P[t]==';'||P[t]=='!'||P[t]=='?') count_marks++;
    }

    //printf("\nPunctuation marks: %d",count_marks);
    //Number of words
    t=i;
    int count_space=0;
    for(;P[t]!='\0';t++){
        if(P[t]==' ') count_space++;
    }

    //printf("\nWords: %d",count_space+count_marks+count_line-j);

    printf("\nLines: %d",count_line);
    printf("\nWords: %d",count_space+count_marks+count_line-j);
    printf("\nStanzas: %d",count_stanza);
    printf("\nPunctuation marks: %d",count_marks);



     
return 0;
}