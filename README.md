# task-1
marsclub recruitment process 

OVERVIEW OF THE PROJECT
------------------------

Embaarking on a project involving **c++** programming languages ,coupled with the utilization of **Linux commands** gave me a good learning experience.Through such a project, I gained a better understanding of software engineering principles,computer science fundamentals,commands,syntax.I think **debugging** the code(essential for strong dose as it helps where have we done the mistake) and the **syntax**(essential for medium dose) are the essential and required concepts for the given task#1. 
Additionally, working within the Linux environment can enhance one's ability to navigate and utilize the command line, manage processes, files, and memory, and compile code effectively. 

The project may also offer insights into the importance of cross-platform development and the nuances of different operating systems, as well as the opportunity to engage with a variety of development tools that are particularly prevalent in the Linux ecosystem.

In C++, key areas of focus include understanding **object-oriented programming, mastering the use of classes, constructors, destructors, and understanding the principles of encapsulation, inheritance**.
For C, the learning curve involves grasping **low-level programming constructs, pointers, memory management, and the manipulation of strings and arrays**. 
Linux commands will introduce you to the **Unix-like environment, teaching you file management, process control, and system administration**.


 _______________________________________________________________
|                |                      |                        |
|    LIGHT DOSE  | *  UBUNTU COMMANDS   |  SHELL SCRIPTING       |
|________________|______________________|_______________________ |
|                |                      |                        |
|   MEDIUM DOSE  | * CREATE A VARIABL   | * HEIRARCHY            |
| ______________________________________________________________ | 
|                |                      |                        |
|   STRONG DOSE  |*PLAYING WITH NUMBERS |  PLAYING WITH IMAGES   |
|_______________________________________________________________ |






 **LIGHT DOSE**  :-
  --------------

  
THE **LINUX COMMANDS** I LEARNT:- 
Commands such as **ls** for listing out the names of files, **pwd** - present working directory, **cd** - current directory, **mkdir**- making new directory, **mv** - moving one file from one place to another and **rm** - removing a directory are fundamental for navigation and manipulation of the filesystem.
I have submitted in the form of screenshot of some commands in the form of a story.

This journey will not only enhanced my technical skills but also developed my problem-solving abilities and deepened my understanding of computer science fundamentals.

TOPICS I LEARNT :-
I gained some knowledge on topics like header files, functions,snippet idea, different layers of the image(rbg), logic for playing with numbers.




 
 **STRONG DOSE OVERVIEW**  :-
 ------------------------


Strong dose was really interesting than medium dose. Medium dose is literally easy compared to strong dose. Strong dose involved 2 codes named playing with numbers and playing with images.
**Playing with numbers** involved a good logic which must be best and efficient in terms of time complexity and space complexity.

This C++ code is a practical example of how to apply programming concepts to solve a mathematical problem. It demonstrates the use of functions, loops, and conditional statements to find four consecutive integers that each have four distinct prime factors. The countDistinctPrimeFactors function is a key component, efficiently calculating the number of distinct prime factors for a given integer. The main function uses a while loop to iterate through numbers, checking the condition with the aforementioned function. When four consecutive numbers satisfying the condition are found, the program outputs them. This exercise can enhance understanding of number theory, algorithm optimization, and the importance of writing clear, maintainable code. It also shows how computational thinking can be used to approach and solve problems systematically.

**THE LOGIC** :-

The code defines a function countDistinctPrimeFactors that calculates the number of distinct prime factors of a given integer n. 
It initializes a count to zero and iterates through all numbers from 2 up to the square root of n. 
If i is a factor of n, it increments the count and divides n by i repeatedly until i is no longer a factor.
After the loop, if n is greater than 1, it means n is a prime number and should be counted as a distinct prime factor, so the count is incremented again.
The main function uses this to find the first four consecutive integers that each have exactly four distinct prime factors. 
It does this by iterating through integers starting from 1, checking the number of distinct prime factors for each. If an integer has four distinct prime factors, consecutiveCount is incremented.
If the count reaches four, it means four consecutive numbers have been found, and their values are printed. 
If an integer does not have four distinct prime factors, the consecutiveCount is reset to zero. 
The loop continues until the condition is met, and then the program ends.


**APPLICATION** :-
The pursuit of finding four consecutive integers with distinct prime factors is a problem that stems from the field of number theory, a branch of pure mathematics devoted primarily to the study of the integers and integer-valued functions. This particular problem is an example of how mathematicians explore the properties and patterns of numbers. It does not necessarily have a direct application but serves as a way to understand the complexity and the behavior of numbers under certain conditions. Such problems and their solutions can contribute to the development of mathematical theory, which might find applications in cryptography, computer science, and other fields in the future. Moreover, solving these problems can also help to improve problem-solving skills and logical reasoning, which are valuable in various scientific and engineering disciplines.



 
 **MEDIUM DOSE OVERVIEW**  :-
 -------------------------


Medium Dose involves some basic logic and gave a good experience.Writing this code likely provided a multifaceted learning experience.

1. **Create a variable** :-

Firstly, it involves the use of structures in C++, which are fundamental data types that group variables of different types under a single name.
Implementing a lambda function for the print statement is an advanced feature that teaches about anonymous functions and their utility in modern C++.
The use of the '**auto**' keyword for type inference introduces a convenient way to declare variables without explicitly stating their type, which can make the code cleaner and more readable. 
Additionally, the process of assigning values to the members of a structure and then using those values within a program helps in understanding the flow of data within a C++ application.
Overall, this exercise would enhance **one's understanding** of C++ syntax, structures, lambda expressions, and the auto keyword, while also providing **practical experience** in implementing these concepts in a simple program.

I learnt few things about **lambda functions and it's applications**.Lambda functions in programming, particularly in C++, are a powerful feature that can be used in a variety of applications due to their flexibility and conciseness. They are often used in algorithms that require **custom comparison logic, such as sorting a vector of custom objects**. Lambda functions are also utilized in event-driven programming, where they can be passed as callbacks to handle events without the need for defining separate functions. In **GUI** applications, they can simplify the process of connecting signals and slots, making the code more readable. Furthermore, they are useful in functional programming paradigms within C++, such as in the use of map, filter, and reduce operations on collections. They can also be employed in concurrent programming to encapsulate tasks that will be run on separate threads. Overall, lambda functions provide a convenient and efficient way to define anonymous functions inline, streamlining the code and enhancing its maintainability.


2. **Hierarchy** :-
 
Writing this code provided a practical understanding of object-oriented programming (OOP) concepts, particularly the use of classes and objects to model a hierarchical structure. 
It demonstrated how to create a class with attributes and methods, instantiate objects, and establish relationships between them.

The process of adding members to a hierarchy and implementing a method to simulate communication within the hierarchy helped solidify the understanding of parent-child relationships in OOP.
Additionally, it was a valuable exercise in using pointers and dynamic memory allocation with the 'new' keyword, which is crucial for managing resources in C++.

Debugging and testing the code to ensure proper functionality of the hierarchy traversal was also an insightful experience, as it required careful attention to detail and logical thinking.
Overall, the task was an enriching experience that enhanced problem-solving skills and deepened the comprehension of OOP principles.

**POLYMORPHISM** :-

Polymorphism in the context of the provided C++ code is demonstrated through the ability of different class instances—Lead, CoLead, TeamLead, and TeamMember—to use the same interface for the communicate method, while each class has its own implementation of this method. This is an example of polymorphism, where the same function call, communicate, can result in different behaviors depending on the type of object invoking the method. The base class OrganizationMember defines a virtual function communicate, which is then overridden by each derived class. When communicate is called on an object, C++ determines which version of the function to execute based on the object's class. This allows for objects of different classes to be treated as objects of a common superclass, simplifying code management and enabling more flexible and reusable code.


*
Finally, I learnt a lot of things while doing this project.While the second code gave a different experience like writing code, especially when it involves creating a hierarchy of classes, is an enlightening experience that improved my object-oriented programming skills. In the process of developing this particular code, I learnt about the importance of class relationships and how objects interact within a system. The use of pointers to create dynamic objects and the implementation of member functions to add and communicate between objects are crucial aspects that reflect real-world organizational structures. Moreover, managing memory through dynamic allocation and understanding the flow of control in a program with multiple objects are valuable skills gained.
*
