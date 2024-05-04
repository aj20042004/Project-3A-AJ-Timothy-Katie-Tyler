# Binary Tree Infix Expression Parser

Overview:
- This project aims to implement a binary tree infix expression parser in C++ using binary trees. The parser will be capable of evaluating arithmetic and logical expressions efficiently.

Technical Requirements:
- Parse infix expressions with support for arithmetic and logical operators with the specified precedencies.
- Handle operator precedence according to specified rules.
- Parse an expression given in a string format. The program should be flexible with the given expressions. The user should not worry about writing the spaces between operands and operators.
- Build an expression tree using postfix string
- Evaluate expressions efficiently.
- The main() program should read expressions from an input file, and then output the evaluation results to the console.
- Provide error handling for invalid expressions or divide-by-zero errors.

Implementation:
- The implementation will involve creating classes for expression parsing, evaluation, building, and error handling. The project will adhere to Object-Oriented Programming principles for better organization and scalability.

How to Use:
- Clone the repository to your local machine.
- Compile the source code using a C++ compiler.
- Run the compiled program and provide input expressions to evaluate.

Contributing:
- Fork the repository.
- Create a new branch for your feature or bug fix.
- Make your changes and test thoroughly.
- Submit a pull request detailing your changes.

License:
- This project is licensed under the MIT License.

Author:
- Athul Jaishankar, Timothy Huffman, Kathleen Dunn, Tyler Blackmore.

Version:
- 1.0.0

Changelog:
- 1.0.0 (Date): Initial release.

Future Improvements:
- Support for more data types:
  Extend the parser to support a wider range of data types beyond just integers. This could include floating-point numbers, strings, or even-defined data types, thereby increasing the versatility of the parser.
 
- Memory Management:
  Make sure memory usage is optimized, especially when dealing with larger expressions. Techniques like object pooling or even smart pointers can efficiently manage memory while avoiding any unnecessary 
  allocations or deallocations.

-	Enhanced Operator Support:
  Introduce support for additional operators or functionalities, such as mathematical functions (e.g., square root, exponentiation), bitwise operations, or custom-defined operators. This would broaden the 
  capabilities of the parser and make it more adaptable to diverse use cases.

- Error Handling and Reporting:
  Implement more robust error handling mechanisms to handle various edge cases gracefully. Provide informative error messages to users to aid in debugging and understanding issues.

- Database Integration:
  Integrating a database system into the application to store and manage expression data, user preferences and evaluation results. This integration can provide advantages such as persistence, scalability and data 
  management capabilities.

- History Session: 
  Implementing a history and session management would allow the users to refer back to previous calculations.

- Graphical User Interface (GUI): 
  Developing a GUI application to provide a user-friendly interface for inputting expressions, displaying the results and possibly visualizing the parsing, building and evaluating process. A GUI can improve 
  accessibility and usability, especially for users less familiar with command-line interfaces.

- Cross-Platform Compatibility: 
  Ensure compatibility with multiple platforms (e.g., Windows, macOS, Linux) by optimizing code and leveraging platform-agnostic libraries or frameworks. This would maximize the reach of the parser and make it 
  accessible to a broader user base.


