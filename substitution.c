#include <stdio.h>

int main(void)
{
    //get key input from the user 
    char key[25]; 
    printf("Enter a key: "); 
    scanf("%s", key); 

    //get plain text input from the user 
    char txt[1024]; 
    printf("Enter a plain text: "); 
    scanf("%s", txt); 

    //update the letters of the txt 
    for(int x=0; x<1024; x++)
    {
        char cc = txt[x]; 

       // A - a
       if(cc == 65 || cc == 65 + 32){ txt[x] = key[0];}

       // B - b
       if(cc == 66 || cc == 66 + 32){ txt[x] = key[1];}

       // C - c
       if(cc == 67 || cc == 67 + 32){ txt[x] = key[2];}

       // D - d
       if(cc == 68 || cc == 68 + 32){ txt[x] = key[3];}

       // E - e
       if(cc == 69 || cc == 69 + 32){ txt[x] = key[4];}

       // F - f
       if(cc == 70 || cc == 70 + 32){ txt[x] = key[5];}

       // G - g
       if(cc == 71 || cc == 71 + 32){ txt[x] = key[6];}

       // H - h
       if(cc == 72 || cc == 72 + 32){ txt[x] = key[7];}

       // I - i
       if(cc == 73 || cc == 73 + 32){ txt[x] = key[8];}

       // J - j
       if(cc == 74 || cc == 74 + 32){ txt[x] = key[9];}

       // K - k
       if(cc == 75 || cc == 75 + 32){ txt[x] = key[10];}

       // L - l 
       if(cc == 76 || cc == 76 + 32){ txt[x] = key[11];}

       // M - m 
       if(cc == 77 || cc == 77 + 32){ txt[x] = key[12];}

       // N - n 
       if(cc == 78 || cc == 78 + 32){ txt[x] = key[13];}

       // O - o 
       if(cc == 79 || cc == 79 + 32){ txt[x] = key[14];}

       // P - p 
       if(cc == 80 || cc == 80 + 32){ txt[x] = key[15];}

       // Q - q 
       if(cc == 81 || cc == 81 + 32){ txt[x] = key[16];}

       // R - r 
       if(cc == 82 || cc == 82 + 32){ txt[x] = key[17];}

       // S - s 
       if(cc == 83 || cc == 83 + 32){ txt[x] = key[18];}

       // T - t  
       if(cc == 84 || cc == 84 + 32){ txt[x] = key[19];}

       // U - u 
       if(cc == 85 || cc == 85 + 32){ txt[x] = key[20];}

       // V - v
       if(cc == 86 || cc == 86 + 32){ txt[x] = key[21];}

       // W - w 
       if(cc == 87 || cc == 87 + 32){ txt[x] = key[22];}

       // X - x
       if(cc == 88 || cc == 88 + 32){ txt[x] = key[23];}

       // Y - y 
       if(cc == 89 || cc == 89 + 32){ txt[x] = key[24];}

       // Z - z 
       if(cc == 90 || cc == 90 + 32){ txt[x] = key[25];}

        if(cc == NULL){
            break; 
        }
    }

    //print the result 
    printf("ciphertext: %s\n", txt); 
}