//Jake Mayer cs135
#include <stdio.h>

int strlength(char *s);
int strcomp(char *s1, char *s2);
char* strconcat(char *dest, char *src);
char* strcopy(char *dest, char *src);

int main()
{

        char s1[21], s2[21];
        printf("Please enter the first string: ");
        scanf("%20s", s1);
        printf("Please enter the second string: ");
        scanf("%20s", s2);



        printf("The length of string 1 is: %d\n", strlength(s1));
        printf("The length of string 2 is: %d\n", strlength(s2));

//Alphabetical order check
        if(strcomp(s1, s2) < 0) {
                printf("String 1 comes before string 2 alphabetically.\n");
        }
        else if(strcomp(s1, s2) > 0) {
                printf("String 2 comes before string 1 alphabetically.\n");
        }
        else{
                printf("The strings are the same.");
        }
//concatenation
        strconcat(s2, s1);
        printf("String 1 after concatenation: %s\n", s1);
        printf("String 2 after concatenation: %s\n", s2);
//Copying
        strcopy(s2, s1);
        printf("String 1 after copying: %s\n", s1);
        printf("String 2 after copying: %s\n", s2);


        return 0;
}

//Calculate length of string
int strlength(char *s){
        int n = 0;

        while(*s != '\0')
        {
                n++;
                s++;
        }
        return n;
}


int strcomp(char *s1, char *s2){
        char i1, i2;
        while(*s1 != '\0' && *s2 != '\0') {
                i1 = *s1;
                i2 = *s2;

                if(i1 >= 'a' && i1 <= 'z') {
                        i1 -= 'a' + 'A';
                }

                if(i2 >= 'a' && i2 <= 'z') {
                        i2 -= 'a' + 'A';
                }

                if(i1 > i2) {
                        return 1;
                }

                else if(i1 < i2) {
                        return -1;
                }

                s1++;
                s2++;

        }

        if(*s1 == '\0' && *s2 == '\0') {
                return 0;
        }
        else if(*s1 > *s2) {
                return 1;
        }
        else{
                return -1;
        }
}

char* strconcat(char *dest, char *src){
        char *beg = dest;
        while(*dest != '\0')
                dest++;

        while(*src != '\0')
        {
                *dest = *src;
                dest++;
                src++;
        }
        *dest = '\0';
        return beg;
}

char* strcopy(char *dest, char *src){
        char *beg = dest;

        while(*src != '\0')
        {
                *dest = *src;
                dest++;
                src++;
        }

        *dest = '\0';
        return beg;
}
