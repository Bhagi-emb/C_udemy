# **Concepts and properties of bitwise operators**
There are six types of bit operations, namely: 
* AND(&)
* OR (|)
* XOR (^)
* negation/not (~) 
* left shift (<<)
* right shift(>>)
---
## **Truth Table of Bitwise Operators**

|  A  |  B  |  A & B  | A OR B |  A ^ B  |  ~ A  |
| :-: | :-: | :-----: | :----: | :-----: | :---: |
|  0  |  0  |    0    |    0   |    0    |   1   |
|  0  |  1  |    0    |    1   |    1    |   1   |
|  1  |  0  |    0    |    1   |    1    |   0   |
|  1  |  1  |    1    |    1   |    0    |   0   |
---
## **Example for bitwise operations:**

#### Given numbers:

* **46** in binary (8-bit): `00101110`
* **51** in binary (8-bit): `00110011`

---

### 1. **Bitwise AND (46 & 51)**

\| Bit Position | 0 | 0 | 1 | 0 | 1 | 1 | 1 | 0 | (46)  |
\| Bit Position | 0 | 0 | 1 | 1 | 0 | 0 | 1 | 1 | (51)  |
\| AND ---------| 0 | 0 | 1 | 0 | 0 | 0 | 1 | 0 | Result (34) |

* Result binary: `00100010`
* Decimal: **34**

---

### 2. **Bitwise OR (46 | 51)**

\| Bit Position | 0 | 0 | 1 | 0 | 1 | 1 | 1 | 0 | (46)  |
\| Bit Position | 0 | 0 | 1 | 1 | 0 | 0 | 1 | 1 | (51)  |
\| OR       ---------- | 0 | 0 | 1 | 1 | 1 | 1 | 1 | 1 | Result |

* Result binary: `00111111`
* Decimal: **63**

---

### 3. **Bitwise XOR (46 ⊕ 51)**

\| Bit Position | 0 | 0 | 1 | 0 | 1 | 1 | 1 | 0 | (46)  |
\| Bit Position | 0 | 0 | 1 | 1 | 0 | 0 | 1 | 1 | (51)  |
\| XOR    -------- | 0 | 0 | 0 | 1 | 1 | 1 | 0 | 1 | Result |

* Result binary: `00011101`
* Decimal: **29**

---

### 4. **Bitwise NOT (\~46)**

* 46 decimal = `00101110` in binary
* Bitwise NOT flips every bit → `11010001`

Because computers use **two’s complement** for signed integers, this binary represents a **negative number**:

* `11010001` (two’s complement) = **−47**

---

### 5. **Bitwise NOT (\~51)**

* 51 decimal = `00110011` in binary
* Bitwise NOT flips every bit → `11001100`

Interpreted as two’s complement, this is:

* `11001100` = **−52**



---

## Shift Operations: 


### Types of Shifts

| Shift Direction | Description                                                                            | Symbol |
| --------------- | -------------------------------------------------------------------------------------- | ------ |
| **Left Shift**  | Bits shifted left; high bits discarded; low bits filled with 0                         | `<<`   |
| **Right Shift** | Bits shifted right; low bits discarded; high bits filled differently depending on type | `>>`   |

#### Example of shift operations:
* **Left Shift (<<)**: `29 << 2` (binary: `00011101`)
    0001 1101 (29) `<<` `2` = 0111 0100 (116)
* **Right Shift (>>)**: `29 >> 2` (binary: `00011101`)
    0001 1101 (29) `>>` `2` = 0000 0111 (7)
---

### Types of Right Shifts

| Shift Type                 | High Bits Filling                            | Use Case                       |
| -------------------------- | -------------------------------------------- | ------------------------------ |
| **Arithmetic Right Shift** | Fill with original sign bit (preserves sign) | Used for **signed** integers   |
| **Logical Right Shift**    | Fill with 0 bits                             | Used for **unsigned** integers |

#### Example of type of right shift operations:
`50` (binary: `00110010`)
one's complement: `11001101`
two's complement: `11001110`

* **Arithmetic Right Shift**: `−50 >> 2` (binary: `11101110`)
    1110 1110 (−50) `>>` `2` = **11**11 0011 (−13)
* **Logical Right Shift**: `−50 >> 2` (binary: `11101110`)
    1110 1110 (−50) `>>` `2` = **00**11 0011 (51)
---

### Important Notes

* **Left shift** - behaves the same for arithmetic and logical shifts: low bits filled with zeros.
* For **non-negative numbers**, arithmetic and logical right shifts give the same result.
* For **negative numbers**, arithmetic right shift preserves the sign, while logical right shift does not.

---

### Examples (8-bit signed integers)

| Operation                  | Result (Decimal) | Binary Representation |
| -------------------------- | ---------------- | --------------------- |
| `29 << 2` (left shift)     | 116              | `01110100`            |
| `29 << 3` (left shift)     | −24              | `11101000`            |
| `50 >> 1` (right shift)    | 25               | `00011001`            |
| `50 >> 2` (right shift)    | 12               | `00001100`            |
| `−50 >> 2` (arith. right)  | −13              | `11110011`            |
| `−50 >> 2` (logical right) | 51               | `00110011`            |
 
---
## **Relationship between shift operations and multiplication/division**

| Operation Type             | Shift Symbol | Equivalent Operation    | Notes                    |
| -------------------------- | ------------ | ----------------------- | ------------------------ |
| Left Shift                 | `<<`         | Multiply by $2^k$       | Same for all integers    |
| Right Shift (non-negative) | `>>`         | Integer divide by $2^k$ | Works as expected        |
| Right Shift (negative)     | `>>`         | Not same as `/`         | Rounds down, not to zero |

---
### **Examples of Left shift multiplication: **
* 29 << 2 -> 116  <==>   29 * 2^2 = 29 * 4 = 116
* 29 << 3 -> 232  <==>   29 * 2^3 = 29 * 8 = 232
* 29 << 4 -> 464  <==>   29 * 2^4 = 29 * 16 = 464

#### ** Complexity of Left shift multiplication: **
* 29 * 6 = 174
    * ((29 << 2) = 116) + ((29 << 1) = 58) => 174
    * Because 6=4+2 = 2^2 + 2^1 

##### ⚠️ **Caution:** Can cause overflow, especially with fixed-size types (like 8-bit numbers).
##### 29 << 3=232, which may overflow in 8-bit representation.
---

### **Examples of Right shift multiplication:**
* 50 >> 2 -> 12 :: 50 / 2^2 = 50 / 4 = 12
* 50 >> 3 -> 6  :: 50 / 2^3 = 50 / 8 = 6
* 50 >> 4 -> 3  :: 50 / 2^4 = 50 / 16 = 3

#### **Complexity of Right shift multiplication:**
* 50 / 6 = 8
    * ((50 >> 2) = 12) + ((50 >> 1) = 25) => 8

**✅ For Non-negative numbers:**
Arithmetic Right Shift ≡ Integer Division by 2^k

**⚠️ For Negative numbers:**
* Not equivalent to division!
* Integer division truncates toward 0
* Right shift rounds toward −∞ (floor)
----
| Value | Operation  | Result (Binary) | Result (Decimal) | Explanation                     |
| ----- | ---------- | --------------- | ---------------- | ------------------------------- |
| 29    | `29 << 2`  | `01110100`      | 116              | $29 \times 4$                   |
| 50    | `50 >> 2`  | `00001100`      | 12               | $50 \div 4$                     |
| -50   | `-50 >> 2` | `11110011`      | -13              | Right shift rounds **down**     |
| -50   | `-50 / 4`  | N/A             | -12              | Division rounds **toward zero** |
----
**⚠️ USEFUL TRICKS:**

| **Expression**  | **Effect**                           |
| --------------- | ------------------------------------ |
| `a & (a - 1)`   | Clears lowest 1 bit                  |
| `a & -a`        | Isolates lowest 1 bit                |
| `-a = ~(a - 1)` | Shortcut for computing negative of a |
| `~0 = -1`       | All bits set to 1                    |

---

###  **Bitwise Operation Properties Table**

| **Property**         | **AND (&)**                        | **OR ( \| )**                     | **XOR (⊕)**                     | **NOT (\~)** / Others                                |
| -------------------- | ---------------------------------- | --------------------------------- | ------------------------------- | ---------------------------------------------------- |
| **Idempotent Law**   | a & a = a                          | a \| a = a                        | ❌ Not satisfied                 |                                                      |
| **Commutative Law**  | a & b = b & a                      | a \| b = b \| a                   | a ⊕ b = b ⊕ a                   |                                                      |
| **Associative Law**  | (a & b) & c = a & (b & c)          | (a \| b) \| c = a \| (b \| c)     | (a ⊕ b) ⊕ c = a ⊕ (b ⊕ c)       |                                                      |
| **Distributive Law** | (a & b) \| c = (a \| c) & (b \| c) | (a \| b) & c = (a & c) \| (b & c) | (a ⊕ b) & c = (a & c) ⊕ (b & c) |                                                      |
| **De Morgan’s Law**  |                                    |                                   |                                 | \~ (a & b) = \~a \| \~b <br> \~ (a \| b) = \~a & \~b |
| **Negation Rules**   |                                    |                                   |                                 | −1 = \~0 <br> −a = \~(a − 1)                         |
| **With Zero**        | a & 0 = 0                          | a \| 0 = a                        | a ⊕ 0 = a                       |                                                      |
| **With Itself**      | a & a = a                          | a \| a = a                        | a ⊕ a = 0                       |                                                      |
| **With Complement**  | a & \~a = 0                        | a \| \~a = −1                     |                                 |                                                      |
| **Special Trick 1**  | a & (a − 1) → clears last 1        |                                   |                                 |                                                      |
| **Special Trick 2**  | a & −a → isolates last 1           |                                   |                                 | −a = \~(a − 1)                                       |

---