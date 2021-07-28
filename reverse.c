
/* don't need some of these headers, but endian/swap operators are provided here if anyone wants to take a look */
#include <stdio.h>
#include <math.h>
#include <stdint.h>
#include <string.h>
#include <arpa/inet.h>
#include <endian.h>

/* UINT8_T */
uint8_t reverse ( uint8_t in ) {
    
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
}//reverse()

