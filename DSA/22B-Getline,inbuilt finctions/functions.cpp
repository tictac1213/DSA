// // strlen(s) for length
// // strcmp(s1,s2) for comparing strings returns 1/0
// // strcpy(dest,src) for copying
// C++ String Functions
// 1. String Length: string::length
// The string length function calculates the length (number of characters) of a string.

// Example:

// #include <iostream>
// #include <string>
// int main() {
//   string str = "Hello, World!";
//   int length = str.size();  // Returns the length of the string, which is 13
//   cout << "The length of the string is: " << length << endl;
//     return 0;
// }

// Output:

// The length of the string is: 13

// 2. String Copy: strcpy
// The string copy function copies a string from a source location to a destination location.

// Example:

// #include <iostream>
// #include <cmath>
// int main() {
//     char source[] = "Hello, World!"; // Source string
//     char destination[20]; // Destination character array
//     strcpy(destination, source); // Copy the source string to the destination
//     cout << "Source string: " << source << endl;
//     cout << "Copied string: " << destination << endl;
//     return 0;
// }

// Output:

// Source string: Hello, World!
// Copied string: Hello, World!

// 3. String Comparison: string::compare
// The string comparison function compares two strings lexicographically and returns an integer representing the result.

// Example:#include <iostream>
// #include <string>
// int main() {
//   string str1 = "apple";
//   string str2 = "banana";
//   int result = str1.compare(str2);
//   if (result == 0) {
//     cout << "The strings are equal." << endl;
//   } else if (result < 0) {
//     cout << "The string str1 is less than str2." << endl;
//   } else {
//     cout << "The string str1 is greater than str2." << endl;
//   }
//   return 0;
// }

// Output:

// The string str1 is less than str2.

// 4. String Conversion to Integer: stoi
// This function converts a string to an integer.

// Example:#include <iostream>
// using namespace std;
// int main() {
//   string str = "123";
//   int num = stoi(str);
//   cout << num << endl;
//   return 0;
// }

// Output:

// 123

// 5. String Conversion to Double: stod
// This function converts a string to a double.

// Example:#include <iostream>
// using namespace std;
// int main() {
//   string str = "3.14";
//   double num = stod(str);
//   cout << num << endl;
//   return 0;
// }

// Output:

// 3.14

// 6. Numeric to String Conversion: to_string
// This function converts a number to a string.

// Example:#include <iostream>
// #include <string>
// using namespace std;
// int main() {
//   int num = 42;
//   string str = to_string(num);
//   cout << str << endl;
//   return 0;
// }

// Output:

// 42

// 7. String Concatenation: string::operator+
// This function concatenates two strings. 

// Example:

// #include <iostream>
// #include <string>
// using namespace std;
// int main() {
//   string str1 = "Hello";
//   string str2 = " World!";
//   string result = str1 + str2;
//   cout << result << endl;
//   return 0;
// }Output:

// Hello World!

// 8. String Substring: string::substr
// The string substring function extracts a substring from a string, starting at a specified position and with a specified length.

// Example:

// #include <iostream>
// #include <string>
// int main() {
//   string str = "Hello, World!";
//   string substr = str.substr(7, 5);  // Extracts "World" from the original string
//   cout << "The substring is: " << substr << endl;
//   return 0;
// }

// Output:

// The substring is: World

// 9. String Padding: setw
// The string padding function pads a string with a specified character or space to a certain width.

// Example:#include <iostream>
// #include <string>
// using namespace std;
// int main() {
//   string str = "Hello";
//   cout << setw(10) << setfill(' ') << str << endl;
//   return 0;
// }

// Output:

// Hello

// 10. String Replacement:
// This function replaces a portion of a string with another string.
// std::replace( s.begin(), s.end(), 'x', 'y'); // replace all 'x' to 'y'

// Example:
// #include <iostream>
// #include <string>
// using namespace std;
// int main() {
//   string str = "Hello, World!";
//   str.replace(7, 5, "Universe");  // Replaces the substring "World" with "Universe"
//   cout << str << endl;=
//   return 0;
// }

// Output: 

// Hello, Universe!