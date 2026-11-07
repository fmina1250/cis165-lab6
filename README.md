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