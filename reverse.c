
#include <stdio.h>
#include <math.h>
#include <stdint.h>
#include <string.h>
#include <arpa/inet.h>
#include <endian.h>

uint8_t reverse ( uint8_t in ) {
    
    /* desired output */
    uint8_t output; 
    
    /* length of bits to iterate */
    int len = 8;
        
    /* markers for synchronous reading of the value for comparison */
    int blue; /* read from right to left */
    int red;  /* read from left to right */
    
    /* iterators for reading */
    int i, j = len - 1;
    
    /* iterate the value and compare */
    for (i = 0; i < len; i++ ) {
        blue = (in >> i) & 1;
        red = (in >> j) & 1;
        
        printf("blue: [%d] red: [%d]\n", blue, red);
        /* if bits mismatch, toggle */
        if (blue!=red) {
            if (j > i) {
              in =  in ^ (1 << j); 
              in = in ^ (1 << i);
            }
        }//if()
        j--;
    }//for(){}
    
    printf("output: [%d]\n", in);
    return in;
}


