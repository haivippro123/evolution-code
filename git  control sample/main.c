/*
"Explain a logic or method or a pseudo code how would you reverse a stentence with several words in it -
Example - Input : ""Please reverse this sentence"" 
Expected Output : ""sentence this reverse Please""   "
*/

#include <stdio.h>
#include <stdlib.h>

void rev_str(char *in, char *out, int length)
{
    int count=0, mask=0, mask2;
    for(count = 0; count <= length; count++)
    {
        if((in[count] == ' ') || (in[count] == '\0'))
        {
            mask2 = length - count-1;
            while(mask <= count)
            {`
                if(in[mask] == '\0')
                {
                    out[mask2] = ' ';
                }
                else
                {
                    out[mask2] = in[mask];
                }
                printf("/%d - ", mask2);
                printf("%c/", out[mask2]);
                mask++;
                mask2++;
            }
        }
    }
    out[length] = '\0';
}

int main()
{
    char fist[] = "please tell me any thing more difficulties";
    char secound[sizeof(fist)];
    rev_str(fist, secound, sizeof(fist));

    printf("oh++");
}