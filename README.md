# unsigned 8-bit 1 byte reversal
bit reversal for unsigned byte without a lookup table

_uint8_t_ bit reverse ( _uint8_t_ ) 
 
 • **i** read bit of _uint8_t_ starting on the right (blue)
 
 • **j** read bit of _uint8_t_ starting on the left (red)

 • compare **blue** and **red** 
 
 • if they don't match, toggle bits 

 • toggle bit only if **j** is greater than **i**
 
 • return _uint8_t_

![image](https://user-images.githubusercontent.com/40836157/127370754-7204681b-330a-4885-96af-083d7e0adff2.png)

example:

```c
int main () {
      uint8_t sample = 0xF1;
      
      printf("sample %#x\n", sample);
      sample = reverse ( sample ); 
      printf("sample %#x\n", sample);
      
      /* 0xF1    ---> 0x8F     */
      /* 1111001 ---> 10001111 */
}
```
