# **Bit Manipulation**

_In daily life,_
The most commonly used base system is the **Decimal**. It has 10 digits: 0, 1, 2, 3, 4, 5, 6, 7, 8, and 9.
In computer science,
**Binary** system is most commonly used. It has two digits: 0, and 1. 
**Octal (base-8)** - Octal has eight digits: 0, 1, 2, 3, 4, 5, 6, and 7.
**Hexadecimal** - has sixteen digits: in addition to 0 to 9, there are A, B, C, D, E, and F, corresponding to 10, 11, 12, 13, 14, 15 in decimal, respectively.

## **Conversion between bases:**
### **Non-decimal to decimal:**

* _**convert the OCTAL number 720.5(8) to Decimal.**_
720.5(8) = 7 * 8^2 + 2 * 8^1 + 0 * 8^0 + 5 * 8^-1
720.5(8) = 7 * 64 + 2 * 8 + 0 * 1 + 5 * 0.125
720.5(8) = 448 + 16 + 0 + 0.625
720.5(8) = 464.625(10)

* _**Convert the HEXA number 3F.A(16) to Decimal.**_$$
3F_{16} = (3 × 16^1) + (15 × 16^0) = 48 + 15 = 63
$$
$$
A = 10, \quad \text{so} \quad 0.A_{16} = 10 × 16^{-1} = 10 × \frac{1}{16} = 0.625
$$
$$
3F.A_{16} = 63 + 0.625 = \boxed{63.625}_{10}
$$

* _**Convert the BINARY number 1011.101(2) to Decimal.**_
$$
1×2^3 + 0×2^2 + 1×2^1 + 1×2^0 = 8 + 0 + 2 + 1 = 11
$$
$$
1×2^{-1} + 0×2^{-2} + 1×2^{-3} = 0.5 + 0 + 0.125 = 0.625
$$
$$
1011.101_2 = \boxed{11.625}_{10}
$$


### **Decimal to non-decimal:**
To convert a decimal number to a base-X non-decimal, we need to convert the integer part and the fractional part, separately.

**Tip:** 
To convert the integer part, we will integer divide it by X until it reaches 0, and record the remainder each time. Traversing the remainder in reverse order will give us the representation in base-X system.

* _**convert 50 in base-10(**decimal**) to base-2(**binary**)**_
50 / 2 = 25 remainder 0
25 / 2 = 12 remainder 1
12 / 2 = 6 remainder 0
6 / 2 = 3 remainder 0
3 / 2 = 1 remainder 1
1 / 2 = 0 remainder 1
So, 50(10) = 110010(2) (remainders in reverse order)

* _**convert 50.625 in base-10(**decimal**) to base-2(**binary**)**_
0.625 × 2 = 1.25 → 1  
0.25  × 2 = 0.5  → 0  
0.5   × 2 = 1.0  → 1
So, 50.625(10) = 110010.101(2)

* _**convert 50.625 in base-10(**decimal**) to base-8(**octal**)**_
50 ÷ 8 = 6, remainder 2  
6 ÷ 8  = 0, remainder 6
0.625 × 8 = 5.0 → 5
So, 50.625(10) = 62.5(8) (remainders in reverse order)

* _**convert 50.625 in base-10(**decimal**) to base-16(**hexadecimal**)**_
50 ÷ 16 = 3, remainder 2
3 ÷ 16  = 0, remainder 3
0.625 × 16 = 10.0 → A
So, 50.625(10) = 32.A(16)

### **Conversion between other bases**
Let’s look at an example. 
We can group digits in a binary number 
$$
101110010_2
$$
​In groups of three as 101|110|010 - octal
$$
562_8  
$$ 
or
In groups of four as 1|0111|0010 - hexadecimal(16)
$$
172_{16}
$$



 

