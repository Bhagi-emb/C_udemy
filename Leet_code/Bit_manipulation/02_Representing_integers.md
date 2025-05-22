
# **Representing Integers in Binary**
---
# **Basics of intergers**
| Unit   | Bits | Values It Can Represent |
| ------ | ---- | ----------------------- |
| Bit    | 1    | 2 values (0 or 1)       |
| Nibble | 4    | 16 values               |
| Byte   | 8    | 256 values              |

---
# **Signed and Unsigned intergers**

| Type     | MSB (Leftmost Bit) | Range (8-bit) | Example Binary   |
| -------- | ------------------ | ------------- | ---------------- |
| Unsigned | Used for value     | 0 to 255      | `11111111` = 255 |
| Signed   | Used for sign      | -128 to +127  | `11111111` = -1  |


* **Why It Matters:**
    * Use unsigned when you only need positive numbers (e.g., memory addresses, counters).
    * Use signed when you need negative values (e.g., temperatures, balances).
---
# **Machine number and truth value**

* The **binary representation** of a number stored in a computer is called its **machine number**.
* Machine numbers are usually **signed**:

  * The **highest bit** (leftmost) is the **sign bit**:

    * `0` → non-negative
    * `1` → negative
* The **truth value** is the **actual intended decimal value**, taking the sign into account.

---

#### 🔹 Example (8-bit machine numbers):

| Binary (Machine Number) | Interpreted as | Truth Value |
| ----------------------- | -------------- | ----------- |
| `00001010`              | 10             | +10         |
| `10001010`              | 138 (unsigned) | **−10**     |
| `00000010`              | 2              | +2          |
| `10000010`              | 130 (unsigned) | **−2**      |

> ⚠️ Even though `10001010` = 138 in unsigned decimal, its **truth value** (when treated as a signed number) is **−10**.
---

# **The original code, inverse code, and complement code**

### **Original Code (Sign-Magnitude Form)**

* **Structure**:

  * **1st bit** = sign bit (`0` = positive, `1` = negative)
  * Remaining **7 bits** = absolute value (magnitude)

* Examples (8-bit):

  * `+10` → `00001010`
  * `−10` → `10001010`

* **Value Range**:

  * From `−127` (`11111111`) to `+127` (`01111111`)

---

### **Inverse Code (One's Complement)**

* **For positive numbers**: same as original code

* **For negative numbers**: flip all bits of the absolute value (sign bit stays `1`)

* Examples:

  * `+10` → `00001010` (same)
  * `−10`:

    * Original: `10001010`
    * Inverse: `11110101`

---

### **Complement Code (Two's Complement)**

* **For positive numbers**: same as original and inverse

* **For negative numbers**: inverse code **+1**

* Examples:

  * `+10` → `00001010`
  * `−10`:

    * Inverse: `11110101`
    * Complement: `11110110`

* **Two’s complement** is the format **used by most computers** because it's efficient for arithmetic.

---

### Comparison Table:

| Number | Original Code | Inverse Code (One's Complement) | Complement Code (Two's Complement) |
| ------ | ------------- | ------------------------------- | ---------------------------------- |
| +10    | `00001010`    | `00001010`                      | `00001010`                         |
| −10    | `10001010`    | `11110101`                      | `11110110`                         |

---
| **Representation**                | **Pros**                                                                                                                 | **Cons**                                                                             |
| --------------------------------- | ------------------------------------------------------------------------------------------------------------------------ | ------------------------------------------------------------------------------------ |
| **Original (Sign-Magnitude)**     | - Easy to understand for humans<br>- Sign bit is obvious (`0` = +, `1` = −)                                              | - Two representations of zero (`+0` and `−0`)<br>- Arithmetic operations are complex |
| **Inverse (One’s Complement)**    | - Subtraction is easier than with original code<br>- Still somewhat human-readable                                       | - Still has two representations of zero<br>- Requires end-around carry for addition  |
| **Complement (Two’s Complement)** | - Only one zero (`00000000`)<br>- Simple and efficient for arithmetic<br>- One extra negative value (e.g. −128 in 8-bit) | - Less intuitive for humans<br>- Negative values not directly obvious from binary    |
