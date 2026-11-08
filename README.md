# Lab Plan

## Program 1: Body Mass Index (`bmi.cpp`)
* **Inputs:** Weight in pounds (`double`), height in inches (`double`).
* **Variables:** 
  * `weight` (user weight input)
  * `height` (user height input)
  * `bmi` (calculated Body Mass Index)
* **Validation Checks:** 
  * Verify both `weight > 0` and `height > 0`. If either is less than or equal to zero, display an error message and terminate the program using `return 1;`.
* **Calculations & Comparisons:** 
  * `bmi = weight * 703.0 / (height * height);`
  * Check BMI ranges using conditional logic:
    * `< 18.5`: Underweight
    * `18.5` through `25.0`: Optimal weight
    * `> 25.0`: Overweight
* **Required Output:** 
  * Error message if validation fails.
  * Formatted BMI value displayed to two decimal places using `<iomanip>` (`fixed` and `setprecision(2)`), followed by its corresponding classification message.
* **Tests:** 
  * Test 1: Negative or zero input will display error message and exits
  * Test 2: Underweight range
  * Test 3: Optimal weight range
  * Test 4: Overweight range
  

## Program 2: Color Mixer (`color_mixer.cpp`)
* **Inputs:** Two primary color names as strings (`char` arrays).
* **Variables:** 
  * `COLOR_SIZE` (named constant set to 20)
  * `first_color` (first primary color input array)
  * `second_color` (second primary color input array)
* **Validation Checks:** 
  * Verify that both inputs are valid primary colors (`red`, `blue`, or `yellow`). If either input is invalid, display an error message and exit.
* **Calculations & Comparisons:** 
  * Use `strcmp()` from `<cstring>` to compare the character arrays against `"red"`, `"blue"`, and `"yellow"`.
  * Determine color mixing rules:
    * `red` + `blue` (or `blue` + `red`) -> `purple`
    * `red` + `yellow` (or `yellow` + `red`) -> `orange`
    * `blue` + `yellow` (or `yellow` + `blue`) -> `green`
    * Matching inputs (e.g., `red` + `red`) -> outputs the matching color.
* **Required Output:** 
  * Clear prompts for input.
  * The resulting mixed color or an error message if invalid/unsupported inputs are entered.
* **Tests:** 
  * Test 1: `red` and `blue` -> `purple`
  * Test 2: `yellow` and `red` -> `orange`
  * Test 3: `blue` and `yellow` -> `green`
  * Test 4: `red` and `red` -> `red`

## Code Explanation

1. **How does the BMI formula use pounds and inches? Why is `height * height` needed?**
   * The formula multiplies the weight in pounds by 703 to scale the imperial units appropriately. Squaring the height is part of the calculation for the BMI.

2. **How do your conditions handle exactly 18.5 and exactly 25.0? Does the order of your conditions matter?**
   * Yes, order matters. We check if `bmi < 18.5` first, then `bmi <= 25.0` (which catches everything from 18.5 up to 25.0), followed by an `else` for anything above 25.0. This sequential flow avoids gaps and handles boundary values accurately.

3. **Why do you check weight and height before calculating BMI?**
   * Validating that both values are greater than zero before doing any math prevents invalid physical measurements that lead to dividing by zero which lead to errors.

4. **Why do you classify the unrounded BMI and round only its displayed value?**
   * Classifying the raw unrounded value ensures accuracy against threshold boundaries, while formatting with `fixed` and `setprecision(2)` is used solely for presentation at the output stage without altering stored data.

5. **What does `strcmp` return for equal text? Why is `==` not the correct comparison for character-array contents?**
   * `strcmp` returns `0` when two character arrays match. Using `==` compares their memory address pointers instead of their actual text contents, which would fail to compare words properly.

6. **How do you make each mixture work in either input order and handle two identical primary colors?**
   * We use logical `||` operators to check both permutation options for every pair (e.g., red + blue or blue + red). For identical inputs, we compare the two arrays using `strcmp` to output the matching color directly.

7. **How do you check for an invalid color in either input position?**
   * We evaluate each color input separately against all valid options (`red`, `blue`, and `yellow`). If either input fails validation, an error message is displayed and the program terminates early.

8. **How do named constants and result variables make your programs easier to read and check?**
   * Named constants (like `COLOR_SIZE`) eliminate magic numbers and give clear meaning to array bounds, while result variables store logic states separately from output statements, making the code much easier to debug and follow.

## Compile & Run Instructions
Compile and run each program separately using the following terminal commands:

### Program 1: Body Mass Index (`bmi.cpp`)
```bash
g++ -std=c++17 -Wall -Wextra bmi.cpp -o bmi
./bmi or .\bmi
```

### Program 2: Color Mixer (`color_mixer.cpp`)
```bash
g++ -std=c++17 -Wall -Wextra color_mixer.cpp -o color_mixer
./color_mixer or .\color_mixer
```