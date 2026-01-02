#include <stdio.h>
int main(){

    /* " printing SAMIR using *sterik* " 
    
        /* S */
    for (int r = 0; r < 7; ++r) {
        for (int c = 0; c < 5; ++c) {
            int star = 0;
            if (r == 0 || r == 3 || r == 6) star = 1;
            else if (r < 3 && c == 0) star = 1;
            else if (r > 3 && c == 4) star = 1;
            printf(star ? "* " : "  ");
        }
        printf("  ");


        /* A */
        for (int c = 0; c < 5; ++c) {
            int star = 0;
            if (r == 0 && c >= 1 && c <= 3) star = 1;          
            else if (r == 3 && c >= 1 && c <= 3) star = 1;    
            else if (c == 0 && r > 0) star = 1;                
            else if (c == 4 && r > 0) star = 1;                
            printf(star ? "* " : "  ");
        }
        printf("  ");

        /* M */
        for (int c = 0; c < 5; ++c) {
            int star = 0;
            if (c == 0 || c == 4) star = 1;                   
            else if (r <= 2 && (r == c || r + c == 4)) star = 1; 
            printf(star ? "* " : "  ");
        }
        printf("  ");

        /* I */
        for (int c = 0; c < 5; ++c) {
            int star = 0;
            if (r == 0 || r == 6) star = 1;                   
            else if (c == 2) star = 1;                         
            printf(star ? "* " : "  ");
        }
        printf("  ");

        /* R */
        for (int c = 0; c < 5; ++c) {
            int star = 0;
            if (c == 0) star = 1;                             
            else if (r == 0 && c <= 3) star = 1;              
            else if (r == 3 && c <= 3) star = 1;              
            else if (r > 0 && r < 3 && c == 4) star = 1;     
            else if (r > 2 && c == r - 2) star = 1;           
            printf(star ? "* " : "  ");
        }

        printf("\n");
    }
    return 0;
}