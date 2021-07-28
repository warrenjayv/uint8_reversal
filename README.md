# unsigned 8-bit 1 byte reversal
bit reversal for unsigned byte without a lookup table

uint8_t bit reverse ( uint8_t ) 
 
 • **i** read bit of _uint8_t_ starting on the right 
 
 • **j** read bit of _uint8_t_ starting on the left

 • compare **blue** and **red** 
 
 • if they don't match, toggle bits 

 • toggle bit only if **j** is greater than **i**
 
 • return _uint8_t_

![image](https://user-images.githubusercontent.com/40836157/127370754-7204681b-330a-4885-96af-083d7e0adff2.png)
