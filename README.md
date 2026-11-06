# **CIS-165 Lab 7: BMI and Color Mixer**

## **Program 1: BMI Calculator**

### **Plan**

**Inputs**

* Weight in pounds (`double`)  
* Height in inches (`double`)

**Variables**

* Weight  
* Height  
* Calculated BMI

**Validation**

* Check that weight is greater than zero.  
* Check that height is greater than zero.  
* If either value is invalid, display an error and stop before calculating BMI.

**Calculation**

* Multiply weight by 703\.  
* Divide the result by height squared.  
* Store the calculated BMI in a result variable.

**Classification**

* Below 18.5: Underweight  
* 18.5 through 25.0, inclusive: Optimal weight  
* Above 25.0: Overweight

**Output**

* Display BMI to two decimal places.  
* Display the corresponding classification.

### 

### **BMI Test Records**

| Test | Inputs (weight, height) | Expected result | Actual result | Match/correction |
| ----- | ----- | ----- | ----- | ----- |
| 1 | 100, 70 | 14.35 — Underweight | 14.35 | Match |
| 2 | 150, 70 | 21.52 — Optimal weight | 21.5204 | Incorrect float precision |
| 3 | 200, 70 | 28.69 — Overweight | 28.6939 | Incorrect float precision |
| 4 | 150, 0 | Invalid entry. Number must be greater than zero. Program terminated. | Same as expected  | Match |
| 5 | \-150, 70 | *After first entry*: Invalid entry. Number must be greater than zero. Program terminated. | Invalid entry. Number must be greater than zero. Program terminated.  | Match |
| 6 (additional) | 0, 70 | *After second entry*: Invalid entry. Number must be greater than zero. Program terminated. | Invalid entry. Number must be greater than zero. Program terminated. | Match |

The additional test checks whether zero weight is rejected even when height is valid.

### **BMI Boundary Explanation**

The optimal category includes both 18.5 and 25.0. The classification logic must include the lower and upper endpoints rather than treating them as underweight or overweight.

The classification should use the original calculated BMI, not its rounded display value.

---

## **Program 2: Color Mixer**

### **Plan**

**Inputs**

* First primary-color name  
* Second primary-color name

**Variables**

* Two character arrays to hold the input colors.  
* A named constant defining the array size.  
* A result or output representing the resulting color.

**Validation**

* Check that both inputs are valid primary colors.  
* Valid inputs are red, blue, and yellow.  
* Use `strcmp` from the `<cstring>` library to compare character-array contents.  
* Use bounded input with `setw` to prevent exceeding the array size.

**Comparison and mixing**

* Red and blue produce purple.  
* Red and yellow produce orange.  
* Blue and yellow produce green.  
* Two identical valid primary colors produce that same color.  
* Either invalid input should produce an error message.

**Output**

* Display the resulting color or an appropriate error message.

### **Color Mixer Test Records**

| Test | Inputs | Expected result | Actual result | Match/correction |
| ----- | ----- | ----- | ----- | ----- |
| 1 | red, blue | The color is purple. | purple | Pending |
| 2 | red, yellow | The color is orange | Pending | Pending |
| 3 | blue, yellow | The color is green. | The color is green. | Match |
| 4 | blue, red | The color is purple. | The color is purple. | Match |
| 5 | red, red | The color is red. | The color is red. | Match |
| 6 | orange, blue | Invalid Color. Program Terminating. | Invalid Color. Program Terminating. | Match |
| 7 | red, orange | Invalid Color. Program Terminating. | Invalid Color. Program Terminating. | Match |
| 8 | yellow, red | The color is orange. | The color is orange. | Match |
| 9 | yellow, blue | The color is green. | The color is green. | Match |
| 10 | blue, blue | The color is blue. | The color is blue. | Match |
| 11 | yellow, yellow | The color is yellow. | The color is yellow. | Match |

The additional tests check reversed input order for the remaining mixtures and verify that identical blue and yellow inputs are handled correctly.

---

## **Code Explanations**

### **1\. How does the BMI formula use pounds and inches? Why is height multiplied by itself?**

The formula converts the weight and height measurements into a BMI value. Height is squared as BMI uses height multiplied by height in the denominator.

### **2\. How do the conditions handle exactly 18.5 and 25.0? Does condition order matter?**

The conditions are arranged so values below 18.5 are underweight, values from 18.5 through 25.0 are optimal, and values above 25.0 are overweight. Defining the comparison operators correctly prevents gaps or overlapping classifications.

### **3\. Why check weight and height before calculating BMI?**

Both must be positive. Zero or negative values are invalid. Checking them first stops an invalid calculation and so the program displays the appropriate error instead.

### **4\. Why classify the unrounded BMI and round only its displayed value?**

Rounding before could change which category a value belongs to. Keeping the original value for comparison keeps the intended classification. Formatting only changes how the return output.

### **5\. What does strcmp return for equal text? Why is \== not the correct comparison for character-array contents?**

`strcmp` returns zero when two strings contain identical text. It returns a negative or positive value when the strings are different in their order. The `==` operator does not compare the character contents. It compares them when used with arrays.

### **6\. How do you make each mixture work in either input order and handle identical primary colors?**

It should account for both inputs in either order ie. blue and red or red and blue. Two of the same color must also be evaluated if valid and return the same color.

### **7\. How do you check for an invalid color in either input position?**

Each user input must be compared against each three valid primary colors. If either fails, the program should display an error.

### **8\. How do named constants and result variables make programs easier to read and check?**

Named constants provide a single value that should not change. Variables give calculations and decisions meaningful names, making the program easier to understand, test, and maintain.

---

## **Compile and Run Instructions**

These programs were written in an online editor–[www\.onlinegdb.com](http://www.onlinegdb.com). To run a program, upload either of them into the IDE workspace by using the upload button, then use the green run button to execute the program. Note: only one program with int main() can be used, requiring either a new tab or browser window, refreshing the page, or uploading a separate program and deleting the current one. 

