/*
    |   Documentation:
    |
    |   * put here all references I looked up during the course.
    |   -----------------------------------
    |   Video #16:  Multidimentional Arrays
    |   -----------------------------------
    |
    |   Multidimensional Arrays in C / C++
    |   see here: https://www.geeksforgeeks.org/multidimensional-arrays-c-cpp/
    |
    |   ---------------------------------------------
    |   Video #17: Multidimentional Arrays - practice 
    |   ---------------------------------------------
    |
    |   enumeration in cpp
    |   see here: https://en.cppreference.com/w/cpp/language/enum
    |             https://www.programiz.com/cpp-programming/enumeration
    |             https://www.geeksforgeeks.org/enumeration-enum-c/
    |
    |   char array initialization
    |   see here: http://www.cplusplus.com/doc/tutorial/ntcs/
    |
    |
    |   Homework: connect 4 game
    |
    |   making delay time function
    |   see here: https://stackoverflow.com/questions/158585/how-do-you-add-a-timed-delay-to-a-c-program
    |             http://www.cplusplus.com/forum/beginner/27291/
    |             http://www.cplusplus.com/forum/beginner/27291/
    |             http://www.cplusplus.com/reference/ctime/clock/
    |             http://www.cplusplus.com/forum/unices/10491/#msg49054
    |
    |   Tab space Vs. 4 spaces
    |   see here: http://www.cplusplus.com/forum/lounge/249840/
    |
    |
    |   Random and how to get different resutl each time
    |   see here: https://stackoverflow.com/questions/7748071/same-random-numbers-every-time-i-run-the-program
    |             https://stackoverflow.com/questions/7560114/random-number-c-in-some-range
    |             http://www.fredosaurus.com/notes-cpp/misc/random.html
    |             https://en.cppreference.com/w/cpp/numeric/random/rand
    |             
    |   unable to establish connection to GDB problem
    |   see here: https://github.com/microsoft/vscode-cpptools/issues/2889
    |             https://github.com/Microsoft/vscode-cpptools/issues/2767
    |
    |
    |
    |   Access to a base class member is ambiguous
    |   see here: https://stackoverflow.com/questions/29387600/reference-to-is-ambiguous
    |             https://www.ibm.com/support/knowledgecenter/en/SSLTBW_2.1.0/com.ibm.zos.v2r1.cbclx01/cplr138.htm
    |             https://www.quora.com/What-is-ambiguity-in-C++
    |             http://www.cplusplus.com/forum/beginner/11759/
    |
    |   indentation backwards use: Ctrl + [ to unindent and Ctrl + ] to indent.
    |   see more: https://stackoverflow.com/questions/790711/how-to-remove-tab-indent-from-several-lines-in-idle
    |             https://stackoverflow.com/questions/4559896/how-to-tab-backwards-remove-a-tab-or-tab-spaces-in-vim    
    |
    |
    |   function prototype:
    |   see here: https://www.programiz.com/cpp-programming/function
    |             https://codescracker.com/cpp/cpp-function-definition.htm
    |             http://www.cplusplus.com/articles/yAqpX9L8/
    |
    |   function prototype with multi-dimentional array as a parameter:
    |   see here: https://stackoverflow.com/questions/41884801/function-prototypes-with-multi-dimensional-arrays-as-a-parameter
    |
    |   Input Validation technique: (it can not catch input like this if i wanna enter integer value (1234lqwjr) or (1234.1234))
    |   see here: https://stackoverflow.com/questions/17928865/correct-way-to-use-cin-fail
    |             http://www.cplusplus.com/forum/beginner/2957/
    |             https://www.hackerearth.com/practice/notes/validating-user-input-in-c/
    |             https://study.com/academy/lesson/validating-input-data-in-c-plus-plus-programming.html
    |
    |
    |   cin.fail():
    |   see here: https://en.cppreference.com/w/cpp/io/basic_ios/fail
    |             https://en.cppreference.com/w/cpp/io/ios_base/failure
    |             http://www.cplusplus.com/reference/ios/ios/fail/
    |
    |
    |   static variables 
    |   see here: https://www.studytonight.com/cpp/static-keyword.php
    |
    |
    |   ------------------------
    |   Video #18: Structures 1 
    |   ------------------------
    |
    |   sort function is in #include <algorithm> library
    |   see here: https://www.geeksforgeeks.org/sort-algorithms-the-c-standard-template-library-stl/
    |
    |
    |   ---------------
    |   Video #20: STL
    |   --------------- 
    |   
    |   Effective STL - 50 Specific Ways To Improve Your Use Of The Standard Template Library By Scott meyers
    |   see here: https://www.docdroid.net/6IdPkpH/effective-stl-50-specific-ways-to-improve-your-use-of-the-standard-template-library-by-scott-meyers.pdf
    |
    |   Preprocessor directives
    |   see here: http://www.cplusplus.com/doc/tutorial/preprocessor/
    |
    |   Importance of macros in C++
    |   see here: https://www.geeksforgeeks.org/importance-of-macros-in-c/
    |   
    |   C/C++ Preprocessors
    |   see here: https://www.geeksforgeeks.org/cc-preprocessors/
    |
    |   3 Types of Macros That Improve C++ Code
    |   see here: https://www.fluentcpp.com/2019/05/14/3-types-of-macros-that-improve-c-code/
    |
    |   Replacing text macros
    |   see here: https://en.cppreference.com/w/cpp/preprocessor/replace
    |
    |   3.7.1 Standard Predefined Macros (gcc.gnu.org)
    |   see here: https://gcc.gnu.org/onlinedocs/cpp/Standard-Predefined-Macros.html
    |
    |   Namespaces (C++) - Microsof
    |   see here: https://docs.microsoft.com/en-us/cpp/cpp/namespaces-cpp?view=vs-2019
    |
    |   namespace in C++ | Set 2 (Extending namespace and Unnamed namespace)
    |   see here: https://www.geeksforgeeks.org/namespace-in-c-set-2-extending-namespace-and-unnamed-namespace/
    |
    |   Namespace in C++ | Set 3 (Accessing, creating header, nesting and aliasing)
    |   see here: https://www.geeksforgeeks.org/namespace-c-set-3-creating-header-nesting-aliasing-accessing/
    |
    |   Namespaces - cppreference
    |   see here: https://en.cppreference.com/w/cpp/language/namespace
    |
    |   What is “Argument-Dependent Lookup” (aka ADL, or “Koenig Lookup”)?
    |   see here: https://stackoverflow.com/questions/8111677/what-is-argument-dependent-lookup-aka-adl-or-koenig-lookup
    |
    |   Argument-dependent lookup
    |   see here: https://en.cppreference.com/w/cpp/language/adl
    |
    |   vec = {1, 2, 3, 4, 5};
    
    cout<< count_if(vec.begin(), tor rbegin() and rend() function in C++ STL
    |   see here: https://www.geeksforgeeks.org/vec = {1, 2, 3, 4, 5};
    
    cout<< count_if(vec.begin(), tor-rbegin-and-rend-function-in-c-stl/
    |
    |   std::relational operators (vec = {1, 2, 3, 4, 5};
    
    cout<< count_if(vec.begin(), tor)
    |   see here: http://www.cplusplus.com/reference/vec = {1, 2, 3, 4, 5};
    
    cout<< count_if(vec.begin(), tor/vec = {1, 2, 3, 4, 5};
    
    cout<< count_if(vec.begin(), tor/operators/
    |
    |   std::find in C++
    |   see here: https://www.geeksforgeeks.org/std-find-in-cpp/
    |
    |   std::all_of() in C++
    |   see here: https://www.geeksforgeeks.org/stdall_of-in-cpp/
    |
    |   std::back_inserter in C++
    |   see here: https://www.geeksforgeeks.org/stdback_inserter-in-cpp/
    |
    |   std::inner_product in C++
    |   see here: https://www.geeksforgeeks.org/std-inner_product-in-cpp/
    |
    |   std::adjacent_difference in C++
    |   see here: https://www.geeksforgeeks.org/std-adjacent_difference-in-cpp/
    |
    |   Set in C++ Standard Template Library (STL)
    |   * https://www.geeksforgeeks.org/set-in-cpp-stl/
    |
    |   Difference between set, multiset, unordered_set, unordered_multiset
    |   see here: https://www.geeksforgeeks.org/difference-set-multiset-unordered_set-unordered_multiset/
    |
    |   Multimap in C++ Standard Template Library (STL)
    |   see here: https://www.geeksforgeeks.org/multimap-associative-containers-the-c-standard-template-library-stl/
    |
    |   std::string::find_last_of - cpluscplus
    |   see here: http://www.cplusplus.com/reference/string/string/find_last_of/
    |
    |   std::string::find_last_not_of in C++
    |   see here: https://www.geeksforgeeks.org/stdstringfind_last_not_of-in-cpp/
    |
    |   std::ostream_iterator - cpluscplus
    |   see here: http://www.cplusplus.com/reference/iterator/ostream_iterator/
    |
    |   Templates in C++
    |   see here: https://www.geeksforgeeks.org/templates-cpp/
    |
    |   C++ Templates - Programize
    |   see here: https://www.programiz.com/cpp-programming/templates
    |
    |   C++ Templates - tutorialspoint
    |   see here: https://www.tutorialspoint.com/cplusplus/cpp_templates.htm
    |
    |   std::valarray - cppreference
    |   see here: https://en.cppreference.com/w/cpp/numeric/valarray
    |
    |   std:: valarray class in C++ - GeeksforGeeks
    |   see here: https://www.geeksforgeeks.org/std-valarray-class-c/
    |
    |   std::string::npos
    |   see here: http://www.cplusplus.com/reference/string/string/npos/
    |
    |   std::isspace 
    |   see here: https://en.cppreference.com/w/cpp/string/byte/isspace
    |
    |   --------------------
    |   video #21: Recursion
    |   --------------------
    |
    |   Merge Sort (GeeksforGeeks)
    |   see here: https://www.geeksforgeeks.org/merge-sort/
    |
    |   Recursion in Merge Sort algorithm. How is it obvious to use this type of recursion?
    |   see here: https://softwareengineering.stackexchange.com/questions/324593/recursion-in-merge-sort-algorithm-how-is-it-obvious-to-use-this-type-of-recursi
    |
    |   sizeof operator in C (GeeksforGeeks)
    |   see here: https://www.geeksforgeeks.org/sizeof-operator-c/
    |
    |   How do I determine the size of my array in C?
    |   see here: https://stackoverflow.com/questions/37538/how-do-i-determine-the-size-of-my-array-in-c
    |
    |   vec = {1, 2, 3, 4, 5};
    
    cout<< count_if(vec.begin(), tor insert() function in C++ STL
    |   see here: https://www.geeksforgeeks.org/vec = {1, 2, 3, 4, 5};
    
    cout<< count_if(vec.begin(), tor-insert-function-in-c-stl/
    |
    |   What is the simplest way to convert array to vec = {1, 2, 3, 4, 5};
    
    cout<< count_if(vec.begin(), tor?
    |   see here: https://stackoverflow.com/questions/8777603/what-is-the-simplest-way-to-convert-array-to-vec = {1, 2, 3, 4, 5};
    
    cout<< count_if(vec.begin(), tor
    |   
    |   Convert a vec = {1, 2, 3, 4, 5};
    
    cout<< count_if(vec.begin(), tor to an array in C++
    |   see here: https://www.techiedelight.com/convert-vec = {1, 2, 3, 4, 5};
    
    cout<< count_if(vec.begin(), tor-to-array-cpp/
    |
    |   How to convert vec = {1, 2, 3, 4, 5};
    
    cout<< count_if(vec.begin(), tor to array
    |   see here: https://stackoverflow.com/questions/2923272/how-to-convert-vec = {1, 2, 3, 4, 5};
    
    cout<< count_if(vec.begin(), tor-to-array
    |   
    |   How to put array data into vec = {1, 2, 3, 4, 5};
    
    cout<< count_if(vec.begin(), tor
    |   see here: http://www.cplusplus.com/forum/general/62900/
    |
    |   148, Recursion and intuition with permutations
    |   see here: https://www.youtube.com/watch?v=knByZ7Nh_6o
    |
    |   148, Recursion and implementing permutation with Python
    |   see here: https://www.youtube.com/watch?v=Jf0WYAbPDKI
    |   
    |   Write a program to print all permutations of a given string
    |   see here: https://www.geeksforgeeks.org/write-a-c-program-to-print-all-permutations-of-a-given-string/
    |
    |   Number of Transpositions in a Permutation
    |   see here: https://www.geeksforgeeks.org/number-of-transpositions-in-a-permutation/
    |
    |   Subset Sum Problem | DP-25
    |   see here: https://www.geeksforgeeks.org/subset-sum-problem-dp-25/
    |
    |   Print all possible combinations of r elements in a given array of size n
    |   see here: https://www.geeksforgeeks.org/print-all-possible-combinations-of-r-elements-in-a-given-array-of-size-n/
    |   
    |
    |   -----------------
    |   Video #22: (Bits)
    |   -----------------
    |
    |   Pseudo-polynomial Algorithms (GeeksforGeeks)
    |   see here: https://www.geeksforgeeks.org/pseudo-polynomial-in-algorithms/
    |
    |   Pseudo-Polynomial Time (GMU | Motion and Shape Computing Group)
    |   see here: http://masc.cs.gmu.edu/wiki/PseudoPolynomialTime
    |
    |   Operators in C / C++ (GeeksforGeeks)
    |   see here: https://www.geeksforgeeks.org/operators-c-c/
    |
    |   Bits manipulation (Important tactics) (GeeksforGeeks)
    |   see here: https://www.geeksforgeeks.org/bits-manipulation-important-tactics/
    |   
    |   Bitwise Hacks for Competitive Programming (GeeksforGeeks)
    |   see here: https://www.geeksforgeeks.org/bitwise-hacks-for-competitive-programming/
    |
    |   Bit Tricks for Competitive Programming
    |   see here: https://www.geeksforgeeks.org/bit-tricks-competitive-programming/
    |
    |   O.2 — Bitwise operators
    |   see here: https://www.learncpp.com/cpp-tutorial/bitwise-operators/
    |
    |   Alternative operators should not be used
    |   see here: https://rules.sonarsource.com/cpp/RSPEC-3659
    |
    |   Alternative operators and tokens
    |   see here: https://en.cppreference.com/w/c/language/operator_alternative
    |
    |   Alternative operator representations
    |   see here: https://en.cppreference.com/w/cpp/language/operator_alternative
    |
    |   Parentheses (richkosh.blogspot)
    |   see here: https://richkosh.blogspot.com/2018/04/parentheses.html?m=1
    |
    |   Count total bits in a number
    |   see here: https://www.geeksforgeeks.org/count-total-bits-number/
    |
    |   C++ - how to find the length of an integer
    |   see here: https://stackoverflow.com/questions/22648978/c-how-to-find-the-length-of-an-integer
    |
    |   Program to find the length of a number in C++ (CPP)
    |   see here: https://t4tutorials.com/program-to-find-the-length-of-a-number-in-c-and-cplusplus-cpp/
    |
    |   What does this “>>=” operator mean in C?
    |   see here: https://stackoverflow.com/questions/17769948/what-does-this-operator-mean-in-c/17769959
    |
    |   Builtin functions of GCC compiler
    |   see here: https://www.geeksforgeeks.org/builtin-functions-gcc-compiler/
    |
    |   std::popcount(Defined in header <bit>) (GeeksforGeeks)
    |   see here: https://en.cppreference.com/w/cpp/numeric/popcount
    |
    |   Fast C/C++ bit population count library
    |   see here: https://github.com/kimwalisch/libpopcnt
    |
    |   Paper (Faster Population Counts Using AVX2 Instructions)
    |   see here: https://arxiv.org/pdf/1611.07612.pdf
    |
    |   Convert Binary code to Gray code in C++
    |   see here: https://www.codespeedy.com/convert-binary-code-to-gray-code-in-cpp/
    |
    |   InterviewBit / Backtracking / GrayCode.cpp (GitHub)
    |   see here: https://github.com/cruxrebels/InterviewBit/blob/master/Backtracking/GrayCode.cpp
    |
    |   What does “0b” and “0x” stand for when assigning binary and hex?     
    |   see here: https://stackoverflow.com/questions/57605226/what-does-0b-and-0x-stand-for-when-assigning-binary-and-hex
    |   
    |   Lexical conventions (time-song gitHub)
    |   see here: https://timsong-cpp.github.io/cppwp/n4659/lex.icon
    |
    |   Ceil and Floor functions in C++       
    |   see here: https://www.geeksforgeeks.org/ceil-floor-functions-cpp/
    |
    |   Program to find whether a no is power of two    
    |   see here: https://www.geeksforgeeks.org/program-to-find-whether-a-no-is-power-of-two/
    |
    |   Type conversions (cpluscplus)
    |   see here: http://www.cplusplus.com/doc/tutorial/typecasting/
    |
    |   C++ Casting Operators (Tutorials point)
    |   see here: https://www.tutorialspoint.com/cplusplus/cpp_casting_operators.htm
    |
    |   static_cast in C++ | Type Casting operators
    |   see here: https://www.geeksforgeeks.org/static_cast-in-c-type-casting-operators/
    |
    |   What's the difference between MSB and LSB?
    |   see here: https://en-support.renesas.com/knowledgeBase/16978449
    |
    |   MIDI MSB and LSB
    |   see here: https://www.morningstarfx.com/post/2016-12-25-midi-msb-and-lsb
    |
    |
    |
    |       ----------------------
    |       Video #24: Pointers 2:
    |       ----------------------
    |
    |   C++ How do you set an array of pointers to null in an initialiser list like way?
    |   see here: https://stackoverflow.com/questions/2615071/c-how-do-you-set-an-array-of-pointers-to-null-in-an-initialiser-list-like-way
    |
    |   std::array as container
    |   see here: https://de.cppreference.com/w/cpp/container/array
    |
    |   C++ pass an array by reference
    |   see here: https://stackoverflow.com/questions/10007986/c-pass-an-array-by-reference
    |
    |   Endianness (Wikipedia)
    |   see here: https://en.wikipedia.org/wiki/Endianness#Current_architectures
    |
    |   Big Endian and Little Endian
    |   see here: https://chortle.ccsu.edu/AssemblyTutorial/Chapter-15/ass15_3.html
    |
    |   Endianness Explained With an Egg - Computerphile
    |   see here: https://www.youtube.com/watch?v=NcaiHcBvDR4
    |
    |   Placement new operator in C++
    |   see here: https://www.geeksforgeeks.org/placement-new-operator-cpp/
    |
    |   
    |       ----------------------
    |       Video #25: Pointers 3:
    |       ----------------------
    |
    |   Stack vs Heap (Youtube)
    |   see here: https://www.youtube.com/watch?v=PdvGEI-P3-M
    |
    |   Pointers and dynamic memory - stack vs heap (Youtube)
    |   see here: https://www.youtube.com/watch?v=_8-ht2AKyH4
    |
    |   Memory leak in C++ and How to avoid it? (GeeksforGeeks)
    |   see here: https://www.geeksforgeeks.org/memory-leak-in-c-and-how-to-avoid-it/ 
    |
    |   Stack vs Heap Memory Allocation (GeeksforGeeks)
    |   see here: https://www.geeksforgeeks.org/stack-vs-heap-memory-allocation/
    |   
    |   What and where are the stack and heap?
    |   see here: https://stackoverflow.com/questions/79923/what-and-where-are-the-stack-and-heap
    |
    |   Differences between Stack and Heap
    |   see here: http://net-informations.com/faq/net/stack-heap.htm
    |
    |       
    |
    |       -------------------------------
    |       Video #26: Headers and Includes
    |       -------------------------------
    |
    |   C/C++ Preprocessors (GeeksforGeeks)
    |   see here: https://www.geeksforgeeks.org/cc-preprocessors/
    |
    |   Undefined Reference to
    |   see here: https://stackoverflow.com/questions/5293021/undefined-reference-to
    |
    |   Common C++ Error Messages #2 – Undefined reference
    |   see here: https://latedev.wordpress.com/2014/04/22/common-c-error-messages-2-unresolved-reference/
    |
    |   How to resolve " undefined reference to `std::__throw_bad_cast()'" #1111
    |   see here: https://github.com/nlohmann/json/issues/1111
    |
    |   
    |
    |       -----------------------------
    |       Video #27: Streeams and Files
    |       -----------------------------
    |
    |   Input/output with files (cpluscplus)
    |   see here: http://www.cplusplus.com/doc/tutorial/files/
    |  
    |   What is the use of cin.ignore() in C++?
    |   see here: https://www.tutorialspoint.com/what-is-the-use-of-cin-ignore-in-cplusplus
    |
    |   C++ Files and Streams
    |   see here: https://www.tutorialspoint.com/cplusplus/cpp_files_streams.htm
    |
    |   Basic Input / Output in C++
    |   see here: https://www.geeksforgeeks.org/basic-input-output-c/
    |
    |   How to read integer value from file in C++
    |   see here: https://stackoverflow.com/questions/4827301/how-to-read-integer-value-from-file-in-c
    |
    |   Reading numbers from file c++
    |   see here: https://stackoverflow.com/questions/25833541/reading-numbers-from-file-c
    |
    |   More efficient way of removing whitespace
    |   see here: https://stackoverflow.com/questions/27462162/more-efficient-way-of-removing-whitespace
    |
    |   std::skipws, std::noskipws
    |   https://en.cppreference.com/w/cpp/io/manip/skipws
    |
    |   Effect of noskipws on cin>>
    |   https://stackoverflow.com/questions/10946771/effect-of-noskipws-on-cin
    |
    |   Demonstration of noskipws in C++
    |   see here: https://stackoverflow.com/questions/21809838/demonstration-of-noskipws-in-c
    |
    |   The role of std::ws (whitespace) when reading data
    |   see here: https://stackoverflow.com/questions/32365277/the-role-of-stdws-whitespace-when-reading-data/49011716#49011716
    |
    |   cin >> ws vs cin.ignore(numeric_limits<streamsize>::max(), '\n')?
    |   see here: https://stackoverflow.com/questions/58705197/cin-ws-vs-cin-ignorenumeric-limitsstreamsizemax-n
    |
    |   What's the Use of '\r' escape sequence?
    |   see here: https://stackoverflow.com/questions/7372918/whats-the-use-of-r-escape-sequence
    |
    |   C++ Manipulator ws
    |   see here: https://www.javatpoint.com/cpp-manipulator-ws-function
    |
    |   std::freopen (enseignement polytechnique)   
    |   see here: http://www.enseignement.polytechnique.fr/informatique/INF478/docs/Cpp/en/cpp/io/c/freopen.html
    |
    |   I/O Redirection in C++ (GeeksforGeeks) 
    |   see here: https://www.geeksforgeeks.org/io-redirection-c/
    |
    |   freopen() equivalent for c++ streams (Stackoverflow)
    |   see here: https://stackoverflow.com/questions/5257509/freopen-equivalent-for-c-streams
    |
    |   C++ freopen() (Programiz)
    |   see here: https://www.programiz.com/cpp-programming/library-function/cstdio/freopen
    |
    |   Reading an image file in C/C++ [closed] (Stackoverflow)
    |   see here: https://stackoverflow.com/questions/2076475/reading-an-image-file-in-c-c
    |
    |   JPEG (Wikipedia)
    |   see here: https://en.wikipedia.org/wiki/JPEG
    |
    |   How do I open an image file using C/C++? (Quara)
    |   see here: https://www.quora.com/How-do-I-open-an-image-file-using-C-C++
    |
    |   Modern C++ Features – decltype and std::declval
    |   see here: https://arne-mertz.de/2017/01/decltype-declval/
    |
    |   C++ decltype (RIP tutorial)
    |   see here: https://riptutorial.com/cplusplus/example/18513/decltype
    |
    |
    |
    |       -----------------
    |       Video #29: c++ 11
    |       -----------------
    |
    |   C++ auto (RIP Tutorial)
    |   see here: https://riptutorial.com/cplusplus/topic/2421/auto#remarks
    |
    |   Modern C++ Features – auto for Functions
    |   see here: https://arne-mertz.de/2015/08/new-c-features-auto-for-functions/
    |
    |   Modern C++ Features – auto for variables   
    |   see here: https://arne-mertz.de/2015/07/new-c-features-auto-for-variables/
    |
    |   Proxy pattern (Wikipedia)
    |   see here: https://en.wikipedia.org/wiki/Proxy_pattern
    |
    |   What is Proxy Class in C++ (Stackoverflow)
    |   see here: https://stackoverflow.com/questions/994488/what-is-proxy-class-in-c
    |
    |   What is lazy initialization and why is it useful? (Stackoverflow)
    |   see here: https://stackoverflow.com/questions/978759/what-is-lazy-initialization-and-why-is-it-useful
    |
    |   What is the logic behind the “using” keyword in C++?
    |   see here: https://stackoverflow.com/questions/20790932/what-is-the-logic-behind-the-using-keyword-in-c
    |
    |   C++ A basic example illustrating expression templates (RIP Tutorial)
    |   see here: https://riptutorial.com/cplusplus/example/19992/a-basic-example-illustrating-expression-templates
    |
    |   Alias declaration with "using"
    |   see here: https://riptutorial.com/cplusplus/example/28888/alias-declaration-with--using-
    |
    |   Using c++ typedef/using type alias (Stackoverflow)
    |   see here: https://stackoverflow.com/questions/44990068/using-c-typedef-using-type-alias
    |
    |   Exception Handling video
    |   see here: https://www.softwaretestinghelp.com/exception-handling-cpp/
    |
    |   Mulit-Threading
    |   see here: https://www.softwaretestinghelp.com/multithreading-in-cpp/
    |
    |   Good c++ tutorials
    |   see here: https://www.softwaretestinghelp.com/cpp-tutorials/
    |
    |   find (cpluscplus) - to know how to check its return answer in my code -
    |   see here: http://www.cplusplus.com/reference/algorithm/find/
    |   
    |   Map in C++ Standard Template Library (STL)
    |   see here: https://www.geeksforgeeks.org/map-associative-containers-the-c-standard-template-library-stl/
    |
    |   Smart Pointers (Wikipedia)
    |   see here: https://en.wikipedia.org/wiki/Smart_pointer#shared_ptr_and_weak_ptr
    |
    |   What does the explicit keyword mean?
    |   see here: https://stackoverflow.com/questions/121162/what-does-the-explicit-keyword-mean
    |
    |   explicit specifier (cppreference)
    |   see here: https://en.cppreference.com/w/cpp/language/explicit
    |
    |   Use of explicit keyword in C++ (Fact 93) (GeeksforGeeks)
    |   see here: https://www.geeksforgeeks.org/g-fact-93/
    |
    |   Smart pointers (internal pointers blog)
    |   https://www.internalpointers.com/post/beginner-s-look-smart-pointers-modern-c
    |
    |   std::make_shared (cppreference)
    |   see here: https://en.cppreference.com/w/cpp/memory/shared_ptr/make_shared
    |
    |   Variadic function templates in C++
    |   see here: https://www.geeksforgeeks.org/variadic-function-templates-c/
    |
    |   Variadic macro (Wikipedia)   
    |   see here: https://en.wikipedia.org/wiki/Variadic_macro
    |
    |   What is ellipsis operator in c [duplicate] (Stackoverflow)
    |   see here: https://stackoverflow.com/questions/3792761/what-is-ellipsis-operator-in-c
    |
    |   7.14 — Ellipsis (and why to avoid them) (Learncpp)
    |   see here: https://www.learncpp.com/cpp-tutorial/714-ellipsis-and-why-to-avoid-them/
    |
    |   C++ Rvalue References Explained (thbecker articles)
    |   see here: http://thbecker.net/articles/rvalue_references/section_01.html
    |
    |   Rvalue References
    |   see here: http://thbecker.net/articles/rvalue_references/section_03.html
    |
    |   C++11 - New features - Variadic templates
    |   see here: http://www.cplusplus.com/articles/EhvU7k9E/
    |   
    |   Variadic functions (cppreference)
    |   see here: https://en.cppreference.com/w/c/variadic
    |
    |   Lambda expression in C++
    |   see here: https://www.geeksforgeeks.org/lambda-expression-in-c/
    |
    |   Lambda Expressions in C++
    |   see here: https://docs.microsoft.com/en-us/cpp/cpp/lambda-expressions-in-cpp?view=vs-2019
    |
    |   Examples of Lambda Expressions
    |   see here: https://docs.microsoft.com/en-us/cpp/cpp/examples-of-lambda-expressions?view=vs-2019
    |
    |   Lambdas in C++11
    |   see here: https://www.drdobbs.com/cpp/lambdas-in-c11/240168241
    |
    |   Regular expressions (regexone)
    |   https://regexone.com/lesson/introduction_abcs
    |
    |   The Regular Expression Library
    |   see here: https://www.modernescpp.com/index.php/regular-expressions
    |
    |   std::regex_match, std::regex_replace() | Regex (Regular Expression) In C++
    |   see here: https://www.geeksforgeeks.org/regex-regular-expression-in-c/
    |
    |   C++ Tutorial 19 : C++ Regular Expressions
    |   see here: https://www.youtube.com/watch?v=9K4N6MO_R1Y
    |
    |   C++ rvalue references and move semantics for beginners
    |   see here: https://www.internalpointers.com/post/c-rvalue-references-and-move-semantics-beginners
    |
    |   Rule of three (C++ programming) (wikipedia)   
    |   see here: https://en.wikipedia.org/wiki/Rule_of_three_%28C++_programming%29#Rule_of_Three
    |
    |   Are move constructors required to be noexcept? (stackoverflow)
    |   see here: https://stackoverflow.com/questions/9249781/are-move-constructors-required-to-be-noexcept
    |
    |   More C++ Idioms/Copy-and-swap
    |   see here: https://en.wikibooks.org/wiki/More_C%2B%2B_Idioms/Copy-and-swap
    |
    |   What is the copy-and-swap idiom?
    |   see here: https://stackoverflow.com/questions/3279543/what-is-the-copy-and-swap-idiom/3279550#3279550
    |
    |   Non-throwing swap (wikibooks)   
    |   see here: https://en.wikibooks.org/wiki/More_C%2B%2B_Idioms/Non-throwing_swap
    |
    |   Factory Method in C++: Before and after   
    |   see here: https://sourcemaking.com/design_patterns/factory_method/cpp/1
    |
    |   Design Patterns | Set 2 (Factory Method) (GeeksforGeeks)
    |   see here: https://www.geeksforgeeks.org/design-patterns-set-2-factory-method/
    |
    |   Factory Design Pattern in C++
    |   see here: https://developer-blog.net/factory-design-pattern-in-c/
    |
    |   Perfect Forwarding (modernescpp)
    |   see here: https://www.modernescpp.com/index.php/perfect-forwarding
    |
    |   Perfect forwarding
    |   see here: https://cpppatterns.com/patterns/perfect-forwarding.html
    |
    |   The Forwarding Problem: Arguments (open-std)
    |   see here: http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2002/n1385.htm
    |   
    |   References (isocpp)
    |   see here: https://isocpp.org/wiki/faq/references
    |
    |   The rule of three/five/zero (cppreference)
    |   see here: https://en.cppreference.com/w/cpp/language/rule_of_three
    |
    |   Chapter 1. Deducing Types (O'REILLY Safari)
    |   see here: https://www.oreilly.com/library/view/effective-modern-c/9781491908419/ch01.html
    |
    |   Why forwarding reference does not deduce to rvalue reference in case of rvalue?
    |   see here: https://stackoverflow.com/questions/16373881/why-forwarding-reference-does-not-deduce-to-rvalue-reference-in-case-of-rvalue
    |
    |   Advantages of using forward
    |   see here: https://stackoverflow.com/questions/3582001/advantages-of-using-forward/3582313#3582313
    |
    |   1. Deducing Types (Effective modern cpp)
    |   see here: https://effective-modern-cpp.readthedocs.io/en/latest/chapter1.html
    |
    |   Top-Level cv-Qualifiers in Function Parameters
    |   see here: https://www.dansaks.com/articles/2000-02%20Top-Level%20cv-Qualifiers%20in%20Function%20Parameters.pdf
    |
    |   Where is the definition of `top-level cv-qualifiers` in the C++11 Standard?
    |   see here: https://stackoverflow.com/questions/24676824/where-is-the-definition-of-top-level-cv-qualifiers-in-the-c11-standard
    |   
    |   C++ Standard Core Language Defect Reports and Accepted Issues, Revision 93
    |   see here: http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2015/n4458.html#609
    |
    |   Introduction to the volatile keyword (embedded)
    |   see here: https://www.embedded.com/introduction-to-the-volatile-keyword/
    |
    |   Type Inference in C++ (auto and decltype)
    |   see here: https://www.geeksforgeeks.org/type-inference-in-c-auto-and-decltype/
    |
    |   Question 65 (decltype(auto)) (c++14 FAQs)
    |   see here: https://books.google.com.eg/books?id=EU-IBwAAQBAJ&pg=PA64&lpg=PA64&dq=decltype(auto)&source=bl&ots=lL4Xi0hjdp&sig=ACfU3U3VLUdZlMhy7SoTH3_VeIfbU_F3iw&hl=de&sa=X&ved=2ahUKEwiWmsvTpd_mAhVRXRoKHaZXAL0Q6AEwBHoECAoQAQ#v=onepage&q=decltype(auto)&f=false
    |
    |   Difference between const int*, const int * const, and int const *
    |   see here: https://www.geeksforgeeks.org/difference-between-const-int-const-int-const-and-int-const/
    |
    |   const int = int const? (Stackoverflow)
    |   see here: https://stackoverflow.com/questions/3247285/const-int-int-const
    |
    |   Is 'auto const' and 'const auto' the same?
    |   see here: https://stackoverflow.com/questions/10709897/is-auto-const-and-const-auto-the-same   
    |
    |   const int VS int const (Github)
    |   see here: https://gist.github.com/burczyk/8667937
    |
    |   GotW #94 Solution: AAA Style (Almost Always Auto)
    |   see here: https://herbsutter.com/2013/08/12/gotw-94-solution-aaa-style-almost-always-auto/
    |
    |   The Cons and Cons of the Hungarian Notation
    |   see here: https://www.fluentcpp.com/2019/06/21/the-cons-and-cons-of-the-hungarian-notation/
    |
    |   auto + const + smart pointer = bad mix?
    |   see here: https://www.fluentcpp.com/2019/07/12/auto-const-smart-pointer-bad-mix/
    |
    |   Smart developers use smart pointers (1/7) – Smart pointers basics
    |   see here: https://www.fluentcpp.com/2017/08/22/smart-developers-use-smart-pointers-smart-pointers-basics/
    |
    |   unique_ptr, shared_ptr, weak_ptr, scoped_ptr, raw pointers – Knowing your smart pointers (2/7)
    |   see here: https://www.fluentcpp.com/2017/08/25/knowing-your-smart-pointers/
    |
    |   Smart developers use smart pointers (3/7) – Custom deleters
    |   see here: https://www.fluentcpp.com/2017/08/29/custom-deleters/
    |
    |   How to Make Custom Deleters More Expressive
    |   see here: https://www.fluentcpp.com/2017/09/01/make-custom-deleters-expressive/
    |
    |   Changing deleters during the life of a unique_ptr (4/7)
    |   see here: https://www.fluentcpp.com/2017/09/05/changing-deleters-during-the-life-of-a-unique_ptr/
    |
    |   How to implement the pimpl idiom by using unique_ptr
    |   see here: https://www.fluentcpp.com/2017/09/22/make-pimpl-using-unique_ptr/
    |
    |   Polymorphic clones in modern C++
    |   see here: https://www.fluentcpp.com/2017/09/08/make-polymorphic-copy-modern-cpp/
    |
    |   How to Return a Smart Pointer AND Use Covariance
    |   see here: https://www.fluentcpp.com/2017/09/12/how-to-return-a-smart-pointer-and-use-covariance/
    |
    |   Universal References in C++11 -- Scott Meyers   
    |   see here: https://isocpp.org/blog/2012/11/universal-references-in-c11-scott-meyers
    |
    |   Compiling with g++ (GeeksforGeeks)
    |   see here: https://www.geeksforgeeks.org/compiling-with-g-plus-plus/
    |
    |   3 GCC Command Options
    |   see here: https://gcc.gnu.org/onlinedocs/gcc/Invoking-GCC.html
    |
    |   Compiling with g++
    |   see here: https://courses.cs.washington.edu/courses/cse326/00wi/unix/g++.html
    |
    |   How to use  g++
    |   see here: https://www.cs.bu.edu/fac/gkollios/cs113/Usingg++.html
    |
    |   
    |
    |
    |
    |
    |
    |
    |
    |
    |
    |
    |
    |
    |
    |
    |
    |
    |
    |
    |
    |
    |
    |
    |
    |
    |
    |
    |
    |
    |
    |
    |
    |
    |
    |
    |
    |
    |
    |
    |
    |
    |
    |
    |
    |
    |
    |
    |
    |
    |
    |
    |
*/  

#include <regex>
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <cstdio>
#include <cstdlib>
#include <sstream>
#include <iomanip>
#include <assert.h>
#include <windows.h>
#include <time.h>
#include <random>
#include <algorithm>
#include <iterator>
#include <vector>
#include <stack>
#include <set>
#include <map>
#include <valarray>
#include <cmath>
#include <fstream>
#include <cassert>
#include <memory>   // smart pointer
#include <tuple>    // tuple

#include "MyMathLib.h"

using namespace std;
//             ------------------------------
// Related to: Video #26 Headers and includes
//             ------------------------------
using namespace Ahmed_Functions; // Bad practice: it would lead to conflict if many namespaces has the same name
using Ahmed_Functions::factorial;// Good practice: get only the feature you need

/* 

        // ---------------------------------
        // Video #16: Multidimentional array
        // ---------------------------------

    // for Video #16, part of 2D Array as argument
    const int ROWS = 3, COLS = 4; // declare our rows and columns as global variables

    void print2DArr(int val[4][2])
    {
        for(int r = 0; r < ROWS; r++)
        {
            for(int c = 0; c < COLS; c++)
                cout<< setw(4) << val[r][c];
            cout<<"\n";
        }
    }
    // for Video #16, part Homework
    // flat 3D or more D and get its index after flatting it and Vice  versa

    // TODO: write Documentation explains the function flow.
    int DimArrToflatIdx(int arrDim[], int arrLoc[], int DIM)
    {
        int result = 1;
        for(int i = 0; i < DIM; i++)
            result *= arrDim[i];
        
        int idx = 0;
        for(int i = 0; i < DIM; i++)
        {
            if(i < (DIM-1) )
            {
                result /= arrDim[i];
                int idxResult = result * arrLoc[i];
                idx += idxResult;
            }
            else
                idx += arrLoc[i];
        }
        return idx; 
    }
    // TODO: write Documentation explains the function flow.

    void flatToDimArrIdx(int arrDim[], int arrLoc[], int DIM, int idx)
    {
        int result = 1;
        for(int i = 0; i < DIM; i++)
            result *= arrDim[i];
        
        int tmpIdx = idx; 
        for(int i = 1; i < DIM; i++)
        {
            if(i < (DIM-1) )
                result = result / arrDim[i];
            else
                result = arrDim[i];

            for(int j = 0; j < arrDim[i-1]; j++)
            {
                int dimResult = result * (j+1);
                if( (dimResult - tmpIdx) > 0)
                {
                    arrLoc[(i-1)] = j;
                    tmpIdx = tmpIdx - (result * j);
            
                    if(i == (DIM-1))
                        arrLoc[i] = tmpIdx;
                    break;
                }
            }
        }

        for(int i = 0; i < DIM; i++)
            cout<<arrLoc[i]<<" ";
        cout<<"\n";
    }

    const int ROWZ = 3, COLZ = 4; // Global variables for 2nd Max array
    int find2MaxArr(int arr[ROWZ][COLZ])
    {
        int fstMax = 0, secMax = 0;
        int tmp = 0;

        //TODO: check if the 2D Array should be restricted to have min to cols
        //      and also check if its allowed to have negative values for our array elements     
        for(int i = 0; i < ROWZ; i++)
        {
            
            for(int j = 0; j < COLZ; j++)
            {
                if(arr[i][j] > fstMax)
                {   
                    tmp = fstMax;
                    fstMax = arr[i][j];
                    secMax = tmp;
                }else
                { 
                    if(arr[i][j] > secMax)
                        secMax = arr[i][j];
                    else 
                        continue;           
                }

            }
        }

        return secMax;
    }

    void input2DArr(int arr2D[ROWZ][COLZ])
    {
        bool check;
        cout<<" Enter your "<<ROWZ<<" x "<<COLZ<<" : \n";
        for(int i = 0; i < ROWZ; i++)
        {
            for(int j = 0; j < COLZ; j++)
            {
                do{
                    check = true;
                    cout<<i<<" x "<<j<<" : ";
                    cin>>arr2D[i][j];
                    if(cin.fail())
                    {
                        cout<<"\n\nplz enter correct values !!!\n\n";
                        cin.clear();
                        cin.ignore(10000, '\n');
                        check = false;
                    }
                }while(!check);
            }
        }
    } 

        // --------------------------------------------
        // Video #17: Multidimentional array - Practice
        // --------------------------------------------

    void add2DArr(int arr1[ROWS][COLS], int arr2[ROWS][COLS], int arr3[ROWS][COLS])
    {
        for(int r = 0; r < ROWS; r++)
            for(int c = 0; c < COLS; c++)
                arr3[r][c] = arr1[r][c] + arr2[r][c];
    }

    const int ROWS1 = 4,  COLS1 = 3; 
    const int ROWS2 = 3,  COLS2 = 2;
    void mul2DArr(int arr1[ROWS1][COLS1], int arr2[ROWS2][COLS2], int arr3[ROWS1][COLS2])
    {
        assert(COLS1 == ROWS2); // verify 

        for(int r = 0; r < ROWS1; r++)
        {
            for(int c = 0; c < COLS2; c++)
                for(int k = 0; k < COLS1; k++)
                    arr3[r][c] += arr1[r][k] + arr2[k][c]; // accumulate 
            cout<<"\n";
        }
    }

    // Magic square

    //const int N = 3;

    int sumRow(int i, int square[N][N])
    {
        int sum = 0;
        for(int j = 0; j < N; j++)
            sum += square[i][j];
        return sum;
    }

    int sumCol(int j, int square[N][N])
    {
        int sum = 0; 
        for(int i = 0; i < N; i++)
            sum += square[i][j];
        return sum;
    }

    int sumMainDiag(int square[N][N])
    {
        int sum = 0; int pos = 0;
        for(int i = 0; i < N; i++)
            sum += square[pos][pos], pos++; // how it is possible to make tow statements in one line !
        return sum;
    }

    int sumAntiDiag(int square[N][N])
    {
        int sum = 0; int pos = 0;
        for(int i = 0; i < N; i++)
            sum += square[pos][N-pos-1], pos++;
        return sum;
    }
    // Normal validate 
    bool validate(int square[N][N])
    {
        int val = sumRow(0, square);

        for(int i = 0; i < N; i++)
        {
            if(val != sumRow(i, square)) return false;
            if(val != sumCol(i, square)) return false;
        }

        if(val != sumMainDiag(square)) return false;
        if(val != sumAntiDiag(square)) return false;

        return true;
    }

    // Moving in a specific direction in an array 8 directioins

    //enum dir        {DOWN, RIGHT, UP,  LEFT, UP_LEFT, DOWN_RIGHT , UP_RIGHT, DOWN_LEFT};
    //int dir_r[] =   {1,    0,     -1,  0,   -1,       1,          -1,        1};
    //int dir_c[] =   {0,    1,      0, -1,   -1,       1,           1,       -1};

    // tricky way for Magic square using moving in a specific direction
    // the useful point here that we just define one function to do all possible moving steps in an array
    int sumWithDir(int r, int c, int dir, int steps, int square[N][N])
    {
        int sum = 0;
        for(int i = 0; i < steps; i++)
        {   
            sum += square[r][c];
            r += dir_r[dir];
            c += dir_r[dir];
            
        }
        return sum;
    }

    bool validateMaic(int square[N][N])
    {
        int val = sumWithDir(0, 0, DOWN, N, square);

        for(int i = 0; i < N; i++)
        {
            if(val != sumWithDir(i, 0, RIGHT, N, square)) return false;
            if(val != sumWithDir(0, i, DOWN, N, square))  return false;
        }

        if(val != sumWithDir(0, 0, DOWN_RIGHT, N, square))  return false;
        if(val != sumWithDir(0, N-1, DOWN_LEFT, N, square)) return false;

        return true;
    }

    // Spiral Matrix Order
    // it is more fancy excercise but not used in the real life programing

    // there is overloading with other one defined before above
    enum dir    {RIGHT, DOWN, LEFT, UP};
    int dir_r[] = {0,     1,    0,    -1};
    int dir_c[] = {1,     0,   -1,     0};

    // Tricky code to move from direction to the next smoothly without using conditions

    // dir = 0 => dir+1 = 1     => 1%4 = 1 
    // dir = 1 => dir+1 = 2     => 2%4 = 2
    // dir = 2 => dir+1 = 3     => 3%4 = 3
    // dir = 3 => dir+1 = 4     => 4%4 = 0  (Wrap move)


    const int N = 5; // there is overload another N = 3 used before !!!
    void spiral(int arr[N][N], int N)
    {
        cout<<"Case Nr. "<<N<<"\n";

        int count = 0, r = 0, c = 0, steps = N, dir = 0;

        while(count < N*N)  
        {
            for(int s = 0; s < 4 && s < N*N; s++) // right -> down -> left -> up
            {
                int m = steps-1; // N-1 steps per direction
                if(s == 3)       // Except the last direction, N-2 steps
                    --m;

                for(int i = 0; i < m && i < N*N; i++)
                {
                    cout<<arr[r][c]<<" ";
                    ++count, r += dir_r[dir], c += dir_c[dir]; // move step
                }
                dir = (dir+1)%4; // change direction and wrap if dir = 4 -> 0 to start over again 
            }
            cout<<arr[r][c]<<" "; // special handling for the last element
            // Notice our direction is already correct from the last step
            ++count, r += dir_r[dir], c += dir_c[dir];
            steps -= 2; // 6 -> 4 -> 2 -> 0
        }
        cout<<"\n";
    }


        // -----------------------
        // Video #18: Structures 1
        // -----------------------

    // External Declaration (Struct), if we define it in a function it will be called Internal Dec.
    struct Employee
    {
        string name;
        int salary;
        int position;
    }; 

    // cmp binary function: takes two emps and compare them.
    // Case 1: return ture, if first Object will be sorted firstly before second Object
    // Case 2: return false, here we have tow cases:
    //                 
    //      we will replace first Object with Second Object, example if it was cmp(A, B) = false then,
    //      we send it cmp(B, A).
    //      if cmp(B, A) = true then B should be before A.
    //      if cmp(B, A) = false, which means both sides cmp(A, B) and cmp(B, A) are false then A == B 
    //
    // Hints: 
    //          1. our systematic way of comparison is:
    //              
    //              * we compare firstly with not equal '!=' and then '<' or '>'
    //              * the last one is only with '<' or '>' with no '!=' at first
    //              * do not make your comparison with '<=' or '>=' because it may cause errors
    //          2. our Ordering is known as: "strict weak ordering"
    // WARNING: Writing wrong function may cause RTE (Run Time Error)
    bool cmp(const Employee& first, const Employee& second)
    {
        // The right comparison should be filled by fieled based on YOUR priority

        // if First field NOT equal, it determines our answer
        if( first.salary != second.salary)
            return first.salary > second.salary; // Let bigger salary be preferred

        // Same Salary !, then cmp name to name
        if(first.name != second.name)
            return first.name < second.name; 

        // remaining Criteria: Position, no if condition is needed
        return first.position < second.position;
    }

    //Sturctures: Offtopic: pointer to function

    int sum(int n, int m)
    {
        return n+m;
    }

    int mul(int n, int m)
    {
        return n*m;
    }

    // declare a pointer to function 
    // function of two int function(int, int)
    int (*functionPtr)(int, int);

    // a generic function take the two input numbers and the operation name as a function parametor
    int compute(int a, int b, int (*functionPtr)(int, int))
    {
        return (*functionPtr)(a,b);
    }


    // Structures: Unions

    // used to set more than datatype to one variable and only one type is available

    union EmployeeSalary{
        int iVal;
        double dVal;
        // string strVal;   => Illegal in C++98, legal in c++0x.
    };



    // -----------------------
    // Video #19: Structures 2
    // -----------------------


    // Structures: Methods

    struct Employee{
        string name;
        int salary;

        void setSalary(int value)
        {
            salary = value;
        }

        void addSalary(int);
    };

    void Employee::addSalary(int value)
    {
        salary += value;    
    }

    // Structures: Constractor and Destractor

    struct Employee{
    // if you type nothing it will be by default public
    public:
        string name;
        int salary;

        // Constructor: done at creation of Objects
        // initializing my Param. here inhance the flexability of defining Objects for example:
        // here I can only enter the salary and the name will be init. by default by "Ahmed"
        Employee(int my_salary, string my_name = "Ahmed"){
            cout<<"Creating new Object\n";
            salary = my_salary;
            name = my_name;
        }

        // One more Constractor: its useful for initializing the Object with flexability
        Employee(string my_name)
        {
            sayCreating(); // private defined function

            salary = 3000;
            name = my_name;
            name_length = name.size();
        }

        Employee()
        {
            cout<<"Creating new Employee";
        }

        // Destructor: done after lefting its scope
        ~Employee(){    // its useful for releasing pointer variables from the memory 
            cout<<"Destroying the Object\n";
        }

        void print();
        void print(int MaxSalary); // Method Overloading


        // Overloaded Operators: Functions wit special names 
        bool operator == (const Employee &b)
        {
            return name == b.name && salary == b.salary;
        }

        bool operator < (const Employee &b)
        {
            // here our priority is name if ties then salary
            if(name != b.name)
                return name < b.name;
            return this->salary < b.salary;
            // this->salary: 'this' as we see the arrow we can think a little bit alone and 
            // say that its a pointer. How is it useful? - It can help us to separate internal 
            // defined variables from those which are defined in a function to get a value from 
            // outside the struct and both of them have same name.
            // Exmaple: 
            // print(string name)
            // {
            //      if( this-> name == name) cout<< name << '\n';
            // }
        }
    private:    // for internal use
        int name_length; 
        
        void sayCreating()
        {
            cout<<"Creating new Object\n";
        }
    };

    void Employee::print()
    {
        cout<< name << " has salary " << salary << '\n';
    }

    void print()
    {
        cout<< "Function to say, \"Hallo\"" << '\n';
    }

    void Employee::print(int max_salary)
    {
        if(salary > max_salary)
            cout<< name<< " is a special employee\n";
        else
            Employee::print();
    }

    // Structures: Functor: it allow a struct to act like a function
    struct sortNameSalary{
        int counter; // Functor can have state, but normal function can't

        // Constructor
        sortNameSalary()
        {
            counter = 0;
        }

        bool operator() (const Employee &a, const Employee &b)
        {
            // add a state to our functor:
            counter++; // to know how many func. calls
            if(a.name != b.name)
                return a.name < b.name;
            return a.salary < b.salary;
        }
    };

    struct sortSalaryName{
        int counter;

        // Constructor
        sortSalaryName(){
            counter = 0;
        }

        bool operator() (const Employee &a, const Employee &b)
        {
            counter++;
            if(a.salary != b.salary)
                return a.salary < b.salary;
            return a.name < b.name;
        }
    };

   // --------------
   // Video #20: STL
   // --------------

    // Macros:

    // it helps us here if we use vec = {1, 2, 3, 4, 5};
    
    tors to shortcut our code
    #define all(v)      ( (v).begin() ), ( (v).end() )
    #define sz(v)       ( (int)( (v).size() ) )

    typedef vec = {1, 2, 3, 4, 5};
    
    tor<int> vi;

    // out source:
    // ----------

    // #1: Preprocessor Directives (cpluscplus)
    // ----------------------------------------
    #define TABLE_SIZE 100
    int table1[TABLE_SIZE];
    int table2[TABLE_SIZE];

        // - #1: Function Macros:
    #define getmax(a, b) ( (a)>(b) ? (a):(b) )

        // - #1: Undefine Macros:

    #undef TABLE_SIZE

    #define TABLE_SIZE 200

    int table2_2[TABLE_SIZE];

        // - #1: spcial operator # ( replaced by a string literal that contains the argument passed)

    #define str(x) #x

        // - #1: special operator ## (concatenates 2 arguments leaving no blank spaces between them)

    #define glue(a,b) a ## b

        // - #1: Conditional inclusions (#ifdef, #ifndef, #if, #endif, #else and #elif)
            
            // #ifdef

    #ifdef TABLE_SIZE
    int table[TABLE_SIZE];
    #endif

            // #ifndef

    #ifndef TABLESIZE
    #define TABLESIZE 100
    #endif

    int table2_3[TABLESIZE];

            // #if, #else, #elif

    #if TABLE_SIZE > 200
    #undef TABLE_SIZE
    #define TABLE_SIZE 200

    #elif TABLE_SIZE < 50
    #undef TABLE_SIZE
    #define TABLE_SIZE 50

    #else
    #undef TABLE_SIZE
    #define TABLE_SIZE 100
    #endif  

    int table1_2[TABLE_SIZE];

    // Vec = {1, 2, 3, 4, 5};
    
    tor Basic Test:
    // -----------------


    // a copy from a bove to help continue without errors
    #define all(v)      ( (v).begin() ), ( (v).end() )
    #define sz(v)       ( (int)( (v).size() ) )

    typedef vec = {1, 2, 3, 4, 5};
    
    tor<int> vi;

    // print vec = {1, 2, 3, 4, 5};
    
    tor function
    void printVec = {1, 2, 3, 4, 5};
    
    (vi v, string str)
    {
        cout<<"\n\n"<<str;
        vi::iterator it = v.begin();
        if(!v.empty())
        {
            while(it != v.end())
            {
                cout<<(*it)<<" "; it++;
            }
            cout<<'\n';
        }
        else
            cout<<"\nThe vec = {1, 2, 3, 4, 5};
            
            tor is empty. !\n";
    }

    // vec = {1, 2, 3, 4, 5};
    
    tor manipulation section:
    // ---------------------------

    bool isOdd(int n) { return (n%2) != 0; } // use it in replace_if()

    bool isEqual(int a, int b) { return a == b; }

    bool sortPairCmp(const pair<int, int> &a, const pair<int, int> &b)
    {
        return a.first * b.first < a.second * b.second;
    }

    // String operations Basic test:
    // ----------------------------

    // int to string
    template <class T> string toStr(T param)
    {
        ostringstream oss;
        oss<<param; // like cout <<
        
        return oss.str();
    }

    // string to int
    int toInt(string s)
    {
        int n;
        istringstream iss(s);
        iss>>n; // like cin >>

        return n;
    }

    // string start with pattern
    bool startsWith(string str, string patt)
    {
        return (int)str.find(patt) == 0;
    }

    // string end with pattern
    bool endswith(string str, string patt)
    {
        int pos = str.rfind(patt);
        
        return (pos != -1 && pos+sz(patt) == sz(str));
    }

    // print valArray
    template<class T>
    void printValArray(T v, string s = "")
    {
        cout<<s;
        for(int i = 0; i < (int)v.size(); ++i)
            cout<<v[i]<<" ";
        cout<<'\n';
    }



        // --------------------
        // Video #21: Recursion 
        // --------------------

    // elaborate how Recursion is done

    // Exmaple #1: trace a4(4) - Factorial -
    int a1(int n)
    {
        return n;
    }

    int a2(int n)
    {
        return n * a1(n-1);
    }

    int a3(int n)
    {
        return n * a2(n-1);
    }

    int a4(int n)
    {
        return n * a3(n-1);
    }

    // observations: 1= the expression is the same in the last 3 functions.
    //               2- we return every time n-1 multiplied with n so its the same sub-problem.
    //               3- we finished with a1 when we reached the last function we can call it base function (base condition).

    // conclusion:   we can do it recursively instead of separating it into 4 different functions/
    
    // Recursive function do the same as above 
    int a4_Rec(int n)
    {
        // base condition
        if(n <= 1)
            return 1;
        
        // recursive expression
        return n * a4_Rec(n-1);
    }

    // Example #2: Triangle (my implementation)
    void Triangle(int row)
    {
        if( row >= 1)
        {
            Triangle(row-1);

            for(int i = 0; i < row; i++)
                cout<<'*';
            cout<<'\n';
        }  
    }

    // his implementation
    void hisTriangle(int row)
    {
        if( row <= 0) return;
        
        hisTriangle(row-1);
        
        for(int i = 0; i < row; i++)
                cout<<'*';
            cout<<'\n';
    }

    void rTriangle(int row)
    {
        if( row >= 1)
        {
            for(int i = 0; i < row; i++)
                cout<<'*';
            cout<<'\n';

            rTriangle(row-1);
        }  
    }

    // Example #3: 3n+1 series

    // Next (n): if n is ODD then n = 3*n + 1, if n is EVEN n = n/2, if n == 1, stop!.

    // Function output: Given(n) find length of 3n+1 sequence. e.g., _3n_plus_1(22) = 16.

    // my implementation
    int _3n_plus_1(int n)
    {
        // base condition
        if(n == 1)
            return 1;
        
        // if EVEN
        if(n%2 == 0) 
            return 1 + _3n_plus_1(n/2);

        // if ODD
        if(n%2 != 0)
            return 1 + _3n_plus_1(3*n + 1);
        
        // no above case is right
        return -1;
    }

    // his implementation
    int his_3n_plus_1(int n)
    {
        // base condition
        if(n == 1)
            return 1;
        
        // if EVEN
        if(n%2 == 0) 
            return 1 + his_3n_plus_1(n/2);

        // if ODD
        
        return 1 + his_3n_plus_1(3*n + 1);
    }

    // Example #4: merge sort

    // merge
    // Merges two subarrays of arr[]. 
    // First subarray is arr[l..m] 
    // Second subarray is arr[m+1..r] 

    void merge(vec = {1, 2, 3, 4, 5};
    
    tor<int> &arr, int l, int m, int r) 
    { 

        int i, j, k; 
        int n1 = m - l + 1; 
        int n2 =  r - m; 
    
        // create temp arrays //
        int L[n1], R[n2]; 
    
        // Copy data to temp arrays L[] and R[] //
        for (i = 0; i < n1; i++) 
            L[i] = arr[l + i]; 
        for (j = 0; j < n2; j++) 
            R[j] = arr[m + 1+ j]; 
    
        // Merge the temp arrays back into arr[l..r]//
        i = 0; // Initial index of first subarray 
        j = 0; // Initial index of second subarray 
        k = l; // Initial index of merged subarray 
        while (i < n1 && j < n2) 
        { 
            if (L[i] <= R[j]) 
            { 
                arr[k] = L[i]; 
                i++; 
            } 
            else
            { 
                arr[k] = R[j]; 
                j++; 
            } 
            k++; 
        } 
    
        // Copy the remaining elements of L[], if there are any //
        while (i < n1) 
        { 
            arr[k] = L[i]; 
            i++; 
            k++; 
        } 
    
        // Copy the remaining elements of R[], if there are any //
        while (j < n2) 
        { 
            arr[k] = R[j]; 
            j++; 
            k++; 
        }     
    }

    // merge sort
    void mergesort(vec = {1, 2, 3, 4, 5};
    
    tor<int> &arr, int low, int high)
    {
        if(low < high)
        {
            int mid = (low + high)/2;
            mergesort(arr, low, mid);       // right hand side mergesorting
            mergesort(arr, mid+1, high);    // left hand side mergesorting

            merge(arr, low, mid, high);
        }
    }

    void printVec = {1, 2, 3, 4, 5};
    
    (const vec = {1, 2, 3, 4, 5};
    
    tor<int> v)
    {
        for(int i = 0; i < (int)v.size(); i++)
            cout<<v[i]<<" ";
        cout<<'\n';
    }

    // Example #5: print Number/Bits one at a time 

    void printNumber(int n)
    {
        if(n)
        {
            printNumber(n/10);
            cout<<n%10;
        }
    }

    void printBit(int n)
    {
        if(n)
        {
            printBit(n/2);
            cout<<n%2;
        }
    }

    // Example #6: find max or min Path
    //
    //    - given a grid of positive numbers, start from (0,0) and end at (n,n).
    //    - Move only to right and down 
    //    - find path with sum of Numbers is maximum
    //

    // example:
    //
    //    find max or min sum path from (0,0) to (n,n):
    //    --------------------------------------------
    //
    //    from(0,0) -> 15
    //                 24 <- to(2,2)
    //
    //    from(0,0) -> 512
    //                 678
    //                 189 <- to(3,3)

    const int MAX = 100;
    int Grid[MAX][MAX];

    int n = 3;

    void inputArr()
    {
        int k = 0;
        int arr[n*n] = { 5, 1, 2,
                         5, 7, 8,
                         1, 8, 9 };

        for(int i = 0; i < n; i++)
            for(int j = 0; j < n; j++)
                Grid[i][j] = arr[k++]; 
    }

    void printArr()
    {
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
                cout<<Grid[i][j]<<' ';
            cout<<'\n';
        }
    }

    bool valid(int r, int c) 
    {
        if (r < 0 || c < 0 ) return false;
        if(r >= n || c >= n) return false;

        return true;
    }

    int maxPathSum(int r, int c)
    {
        if(! valid(r, c))
            return 0;
        
        if(r == n-1 && c == n-1)
            return Grid[r][c];
        
        int path1 = maxPathSum(r, c+1); // Right
        int path2 = maxPathSum(r+1, c); // Down

        return Grid[r][c] + max(path1, path2);
    }

    int minPathSum(int r, int c)
    {
        if(! valid(r, c))
            return 0;
        
        if(r == n-1 && c == n-1)
            return Grid[r][c];
        
        int path1 = minPathSum(r, c+1); // Right
        int path2 = minPathSum(r+1, c); // Down
        
        // to handle out of scope pathes which return 0 
        // and should be discarded and not be compared
        if(path1 == 0) return Grid[r][c]+path2;
        if(path2 == 0) return Grid[r][c]+path1;

        return Grid[r][c] + min(path1, path2);
    }

    // Example #7: Maze

    //const int MAX = 100;
    char GridMaze[MAX][MAX];

    i//nt n = 5;
    void inputArrMaze()
    {
        char arr[n][n] = {

            {'.', 'S', 'X', '.', '.'},
            {'.', '.', 'X', '.', 'E'},
            {'.', '.', '.', '.', 'X'},
            {'X', '.', 'X', 'X', '.'},
            {'.', '.', 'X', '.', 'X'}

        };
        for(int i = 0; i < n; i++)
            for(int j = 0; j < n; j++)
                GridMaze[i][j] = arr[i][j]; 
    }

    void printArrMaze()
    {
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
                cout<<GridMaze[i][j]<<' ';
            cout<<'\n';
        }
    }

    bool valid(int r, int c) 
    {
        if (r < 0 || c < 0 ) return false;
        if(r >= n || c >= n) return false;

        return true;
    }


    // Grid Maze Rules:
    //  1.  S  - Start point.
    //  2.  E  - End point where we want go.
    //  3. '.' - Could pass. (allowed path)
    //  4.  X  - block can't path.

    // This code will go to infinity! ... we need to avoid cycles. Mark visited cells
    bool findEnd(int r, int c)
    {
        // invalid postion or block position
        if( !valid(r,c) || GridMaze[r][c] == 'X')
            return false;
        
        // reached 'E' end is found 
        if(GridMaze[r][c] == 'E')
            return true;

        // move into 4 Directions (nieghbor cells)
        if(findEnd(r+1, c) == true) return true;    // Up
        if(findEnd(r-1, c) == true) return true;    // Down
        if(findEnd(r, c+1) == true) return true;    // Right
        if(findEnd(r, c-1) == true) return true;    // Left

        // No way to find 'E' - End -
        return false;
    }

    bool visit[MAX][MAX];

    bool _findEnd(int r, int c)
    {
        if( !valid(r,c) || GridMaze[r][c] == 'X' || visit[r][c] == true)
            return false;

        visit[r][c] = true; // Mark as visit to prevent Cycles

        if(GridMaze[r][c] == 'E')
            return true;


        if(findEnd(r+1, c) == true) return true;    // Up
        if(findEnd(r-1, c) == true) return true;    // Down
        if(findEnd(r, c+1) == true) return true;    // Right
        if(findEnd(r, c-1) == true) return true;    // Left

        visit[r][c] == 0;   // undo visit Mark, for Backtracking  

        return false;
    }

    // Typical Backtracking Form of code:
    // void recursion(state s)
    // {
    //      if(base(s))
    //          return ;
    // 
    //      for each substate ss
    //          mark ss
    // 
    //      recursion(ss)
    // 
    //      unmark ss
    // }

    // Example #8: Flood Fill

    // Given a maze where cells are '.' or 'X', 
    // and you start at (0,0), How many cells could you reach.
    const int MAX = 100;
    char Grid[MAX][MAX];

    //int x = 3;  // rows
    //int y = 4;  // cols

    int x = 4; // rows
    int y = 6; // cols

    //int x = 7; // rows
    //int y = 8; // cols

    void inputGrid()
    {

    //   char arr[x][y] = {
    //
    //       {'.','.', 'X', '.'},
    //       {'.','X', '.', 'X'},
    //       {'.','.', 'X', '.'}
    //
    //   };
    //
        char arr[x][y] = {

            {'.', '.', '.', 'X', '.'},
            {'.', '.', 'X', '.', '.'},
            {'.', 'X', '.', '.', '.'},
            {'X', '.', '.', '.', '.'}

        };
    //
    //
    //    char arr[x][y] = {
    //
    //        {'.', '.', '.', '.', 'X','.','.','.'},
    //        {'.', '.', '.', '.', 'X','X','X','X'},
    //        {'.', '.', 'X', '.', '.','.','.','.'},
    //        {'.', 'X', '.', '.', '.','.','X','X'},
    //        {'.', '.', 'X', '.', 'X','.','X','.'},
    //        {'.', '.', 'X', '.', '.','.','X','.'},
    //        {'.', '.', '.', 'X', '.','.','X','X'}
    //    };

        for(int i = 0; i < x; i++)
            for(int j = 0; j < y; j++)
                Grid[i][j] = arr[i][j]; 
    }

    void printGrid()
    {
        for(int i = 0; i < x; i++)
        {
            for(int j = 0; j < y; j++)
                cout<<Grid[i][j]<<' ';
            cout<<'\n';
        }
    }

    bool _valid(int r, int c) 
    {
        if( r < 0 || c < 0 ) return false;
        if(r >= x || c >= x) return false;
        if(r >= y || c >= y) return false;

        return true;
    }

    // A reachable block called: (Connected component).
    // Each set of positions reachable together are connected component.

    //int count = 0;
    //bool countReachableCells(int r, int c) // my implementation
    //{
    //    if(! _valid(r, c) || Grid[r][c] == 'X' || visit[r][c] == true)
    //        return false;
    //
    //    visit[r][c] = true;
    //    ::count++;
    //
    //    if(countReachableCells(r-1, c) == true) return true;    // Up
    //    if(countReachableCells(r+1, c) == true) return true;    // Down
    //    if(countReachableCells(r, c+1) == true) return true;    // Right
    //    if(countReachableCells(r, c-1) == true) return true;    // Left
    //
    //    return false;
    //}

    bool visit[MAX][MAX];
    int count = 0;

    void countReachableCells(int r, int c) // his implementation
    {
        if(! _valid(r, c) || Grid[r][c] == 'X' || visit[r][c] == true)
            return ;

        visit[r][c] = true;
        ::count++;

        countReachableCells(r-1, c);    // Up
        countReachableCells(r+1, c);    // Down
        countReachableCells(r, c+1);    // Right
        countReachableCells(r, c-1);    // Left
    }

    // What about finding Numbers of connected components
    // TODO: try to prevent visited connected components
    int countComponents()
    {
        int compCnt = 0;
        for(int r = 0; r < x; r++)
        {
            for(int c = 0; c < y; c++)
            {
                ::count = 0; 
                countReachableCells(r,c);

                if(::count > 0)
                    compCnt++;
            }
        }
        return compCnt;
    }

    // Example #9: Gerenrate Binary sequences

    // generate all sequences of given length, of zeros and ones
    // E.g. for len = 3:	000, 001, 010, 011, 100, 101, 110, 111
    //								""												Count=1
    //					0								1							Count=2
    //			00 				01				10				11					Count=4
    //		000		001		010		011		100		101		110		111				Count=8
    //
    // TODO: try to pass it to function adding spaces after each sequence length
    void GenBinSeq(int len, string seq = "")
    {
        if(len == 0)
        {
            cout<<seq;
            return ;
        }
        
        GenBinSeq(len-1, seq + "0");
        GenBinSeq(len-1, seq + "1");
    }

    void GenTernSeq(int len, string seq = "")
    {
        if(len == 0)
        {
            cout<<seq;
            return;
        }

        GenTernSeq(len-1, seq + "0");
        GenTernSeq(len-1, seq + "1");
        GenTernSeq(len-1, seq + "2");
        seq += " ";
    }

    // Example #10: Print a Nr. Permutations

    // print all possible permutations of numbers 0, 1, 2, ... n-1
    void perm(int i, int n, int vis[], int cur[])
    {
        if(i == n)
        {
            for(int j = 0; j < n; j++)
                cout<<cur[j];
            cout<<'\n';     return ;
        }

        for( int j = 0; j < n; j++) if(vis[j] != 1)
        {
            vis[j] = 1;
            cur[i] = j;

            perm(i+1, n, vis, cur);

            vis[j] = 0;
        }
    }


    // Example #11: (print n choose M combinations)

    void comb(int [], int , int , int , int[], int );

    void printComb(int arr[], int n, int M)
    {
        int currComb[M];
        comb(arr, n, 0, M, currComb, 0);
    }

    void comb(int arr[], int n, int i, int M, int currComb[], int index)
    {
        // print current combination
        if(index == M)
        {
            for(int j = 0; j < M; j++)
                cout<<currComb[j]<<" ";
            cout<<'\n';
        }

        // in case we reached the end we do nothing
        if(i >= n)
            return ;

        // Include current element
        currComb[index] = arr[i];
        comb(arr, n, i+1, M, currComb, index+1);

        // Exclude current elment
        comb(arr, n, i+1, M, currComb, index);
    }

    // Recursion Principles:
    // --------------------

    // could we do recursion calls as we want ? NO, you have stack limit size.
    // Say your function call reverse 1 integer (4 bytes), and a call need 2 pointers (8 bytes) for saving some return adresses
    // Say you have 2 MB stack size, then you could do Maximum 2MB / 12 ~= 1666666 Call

    // let us Test it: 

    int call = 0;

    void stackTest1()
    {
        cout<<call++<<'\n'<<flush;

        stackTest1();
    }


    void stackTest2(int a = 1)
    {
        cout<<call++<<'\n'<<flush;

        stackTest2(a);
    }

    void stackTest3()
    {
        cout<<call++<<'\n'<<flush;
        int arr[50];                // be careful from your created items. i.e., integers, strings, structs

        stackTest3();
    }

    void stackTest4()
    {
        cout<<call++<<'\n'<<flush;
        int arr[100];                // be careful from your created items. i.e., integers, strings, structs

        stackTest4();
    }

    void stackTest5()
    {
        cout<<call++<<'\n'<<flush;
        int arr[50];
        vec = {1, 2, 3, 4, 5};
        
        tor<int> v(50);          // It's internal array heap allocated so it will not affect stack memory allocation

        stackTest5();
    }

    void stackTest6()
    {
        cout<<call++<<'\n'<<flush;
        int arr[50];
        vector<int> v(1000);        // It's internal array heap allocated so it watch out also it will affect heap memory allocation

        stackTest6();
    }

    void stackTest7()
    {
        cout<<call++<<'\n'<<flush;
        int arr[1000];

        stackTest7();
    }

    void stackTest8()
    {
        cout<<call++<<'\n'<<flush;
        int arr[1000000];           // so big for my MACHINE limit

        stackTest8();
    }

    int arr[1000000];
    void stackTest9(int arr[])      // This get an array reference. and it behaves as if it is just an integer
    {
        cout<<call++<<'\n'<<flush;

        stackTest9(arr);             
    }

    // How to avoid stack problems
    // 1. if Recursion is must to do, then avoid any unnecessarlly local data, and  move to global data as possible.
    // 2. Move to iterative procedure if possible  
    // 3. implement your own stack calls!. (see example down here)

    void generateTernary_MyStack(int len)
    {
        stack<pair<int, string>> st;
        st.push(make_pair(len, ""));

        while(! st.empty())
        {
            int len = st.top().first;
            string cur = st.top().second;
            st.pop();

            if(len == 0)
            {
                cout<<cur<<'\n';
                continue;
            }

            st.push(make_pair(len-1, cur + "0"));
            st.push(make_pair(len-1, cur + "1"));
            st.push(make_pair(len-1, cur + "2"));
        }
    }

    // Search space analysis: ( a small intro for Dynamic programming)
    // ---------------------

    // int F(int a)
    //      1 <= a <= n                         // Search space size : n 


    // int F(int a, int b)
    //      1 <= a, b <= n                      // Search space size : n^2


    // int F(int a, int b, int vis[])
    //      1 <= a, b <= n          
    //      vis is boolean (2 possible values)
    //      vis Length <= m                     // Search space size : n^2 * 2^m


    // int F(string str)
    //      str string is of chars : A B C D
    //      str Length <= n                     // Search space size : 4^n


    // int F(string str)
    //      str string is of chars : A B C D
    //      str Length <= n
    //      One of the chars repeats itself str Length-1 times (e.g., AAAB, AACA, ADAA, BAAA, ...)
                                                // Search space size : 10 * n - Consider space limitation (Dynamic programming)


    // Fibonacci series: Fib(n) = Fib(n-1) + Fib(n-2). Ex: Fib(2) = Fib(1) + Fib(0)
    //                                                 Fib(1) = Fib(0) = 1

    int Fib(int n)
    {
        if(n <= 1)
            return 1;
        
        return Fib(n-1) + Fib(n-2);
    }

    // What is search space size ? n
    // What is the Nr of recursive calls? we are branching every time to 2 levels differs in 1
    //                                              Fib(5)                                      
    //                      Fib(4)                                          Fib(3)
    //              Fib(3)                  Fib(2)                  Fib(2)          Fib(1)
    //      Fib(2)         Fib(1)    Fib(1)         Fib(0)                      
    //Fib(1)        Fib(0)
    //
    // - We almost have 2^N calls


    // Wait ... , a space of N, is called 2^N times!
    // A Fib(50) will do around ~ 1125899906842624 Calls!!!!!!
    //
    // - it means that we call one state multiple times by branching which we only need to call one state only once time
    //   to prevent unnecessary branching calls which also already called before.
    //
    // Ex: check Fib(3) in the tree above which we see that it is called twice, Fib(2) is called 3 times.
    //
    //  to skip already called states let us SAVE THE ANSWER, and let Search space size of (n) : 2n times.

    const int MAX = 100;    // !!! Warnning: declared before !!!
    int savedAnswer[MAX];   // intitialized to -1, means no answer yet

    int _Fib(int n)
    {
        if(n <= 1)
            return 1;
        
        if(savedAnswer[n] != -1)
            return savedAnswer[n];
        
        return savedAnswer[n] = _Fib(n-1) + _Fib(n-2);
    }

    // Fibonacci Tree after new implementation 
    //
    //                                                Fib(5)=8
    //                                Fib(4)=5                        Fib(3) = 3
    //                      Fib(3)=3          Fib(2)=2
    //          Fib(2)=2          Fib(1)=1
    // Fib(1)=1        Fib(0)=1
    //


        // -----------------
        // Video #22: (Bits)
        // -----------------


    // Why Bits: 
    // --------

    // sometimes, it is low optimization, so better time order
    // sometimes, it drop memory by factor of 8!, so better memory order
    // sometimes, it make code shorter

    //  |-------------------------------------------------------------------------------
    //  |           A 	B 	!A 	A&B 	A|B 	A^B
    //  |       	0	0	1	0		0		0
    //  |       	0	1	1	0		1		1
    //  |       	1	0	0	0		1		1
    //  |       	1	1	0	1		1		0
    //  |
    //  |       X = 1152 = 	10010000000
    //  |       Y = 1428 = 	10110010100
    //  |
    //  |       X & Y 	 = 	10010000000
    //  |       X | Y 	 = 	10110010100
    //  |       X ^ Y 	 = 	00100010100
    //  |
    //  |       A ^ B ^ C ^ D = E	For any bit in E with 1, must be ODD number of 1s
    //  |       X ^ 0 = X		X ^ X = 0
    //  |       (A ^ B ^ C ^ D ^ E) ^ (A ^ B ^ C) = D ^ E
    //  |
    //  |       X >> 1	 = 	1001000000 			Equals X/2  // remove one bit from Right
    //  |       X >> 2	 = 	100100000 			Equals X/4  // remove two bits form Right
    //  |       X << 1	 =  100100000000		Equals X*2  // add one bit zero from Right
    //  |       X << 2	 =  1001000000000		Equals X*4  // add two bits zero from Right
    //  |
    //  |
    //  |       X = 11010 = 26 = 2^1 + 2^3 + 2^4 = 2 + 8 + 16
    //  |
    //  |       X = 11010 = 26		// Last Bit shows Parity: Even / Odd
    //  |       X = 11011 = 27
    //  |
    //  |       X % 2 = X & 1 = bit 0
    //  |
    //  |       Generally:	X%(2^n)  = X & (2^n -1)
    //  |
    //  |       Even test
    //  |       	if(n%2 == 1)		-> Fails of n is negative
    //  |
    //  |       	if( (n&1) == 1)	-> Works always
    //  | ----------------------------------------------------------------------------

    // Some Examples :
    // -------------

    // to get the Number of bits in a number
    unsigned countBits(unsigned int n)
    {
        // log function in base 2
        // take only integer part
        return (int)log2(n)+1;
    }

    // print Number in a smart quicker way (Recursively)
    void printNumber(int n, int len)
    {
        if(!len)    
            return ;
        
        printNumber(n>>1, len-1);
        cout<<(n&1);
    }

    // Swap Bits
    int reverseBits(int n, int len)
    {
        int nR = 0;

        // enter it in a reverse way 
        for(int i = 0; i < len; i++)
        {
            nR |= ((n&1) << (len-i));
            n>>=1;
        }
        return nR;
    }

    // print Number in a smart quicker way (Iteratively)
    void printNumberIter(int n, int len)
    {
        reverseBits(n, len);

        while(n)
        {
            cout<<(n&1);
            n>>=1;
        }
    }
    // Count Number of Bits (only the 1's)
    int countNumBits_1s(int mask) // O(bit Length)
    {
        int Nr_1s = 0;
        while(mask)
        {
            if( (mask&1) == 1)
                Nr_1s++;
            
            mask >>= 1;
        }
        return Nr_1s;
    }

    // Get a bit with index
    int getBit(int num, int idx)
    {
        return ((num>>idx) & 1) == 1;       // 110100, idx = 4  -->  110 & 1 = 0
    }

    // Set a bit 0 with index
    int setBit1(int num, int idx)
    {
        return (num | (1<<idx));        
    }

    // Set a bit 1 with index
    int setBit0(int num, int idx)
    {
        return (num & ~(1<<idx));           // 110100, idx = 3  -->  110100 & ~000100 = 110100 & 111011
    }

    // flip a bit with index
    int flipBit(int num, int idx)
    {
        return (num ^ (1<<idx));
    }

    // rotate a bit with shift Nr.
    int rotateBits(int num, int len, int r)
    {
        r %= len;   // in case the rotate shift is more than the number length itself
        int tmp = 0;
        int i = 0;
        
        while(i < r)
        {
            tmp |= ((num&1)<<i);
            num >>= 1;
            i++;
        }

        num |= (tmp<<(len-r));

        return num;
    }


    // | ------------------------------------------------------------------------------------------------------------           
    // |
    // |    X - 1 is very important!
    // |    
    // |    X   = 840 = 01101001000
    // |    X-1 = 839 = 01101000111 Simply remove the first occured 1 from Right and turn all the previous zero bits to 1
    // |                        ^^^  
    // |
    // |    X & (X-1) = 01101000000 Remove the first (1) bit
    // |
    // |            
    // |    X & ~(X-1)= 01101001000 X           
    // |                10010111000 ~(X-1)
    // |                ----------- X & ~(X-1)             
    // |                00000001000 Value of firest 1 bit from right            
    // |            
    // | -------------------------------------------------------------------------------------------------------------



    // Another way to count the 1's bits using X&(X-1) trick
    int countNumBits_1s_2(int mask) // O(bits Count)   __builtin_popcount()
    {
        int ret = 0;
        if(mask)
        {
            mask &= (mask-1);   // simply remove the first bit from Right untill it equals zero
            ret++;
        }
        return ret;
    }

    // Print all binary subsets of length (n) iteratively instead of recursively 
    void printSubset(int len)
    {
        for(int i = 0; i < (1<<len); ++i)
        {
            printNumber(i, len); 
            cout<<'\n';
        }
    }

    // do the same as above but recursively
    void printSubsetR(int len)
    {
        for(int i = (1<<len)-1; i >= 0; i--)
        {
            printNumber(i, len); 
            cout<<'\n';
        }
    }

    //  |--------------------------------------------------------------------------------------------------------
    //  |
    //  | 
    //  |   Gray Code:  is a binary numerical system where two successive values differ in only one bit
    //  |   0000		0000	0
    //  |   0001		0001	1
    //  |   0010		0011	2
    //  |   0011		0010	1
    //  |   0100		0110	2
    //  |   0101		0111	3
    //  |   0110		0101	2
    //  |   0111		0100	1
    //  |   1000		1100	2
    //  |   1001		1101	3
    //  |   1010		1111	4
    //  |   1011		1110	3
    //  |   1100		1010	2
    //  |   1101		1011	3
    //  |   1110		1001	2
    //  |   1111        1000    1
    //  |
    //  |   - Build it incrementally, let's see for len = 1 
    //  |   
    //  |   0
    //  |   1
    //  |   
    //  |   - Great, it's like a perfect Gray code, let's see for len = 2
    //  |   
    //  |   00
    //  |   01
    //  |   10
    //  |   11
    //  |
    //  |   - Great, it's also like a perfect Gray code, let's see for len = 3
    //  |
    //  |   000
    //  |   001
    //  |   010
    //  |   011
    //  |   100
    //  |   101
    //  |   110
    //  |   111
    //  |
    //  |   - Great, it's still like a perfect Gray code, let's see then for len = 4
    //  |   Seq.    Nr. of 1s
    //  |   0000    0
    //  |   0001    1
    //  |   0010    2
    //  |   0011    2
    //  |   0100    1
    //  |   0101    2
    //  |   0110    2
    //  |   0111    3 <-
    //  |   1000    1 <- The difference is 2 not 1
    //  |   1001    2
    //  |   1010    2
    //  |   1011    3
    //  |   1100    2
    //  |   1101    3
    //  |   1110    3
    //  |   1111    4
    //  |
    //  |   - Failed, as we observe here when turning from 3rd bits order to 4th bits order we get difference more than 1.
    //  |   - like 0111 - 3 (1'sbit) - (next) -> 1000 - 1 (1bit) -
    //  |   - in order to solve this problem we will reverse the second part of our 4 bits sequence.
    //  |   - So all what we need. Given of answer of list N-1, to generate N. use 0N + 1N', where N' is reverse list
    //  |   - If we start to build our List from N = 2 untill we reach N wanted bits like for example N = 4 we get this:
    //  |
    //  |   Bin. Seq    Gray Code   Nr. of 1s
    //  |   0000		0000	    0
    //  |   0001		0001	    1
    //  |   0010		0011	    2
    //  |   0011		0010	    1
    //  |   0100		0110	    2
    //  |   0101		0111	    3
    //  |   0110		0101	    2
    //  |   0111		0100	    1
    //  |   1000		1100	    2
    //  |   1001		1101	    3
    //  |   1010		1111	    4
    //  |   1011		1110	    3
    //  |   1100		1010	    2
    //  |   1101		1011	    3
    //  |   1110		1001	    2
    //  |   1111        1000        1
    //  |
    //  |   - Hint: by observation in Gray code every gray seq. is equivalent to to its Bin. Seq. 
    //  |     but by shifting the Bin. Seq by 1 and XOR it with its original Bin. Seq. like this:
    //  |     1111 >> 1   -->    0111 then, 
    //  |     0111 XOR
    //  |     ----
    //  |     1000 (Equivalent Gray Code of Bin. Seq. 1111)
    //  |
    //  |-------------------------------------------------------------------------------------------------------

    // generating Gray Code:

    // ACP_C++ Method 1:
    int grayCode(int i)
    {
        return i ^ (i>>1);
    }

    void PrintAllSubsetsGray(int len)
    {
        for(int i = 0; i < (1<<len); i++)
        {
            printNumber(i, len);
            cout<<"\t\t";

            printNumber(grayCode(i), len);
            cout<<'\t';

            cout<<__builtin_popcount(grayCode(i))<<'\n';    // it does the same as above 2 functions CountNumBits_1s()
        }
    }

    // GeeksforGeeks Method 2:
    void GenerateGrayArr(int n)
    {
        // base case
        if(n <= 0)
            return ;

        // 'arr' will store all generated codes
        vector<string> arr;

        // start with one-bit pattern
        arr.push_back("0");
        arr.push_back("1");

        // Every iteration of this loop gernerates 2*i codes from previously gererated i codes.
        int i, j;
        for(i = 2; i < (1<<n); i<<=1)
        {
            // Enter previously generated codes again in arr[] in a reverse order
            // Now arr[] has double Nr. of codes but one copy is stored in a reverse order from the other
            for(j = i-1; j >= 0 ; j--)
                arr.push_back(arr[j]);

            // append 0 to first half
            for(j = 0; j < i; j++)
                arr[j] = "0" + arr[j];

            // append 1 to second half
            for(j = i; j < (i*2); j++)
                arr[j] = "1" + arr[j]; 
        }
        // print content fo arr[] (Gray codes)
        for(i = 0; i < arr.size(); i++)
            cout<< arr[i] <<'\n';
    }

    // Code speedy Method 3: (here we deal with the sequence directly)
    void ConvertBinToGray(long long n)
    {
        long long a, b, binary = n, i = 0, gray = 0;

        while(binary)
        {
            a = binary%10;          // - store first last element
            binary = binary / 10;   // - remove last element
            b = binary%10;          // - store second last element
            if(a ^ b)               // if((a && !b) || (!a && b))
                gray = gray + pow(10, i);
            i++;
        }

        cout<<"The Gray Code of Bianry Nr. ( "<<n<<" ) is = "<<gray<<'\n';
    }


    //  | ---------------------------------------------------------------------------------------------------------
    //  |
    //  |   - Be carful with operators precedence problems. look website above in Ref. section
    //  |   - X & 7 == 1    is interpreted as       X & (7 == 1) becuase '==' has more precedence than '&'
    //  |   --> (X & 7) == 1 is the right way to write it.
    //  |   
    //  |   - 1<<10 -1      is interpreted as       1<<(10-1) because '-' has more precedence that '<<' 
    //  |   --> (1<<10)-1 is the right way to write it.
    //  |
    //  |   - Watch out from overflow:
    //  |   1 << 60 Fails. 1 is only 32 bitIntegers.
    //  |   --> 1ll << 60 which means (long long = 64 bitIntegers)
    //  |------------------------------------------------------------------------------------------------------------




    // - What about print all subsets of a GIVEN MASK. Easily recursive lets do it iterative.
    // - Let's assume, mask was complete and we work on it reverse.
    void printAllSubsetsAllOnes(int len)
    {
        int mask = (1<<len)-1;  // mask = 1111 for len = 4 

        for(int i = mask; i >= 0; i--)
        {
            printNumber(i, len);
            cout<<'\n';
        }
    }
    //  | ------------------------------------------------------------------------------------------------
    //  |   - So we decrease -1 to get next. Do u remember effect of X-1?
    //  |   - X-1 Work like this: we start from RHS untill we find the firest 1,
    //  |     then we turn it to 0 and turn all previous zeros to 1s.
    //  |
    //  |   11111
    //  |   11110
    //  |   11101
    //  |   11100
    //  |   11011
    //  |   11010
    //  |   11001
    //  |   11000
    //  |   10111
    //  |   10110
    //  |   10101
    //  |   10100
    //  |   10011
    //  |   10010
    //  |   10001
    //  |   10000
    //  |   01111
    //  |   01110
    //  |   01101
    //  |   01100
    //  |   01011
    //  |   01010
    //  |   01001
    //  |   01000
    //  |   00111
    //  |   00110
    //  |   00101
    //  |   00100
    //  |   00011
    //  |   00010
    //  |   00001
    //  |   00000
    //  | ----------------------------------------------------------------------------------------

    // - What about trying the GIVEN (MASK - 1) till ZERO.
    // - we wanna remove the added ones so the result is the same as the original except that we
    //   removed the last 1 bit.
    // - to this we simply AND (mask-1) with mask it self like this: ((mask-1)&mask)
    // - Ex: 110101000 -1 = 110100111 & 110101000 = 110100000
    //                            ^^^                    ^
    //                            |-> Wrong added 1s     |-> remove only last 1

    // get all subsets by removeing one '1' bit at a time
    void getAllSubMasks(int mask)
    {
        for(int subMask = mask; subMask; subMask = (subMask-1) & subMask)
        {
            printNumber(subMask, 5);
            cout<<'\n';
        }
    }

    // get all subsets by removing one '1' bit at a time (reverse order)
    void getAllSubMasksR(int mask)
    {
        for(int subMask = mask; subMask; subMask = (subMask-1) & subMask )
        {
            printNumber(subMask ^ mask, 5); // OR: ~(subMask)&mask
            cout<<'\n';
        }
    }



    // Effeciency: 
    //  - bits help us with speed every thing up.
    //  - Ex: intersection between two sets of integers.
    void intersection(int A[], int lenA, int B[], int lenB)
    {
        int mask1 = 0;
        int mask2 = 0;

        for(int i = 0; i < lenA; i++)
            mask1 = setBit1(mask1, A[i]);

        for(int i = 0; i < lenB; i++)
            mask2 = setBit1(mask2, B[i]);

        int inter = mask1 & mask2;

        for(int i = 0; i < max(lenA, lenB); i++)
        {
            if(getBit(inter, i))
                cout<<i<<" ";
        }
        cout<<'\n';
    }

    //  |-----------------------------------------------------------------------------------------------------------
    //  | Better Memory:
    //  |--------------
    //  | 
    //  | - Say you have numbers in range 100 Million, and you wanna know if some Number is visited before or not
    //  |   -> Simply: bool vis[100 * 1000000]; // and mark in it.
    //  |
    //  | - But 100 Million is too much, what about reducing this Number by divide it by 8(1Byte = 8Bits)
    //  | -> 100Million / 8 = 12500000 (12 Million and half!).
    //  |
    //  | - From what we know each char takes (8 bits), so bool takes also 8 bits
    //  |
    //  |------------------------------------------------------------------------------------------------------------

    const int MAX = 100000000;
    char vis[MAX/8 +1];     // why +1 ! because index start from 0 and 12500000 is actually the last element (may be!?)

    void setVisited(int i)              // - here each Byte is reponsible for 8 bits 
    {                                   // - First we need to get the char and then which is divided in to 8 bits, 
                                        //   and then try to know which bit.   UTILIZE byte!
        vis[i/8] |= ( 1 << (i%8) );     // i / 8 to get to our position in vis[] as we know each index of vis[] is 8 bits
                                        // in other words 8 visited places
        // more effeciently
        vis[i<<3] |= (1 << (i&7));
    }

    bool isVisited(int i)
    {
        return vis[i>>3] & (1 << (i&7));
    }



    // Much staff? Let's use STL!

    #include <bitset>   // The power , speed, memory handling in one place

    void STL()
    {
        const int N = 20;           // const
        string s = "000111";
        bitset<N> x(s);             // 00000000000000000111
        x.set();                    // 11111111111111111111
        x.flip();                   // 00000000000000000000

        x = 10;                     // 00000000000000001010

        x |= 3;                     // 00000000000000001011
        x = (x<<3);                 // 00000000000001011000
        x = ~x;                     // 11111111111110100111
        x.set(15, 0);               // 11110111111110100111
        x.set(15);                  // 11111111111110100111
        x.flip(0);                  // 11111111111110100110
        x.count();                  // - return the number of bits that are set
        x.any();                    // - return true if any bits are set
        x.none();                   // - return true if no bits are set
        x.test(15);                 // - return the value of position or out of range if index is not in the period of N
        x.to_ulong();               // - return a numerical (unsigned long) representation of mask

        // The most interesting
        if(x[2] == 1)
            ;
        x[0] = 1;                   // - set bit from most right to 1 ->  11111111111110100111
        x[N-1] = 0;                 // - set bit from most left to 0  ->  01111111111110100110      

        cout<<x<<'\n';              // - Display a string of n bits
    }


    // Some Exercises of Bits: 
    // ----------------------

    // 1- Calculate XOR from 1 to n:

    //  | --------------------------------------------------------
    //  | - Method steps:
    //  |   * finding the remainder of n by modeling it by 4
    //  |   * if rem = 0, then XOR will be same as n.
    //  |   * if rem = 1, then XOR will be 1.
    //  |   * if rem = 2, then XOR will be n+1.
    //  |   * if rem = 3, then XOR will be 0.
    //  | ---------------------------------------------------------

    int computeXOR(const int &n)
    {
        // Modulus operator is expensive on most of the the computers.
        // n & 3 wil be equivalent to n % 4
        switch(n & 3)
        {
            case 0: return n;   // if n is multiple of 4
            case 1: return 1;   // if n % 4 gives remainder 1  (any Odd Nr.)
            case 2: return n+1; // if n % 4 gives remainder 2  (any single Even Nr.)
            case 3: return 0;   // if n % 4 gives remainder 3  (any Nr. is (2^n) -1)
                                // - Hint for last case: in the XOR result, 
                                //   every element is included even number of times 
                                //   and XOR of even occurrences of any number is 0.
        }
        return -1; 
    }

    // 2- Equal Sum and XOR

    //  | --------------------------------------------------------------------------------------------
    //  |   - Given a positive integer n, find count of positive integers i such that 0 <= i <= n 
    //  |     and n + i = n ^ i
    //  |
    //  |   Input  : n = 7
    //  |   Output : 1
    //  |   Explanation:
    //  |   7^i = 7+i holds only for only for i = 0
    //  |   7+0 = 7^0 = 7
    //  |   
    //  |   
    //  |   Input n = 12
    //  |   Output: 4
    //  |   12^i = 12+i hold only for i = 0, 1, 2, 3
    //  |   for i=0, 12+0 = 12^0 = 12
    //  |   for i=1, 12+1 = 12^1 = 13
    //  |   for i=2, 12+2 = 12^2 = 14
    //  |   for i=3, 12+3 = 12^3 = 15
    //  |------------------------------------------------------------------------------------------------

    // Method 1 (Simple) :

    // - One simple solution is to iterate over all values of i 0<= i <= n and count all satisfying values.

    int countValues(int n)
    {
        int countV = 0; 
        
        // Traverse all numbers from 0 to n and
        // increment result only when given condition 
        // is satisfied.

        for(int i = 0; i < n; i++)
            if(n + i == n ^ i)
                countV++;
        
        return countV++;
    }

    // Method 2 (Efficient):
    // --------------------

    //  |------------------------------------------------------------------------------------------------------------
    //  |   An efficient solution is as follows
    //  |   
    //  |   So n + i = n ^ i implies n & i = 0
    //  |   
    //  |   Hence our problem reduces to finding values of i such that n & i = 0. 
    //  |   How to find count of such pairs? We can use the count of unset-bits in the binary representation of n. 
    //  |   For n & i to be zero, i must unset all set-bits of n. 
    //  |   If the kth bit is set at a particular in n, kth bit in i must be 0 always, 
    //  |   else kth bit of i can be 0 or 1.
    //  |   
    //  |   Hence, total such combinations are 2^(count of unset bits in n)
    //  |   
    //  |   For example, consider n = 12 (Binary representation : 1 1 0 0).
    //  |   All possible values of i that can unset all bits of n are 0 0 0/1 0/1 where 0/1 implies either 0 or 1. 
    //  |   Number of such values of i are 2^2 = 4.
    //  |   
    //  |   The following is the program following the above idea.
    //  |------------------------------------------------------------------------------------------------------------


    int countValuesEff(int n)
    {
        // unset_bits keep track of count of un-set bits in binary representation of n.
        int unset_bits = 0;
        while(n)
        {
            if(n&1 == 0)
                unset_bits++;
            n >>= 1;
        } 
        // return 2 ^ unset_bits
        return (1 << unset_bits);
    }


    // 3- Find if n is power of 2:

    // A simple method: (log of the number of base 2)
    bool isPowerOfTwo(int n)
    {
        if(n <= 0)
            return false;
        
        return ceil(log2(n)) == floor(log2(n));
            
    }

    // Method 2: Divide the Number by 2 and modul it by 2 untill you reachs 1

    // Another solution is to keep dividing the number by two, i.e, do n = n/2 iteratively. 
    // In any iteration, if n%2 becomes non-zero and n is not 1 then n is not a power of 2. 
    // If n becomes 1 then it is a power of 2.

    bool _isPowerOfTwo(int n)
    {
        if(n == 0)
            return false;
            
        while(n != 1)
        {
            if(n%2 != 0)
                return false;
            n/=2;
        }
        return true;
    }

    // Method 3: Nr. of set in binary representation should by only 1

    // All power of two numbers have only one bit set. 
    // So count the no. of set bits and if you get 1 then number is a power of 2. 
    // Please see Count set bits in an integer for counting set bits.

    bool __isPowerOfTwo(int n)
    {
        return (__builtin_popcount(n) == 1);
    }

    // Method 4: bitwise of n & (n-1) == 0

    //  |-----------------------------------------------------------------------------------------------------------------------------
    //  |   If we subtract a power of 2 numbers by 1 then all unset bits after the only set bit become set; 
    //  |   and the set bit become unset.
    //  |
    //  |   For example for 4 ( 100) and 16(10000), we get following after subtracting 1
    //  |
    //  |    3 –> 011
    //  |   15 –> 01111
    //  |
    //  |   So, if a number n is a power of 2 then bitwise & of n and n-1 will be zero. 
    //  |   We can say n is a power of 2 or not based on value of n&(n-1). 
    //  |   The expression n&(n-1) will not work when n is 0. To handle this case also, 
    //  |   our expression will become n& (!n&(n-1)) 
    //  |   (thanks to https://www.geeksforgeeks.org/program-to-find-whether-a-no-is-power-of-two/Mohammad for adding this case).
    //  |   Below is the implementation of this method.
    //  |-----------------------------------------------------------------------------------------------------------------------------

    bool ___isPowerOftwo(int n)
    {
        // First n in the below expression is for the case when x is 0
        return n && (!(n & (n-1)));
    }

    // 4- find XOR of the XOR’s of all subsets

    //  | ------------------------------------------------------------------------------------------------
    //  |   - The question is to find XOR of the XOR’s of all subsets. 
    //  |     i.e if the set is {1,2,3}. 
    //  |     All subsets are : [{1}, {2}, {3}, {1, 2}, {1, 3}, {2, 3}, {1, 2, 3}]. 
    //  |     Find the XOR of each of the subset and then find the XOR of every subset result.
    //  |
    //  |   - This is a very simple question to solve if we get the first step (and only step) right. 
    //  |     The solution is XOR is always 0 when n > 1 and Set[0] when n is 1.
    //  |   
    //  |   -How does this work?
    //  |   
    //  |   - The logic goes simple. Let us consider n’th element, 
    //  |     it can be included in all subsets of remaining (n-1) elements. 
    //  |     The number of subsets for (n-1) elements is equal to 2(n-1) 
    //  |     which is always even when n>1. 
    //  |     Thus, in the XOR result, every element is included even number of times 
    //  |     and XOR of even occurrences of any number is 0.
    //  | ---------------------------------------------------------------------------------------------------


    int findXORAllSubsets(int Set[], int n)
    {
        if(n == 1)
            return Set[0];
        else
            return 0;
    }



    // 7- How to swap two numbers without using a temporary variable?

    // Method 1 (Using Arithmetic Operators)

    // The idea is to get sum in one of the two given numbers. 
    // The numbers can then be swapped using the sum and subtraction from sum.

    void swap_sum(int &a, int &b)
    {
        // let a = 10 and b = 5
        a = a + b; // a becomes 15
        b = a - b; // b becomes 10
        a = a - b; // a becomes 5
    }

    // Method 2: Multiplication and division can also be used for swapping.

    void swap_mul(int &a, int &b)
    {
        // let a = 10 and b = 5
        a = a * b; // a becomes 50
        b = a / b; // b becomes 10
        a = a / b; // a becomes 5
    }

    // Method 3: (Using Bitwise XOR)

    // - The bitwise XOR operator can be used to swap two variables. 
    //   The XOR of two numbers x and y returns a number 
    //   which has all the bits as 1 wherever bits of x and y differ. 
    // - For example XOR of 10 (In Binary 1010) and 5 (In Binary 0101) is 1111 
    //   and XOR of 7 (0111) and 5 (0101) is (0010). 

    void swap_bitwise(int &a, int &b)
    {
        // let a = 10 and b = 5
        a = a ^ b;  // a becomes 15
        b = a ^ b;  // b becomes 10
        a = a ^ b;  // a becomes 5
    }

    //  |-------------------------------------------------------------------------------------------------------
    //  |   - Problems with above methods:
    //  |   ------------------------------
    //  |   1) The multiplication and division based approach doesn’t work 
    //  |      if one of the numbers is 0 as the product becomes 0 
    //  |      irrespective of the other number.
    //  |   
    //  |   2) Both Arithmetic solutions may cause arithmetic overflow. 
    //  |      If x and y are too large, addition and multiplication may go out of integer range.
    //  |   
    //  |   3) When we use pointers to variable and make a function swap,
    //  |      all of the above methods fail when both pointers point to the same variable. 
    //  |      Let’s take a look what will happen in this case if both are pointing to the same variable.
    //  |   
    //  |   // Bitwise XOR based method
    //  |   x = x ^ x; // x becomes 0
    //  |   x = x ^ x; // x remains 0
    //  |   x = x ^ x; // x remains 0
    //  |   
    //  |   // Arithmetic based method
    //  |   x = x + x; // x becomes 2x
    //  |   x = x – x; // x becomes 0
    //  |   x = x – x; // x remains 0
    //  |   
    //  |   Let us see the following program.
    //  | ------------------------------------------------------------------------------------------------------

    // Method 3: Pointers 

    void swap_ptr(int *a_ptr, int *b_ptr)
    {
        // let a = 0 and b = 5
        // if we in main send the same position swap_ptr(&a, &a);
        *a_ptr = *a_ptr ^ *b_ptr;   // *a_ptr becames 0
        *b_ptr = *a_ptr ^ *b_ptr;   // *b_ptr becames 0
        *a_ptr = *a_ptr ^ *b_ptr;   // *a_ptr becames 0
    }

    //  |----------------------------------------------------------------------------------------------
    //  |   - Swapping a variable with itself may needed in many standard algorithms. 
    //  |     For example see this implementation of QuickSort where we may swap a variable with itself. 
    //  |     The above problem can be avoided by putting a condition before the swapping.
    //  |----------------------------------------------------------------------------------------------

    // Method 3: Pointers (updated) 
    void swap_ptr_update(int *a_ptr, int *b_ptr)
    {
        // Check if the two addresses are the same
        if(a_ptr == b_ptr)
            return ;
        *a_ptr = *a_ptr ^ *b_ptr;   
        *b_ptr = *a_ptr ^ *b_ptr;   
        *a_ptr = *a_ptr ^ *b_ptr;   

    }


    // 8- Flip the number in a simple way
    int flipNumber(int number)
    {
        int len = countBits(number);
        int value = ((1<<len) -1);
        
        return value - number; // OR: ((1<<len)-1) - number; directly 
    }

    // 9- find the most significant set bit:

    // Method 1: Divide by 2 untill it reaches Zero

    // A simple solution is to one by one divide n by 2 until it becomes 0 
    // and increment a count while doing this. This count actually represents the position of MSB.


    int getMSB(int n)
    {
        if(n == 0)
            return 0;
        
        int msb = 0;
        while(n != 0)
        {
            n/= 2;
            msb++;
        }
        return (1 << msb); //OR: return pow(2, msb)
    }


    //  | -------------------------------------------------------------------------------------
    //  |   Method 2: set all bits and add 1 and shift back by one approach
    //  |   ---------------------------------------------------------------
    //  |
    //  |   - An efficient solution for a fixed size integer (say 32 bits) 
    //  |     is to one by one set bits, then add 1 so that only the bit after MSB is set. 
    //  |     Finally right shift by 1 and return the answer. 
    //  |     This solution does not require any condition checking.
    //  |   
    //  |   - For example: 
    //  |   
    //  |   - Below steps set bits after 
    //  |     MSB (including MSB) 
    //  |  
    //  |   - Suppose n is 273 (binary 
    //  |     is 100010001). It does following 
    //  |     100010001 | 010001000 = 110011001 
    //  |   -> n |= n >> 1; 
    //  |  
    //  |   - This makes sure 4 bits 
    //  |     (From MSB and including MSB) 
    //  |     are set. It does following 
    //  |     110011001 | 001100110 = 111111111 
    //  |   -> n |= n >> 2;
    //  |    
    //  |   - To do it in a general form we will for fixed size 32 will shift also by 4 and 8 and 16, 
    //  |     so we will be sure that all bits are set. 
    //  |   
    //  |   - Increment n by 1 so that there is only one set bit  which is just before original MSB.
    //  |     n now becomes 1000000000 
    //  |   -> n = n + 1; 
    //  |      
    //  |   - Return original MSB after shifting. 
    //  |     n now becomes 100000000 
    //  |   -> return (n >> 1);
    //  |     
    //  | --------------------------------------------------------------------------------------------

    int _getMSB(int n)
    {
        n |= (n >> 1);
        n |= (n >> 2);
        n |= (n >> 4);
        n |= (n >> 8);
        n |= (n >> 16);
        
        n++;

        return (n >> 1); 
    }

    // ------------------------------------------------------------------------------------------------
    //  |    Method 3 : Find the position of MSB and return its value
    //  |   
    //  |    - its by getting the number of bits in that number which the number itself indicate the 
    //  |      position of the MSB.
    //  |   
    //  |    - Another Approach: Given a number n. 
    //  |      First, find the position of the most significant set bit 
    //  |      and then compute the value of the number with a set bit at k-th position.
    // --------------------------------------------------------------------------------------------


    int __getMSB(int n)
    {
        int k = (int)(log2(n)); // find MSB

        return (1 << k);    // OR: (int)(pow(2, k))
    }

    // 10- check if bits in a number are in alternate pattern (like 101010).

    //  |--------------------------------------------------------------------------------------
    //  |  - Given a positive integer n. The problem is to check 
    //  |    whether this integer has an alternate pattern 
    //  |    in its binary representation or not. 
    //  |    Here alternate pattern means that the set and unset bits 
    //  |    in n occur in alternate order. 
    //  |    For example- 5 has an alternate pattern i.e. 101.
    //  |    Print “Yes” if it has an alternate pattern otherwise “No”.
    //  |
    //  |   Note: 0 < n.
    //  |
    //  |   Examples :
    //  |   
    //  |   Input : 10
    //  |   Output : Yes
    //  |   (10)10 = (1010)2, has an alternate pattern.
    //  |   
    //  |   Input : 12
    //  |   Output : No
    //  |   (12)10 = (1100)2, does not have an alternate pattern.
    //  | --------------------------------------------------------------------------------


    // Method 1: check curr position with prev position:

    // - A simple approach is to find its binary equivalent and then check its bits.

    bool findPattern(int n)         // O(n) ! efficient
    {
        int prev = n%2;             // store last bit
        n /= 2;

        while(n != 0)
        {
            int curr = n%2;

            if(curr == prev)        // If current bit is same as previous
                return false;
            
            prev = curr;
            n /= 2; 
        }
        return true;
    }

    // Method 2: shifting and XORing so that all Bits are set

    //  | ---------------------------------------------------------------------------------
    //  |   - Efficient Approach: Following are the steps:
    //  |   
    //  |   1. Calculate num = n ^ (n >> 1). If n has an alternate pattern, 
    //  |      then n ^ (n >> 1) operation will produce a number having set bits only. 
    //  |      ‘^’ is a bitwise XOR operation.
    //  |
    //  |   2. Check whether all the bits in num are set or not. Refer this post.
    //  | -----------------------------------------------------------------------------------

    bool _findPattern(unsigned int n)
    {
        unsigned int altP = (n ^ (n >> 1));  

        if(((n+1) & n) == 0)                 // if true, then all bits are set
            return true;
        
        return false;
    }

    // 11- getting the lowest bit of a number

    // ----------------------------------------------------------------------
    //  | - Firstly: we should know the meaning of: 
    //  |   1's complement of a Number: Inverting every bit of a number.
    //  |   2’s complement of a Number: 1’s complement + 1 OR ( -Number ).
    //  |
    //  | - Secondly: How to do it:
    //  |   This is done by using expression ‘X &(-X)’
    //  |   Let us see this by taking an example:
    //  |   Let X = 00101100. So ~X(1’s complement) will be ‘11010011’ 
    //  |   and 2’s complement will be (~X+1 or -X) i.e  ‘11010100’.
    //  |   So if we ‘AND’ original number ‘X’ with its two’s complement 
    //  |   which is ‘-X’, we get lowest set bit.
    //  |   
    //  |   00101100 X
    //  |   11010011 ~X (1's complement)
    //  |   11010100 ~X +1 OR -X (2's complement)
    //  |   -------- X & (-X)
    //  |   00000100 (Answer)
    // -------------------------------------------------------------------------

    int lowest_set_bit(int n)
    {
        return n & (-n); // Or n & (~n +1);
    }


    // 12- Clear all bits from LSB to ith bit

    //-------------------------------------------------------------------------------------
    //  |   - How:
    //  |   
    //  |    mask = ~((1 << i+1 ) - 1);
    //  |    x &= mask;
    //  |
    //  |   - Logic: To clear all bits from LSB to i-th bit, 
    //  |     we have to AND x with mask having LSB to i-th bit 0. 
    //  |     To obtain such mask, first left shift 1 i times. 
    //  |     Now if we minus 1 from that, all the bits from 0 to i-1 become 1 
    //  |     and remaining bits become 0. Now we can simply take complement of mask 
    //  |     to get all first i bits to 0 and remaining to 1.
    //  |   
    //  |   - Example:
    //  |
    //  |   x = 29              (00011101) and we want to clear LSB to 3rd bit, total 4 bits
    //  |   mask -> 1 << 4 -> 16(00010000)
    //  |   mask -> 16 – 1 -> 15(00001111)
    //  |   mask -> ~mask  ->    11110000
    //  |   x & mask       -> 16(00010000)
    //  |-----------------------------------------------------------------------------------------


    int ClearLSB_to_ithBit(unsigned int n, unsigned int i)
    {
        unsigned int mask = (1<<i+1) -1;
        return (n & (~mask) );
    }

    //13- Clearing all bits from MSB to i-th bit

    //  |------------------------------------------------------------------------------------
    //  |   - How:
    //  |
    //  |   mask = (1 << i) - 1;
    //  |   x &= mask;
    //  |   
    //  |   - Logic: 
    //  |     To clear all bits from MSB to i-th bit, 
    //  |     we have to AND x with mask having MSB to i-th bit 0. 
    //  |     To obtain such mask, first left shift 1 i times. 
    //  |     Now if we minus 1 from that, all the bits from 0 to i-1 become 1 
    //  |     and remaining bits become 0.
    //  |   
    //  |   - Example:
    //  |   
    //  |   x = 215             (11010111) and we want to clear MSB to 4th bit, total 4 bits
    //  |   mask -> 1 << 4 -> 16(00010000)
    //  |   mask -> 16 – 1 -> 15(00001111)
    //  |   x & mask       -> 7 (00000111)
    //  |-----------------------------------------------------------------------------------------

    int ClearMSB_to_ithBit(unsigned int n, unsigned int i)
    {
        unsigned int mask = (1 << i) -1;
        return (n & mask);
    }

    // There are more tricky and funny examples in this Website:
    // See here: https://www.geeksforgeeks.org/bit-tricks-competitive-programming/




        //-----------------------
        // Video #24: Pointers 2:
        //-----------------------

    // Pointer to pointer
    
    void print(int **pArr)
    {
        cout<<'\n';
        for(int i = 0; i < 3; i++){

            for(int j = 0; j < 2; j++)
                cout<<pArr[i][j]<<" ";
            cout<<'\n';
        }
    }

    int** create()
    {
        cout<<'\n';

        int **pArr = new int*[3];
        for(int i = 0; i < 3; i++){
            pArr[i] = new int[2];           // create the 2 Dimension

            for(int j = 0; j < 2; j++)
                pArr[i][j] = i^2 +j;        // assign values in the 2D **Array
        }
        
        cout<<"2D **Array is created\n";
        return pArr;
    }

    void free(int **pArr)
    {
        cout<<'\n';

        for(int i = 0; i < 3; i++)
            delete[] pArr[i];
        delete[] pArr;
        
        cout<<"is Free now\n";
    }

    // Common Mistakes (pointers)
    int buggyPointers(int a, int b)
    {
        int *ptr1 = new int[8];     // create 3 array pointers
        int *ptr2 = new int[8];
        int *ptr3 = new int[8];

        int *ptrSalary;             // Bad practice: it contains Garbage
        int *grade = NULL;          // Best practice: initialize to NULL
        ptr1 = NULL;                // Wrong,? it is an Array you should initialize each element in the array with NULL;

        if(a)   return a;           // Forget to release (delete[]) cause (Memory Leak)

        delete ptr1;                // Wrong, it's array, it should be deleted like: (delete[] ptr1)

        int *ptr = ptr2;
        ptr++;
        delete[] ptr;               // Wrong, delete from array start

        delete ptr3;
        ptr3[1] = 2;                // Wrong, memory already deleted
        delete ptr3;                // Wrong, double free problem


        delete grade;               // No problem/benefit

        *ptrSalary = 1000;          // Wrong, its not initialized to a location with 'new'
        ptrSalary = new int;        // one element preserved in memory for ptrSalary
        delete[] ptrSalary;         // Wrong, its normal pointer, should be deleted like (delete ptrSalary)

        return a * b;
    }

    // Passing arrays / pointers:

    // test1, 2, 3 are actually the SAME for compiler
    void test1(int arr[]){}     // Pointer to first element
    void test2(int arr[5]){}    // Pointer to first element
    void test3(int *ptr){}      // Pointer to first element
    void test4(int (&arr)[5]){} // Reference to an array, Force your array to be on size 5

    void _test1(int arr[][10]){}        // Pointer to an array
    void _test2(int arr[30][10]){}      // Pointer to an array
    void _test3(int (*ptr)[10]){}       // Pointer to an array
    void _test4(int (&arr)[30][10]){}   // Reference to an array, and Force array of size 30 x 10


    // To know the reason of why we need the second dimension 
    // but not necessary the first dimension look at the video min(18:20).
    



    // -------------------------------
    // Video #26: Headers and Includes
    // -------------------------------

    // Templates:
    template<typename T>
    T sumGeneric( T a, T b)
    {
        return a + b;
    }

        //------------------
        // Video #29: c++ 11
        //------------------

    //auto

    // auto and Expression Templates

    //auto mult(int c) {
    //    return c * std::valarray<int>{1};   // return value will not be 3 as the value passed from main function
    //}

    // - Why not return 3: 
    //   The reason is that operator* on valarray gives you a proxy object
    //   that refers to the valarray as a means of lazy evaluation. 
    //   By using auto, you're creating a dangling reference. 
    //   Instead of mult had returned a std::valarray<int>, 
    //   then the code would definitely print 3.

     
    valarray<int> mult(int c) {
        return c * std::valarray<int>{1};   // return value will be 3 as passed from main function
    }


    // auto, Trailing return type
    
    // auto main() -> int {} is equivallent to int main() {}

    // Mostly useful combined with ' decltype() 'to use parameters instead of decltype<T>
    template<typename T1, typename T2>
    auto Add(const T1& lhs, const T2& rhs) -> decltype(lhs + rhs) { return lhs + rhs; }


    // Variadic Functions: 

    // Note : - typename arg, typename... args must be
    //          inside angular brackets. - but worked also with <>
    //          and the type of arguments could be different from each other
    // - Syntax: 
    //
    // template(typename arg, typename... args)
    // return_type function_name(arg var1, args... var2)
    

    // Base case: to resolve case when sum(list) is empty
    int sum() { return 0; } 
    
    // Function takes at least one parameter, and remaining list
    // Recursive sum
    template<typename ... Args>
    int sum(int a, Args ... args)
    { return a + sum(args...); }

    // To be more generic
    template<typename T, typename ... Args>
    int _sum( T a, Args ... args)
    { return a + sum(args...); }

    // Move 

    vector<int> compute(){
        return {1, 3, 5};
    }

    // lambda funciton
    bool isOdd(int i)
    { return ((i%2) == 1); } // get also: return i%2; ?


    // more complicated example (lambda expression):

    template<typename function>
    void perform(function operation, vector<int>& vec)
    {
        for(auto& val : vec)
            val = operation(val);
    }

    // rvalue reference and move semantics:

    // - Move semantics is a new way of moving resources around in an optimal way
    //   by avoiding unnecessary copies of temporary objects, 
    //   based on rvalue references. In my opinion, 
    //   the best way to understand what move semantics is about is to build
    //   a wrapper class around a dynamic resource (i.e. a dynamically allocated pointer) 
    //   and keep track of it as it moves in and out functions. 
    //   Keep in mind however that move semantics does not apply only to classes!

    // - That said, let's take a look at the following example:


    class Holder
    {
        public:

            Holder(int size)        // Constructor
            {
                m_data = new int[size];
                m_size = size;
            }

            // --------------------------------------------------------------------------------
            Holder(const Holder& other)         // <-- lvalue reference in input
            {
                m_data = new int[other.m_size];                         // (1)
                copy(other.m_data, other.m_data+other.m_size, m_data);  // (2)
                m_size = other.m_size;
            }

            // - Implementing the copy constructor:
            
            // - Here I'm initializing a new Holder object 
            //   out of the existing one passed in as other:
            //   I create a new array of the same size (1)
            //   and then I copy the actual data from
            //   other.m_data to m_data (i.e. this.m_data) (2). 

            // --------------------------------------------------------------------------------
            Holder(Holder&& other)  // <-- rvalue reference in input
            {
                m_data = other.m_data;  // (1)
                m_size = other.m_size;
                other.m_data = nullptr; // (2)
                other.m_size = 0;
            }
            
            // - Implementing the move constructor

            // - It takes in input an rvalue reference to another Holder object.
            //   This is the key part: being an rvalue reference,
            //   we can modify it. So let's steal its data first (1),
            //   then set it to null (2). No deep copies here,
            //   we have just moved resources around!
            //   It's important to set the rvalue reference data to some valid state (2)
            //   to prevent it from being accidentally deleted when the temporary object dies:
            //   our Holder destructor calls delete[] m_data, remember? In general,
            //   for reasons that will become more clear in a few paragraphs,
            //   it's a good idea to always leave the objects being stolen from in some well-defined state.

            // --------------------------------------------------------------------------------
            Holder& operator=(const Holder& other)      // <-- lvalue reference in input
            {
                if(this == &other) return *this;        // (1)
                delete[] m_data;                        // (2)
                m_data = new int[other.m_size];         
                copy(other.m_data, other.m_data+other.m_size, m_data);
                m_size = other.m_size;
                return *this;                           // (3)
            }

            // - Implementing the assignment operator:

            // - First of all a little protection against self-assignment (1).
            //   Then, since we are replacing the content of this class with another one,
            //   let's wipe out the current data (2).
            //   What's left is just the same code we wrote in the copy constructor.
            //   By convention a reference to this class is returned (3).

            // --------------------------------------------------------------------------------
            Holder& operator =(Holder&& other)      // <-- rvalue reference in input
            {
                if(this == &other) return *this;    
                delete[] m_data;                    // (1)

                m_data = other.m_data;              // (2)
                m_size = other.m_size;

                other.m_data = nullptr;             // (3)
                other.m_size = 0;

                return *this;
            }
            // - Implementing the move assignment operator:

            // - We steal data (2) from the other object coming in as an rvalue reference,
            //   after a cleanup of the existing resources (1).
            //   Let's not forget to put the temporary object to some valid state (3)
            //   as we did in the move constructor.
            //   Everything else is just regular assignment operator duty.

            // --------------------------------------------------------------------------------
            ~Holder()               // Destructor
            {
                delete[] m_data;
            }

        private:

            int* m_data;
            size_t m_size;
    };

    // - It is a naive class that handles a dynamic chunk of memory: 
    //   nothing fancy so far, except for the allocation part.
    //   When you choose to manage the memory yourself you should follow the so-called Rule of Three.
    //   This rule states that if your class defines one or more of the following methods
    //   it should probably explicitly define all three:

    // * destructor;
    // * copy constructor;
    // * copy assignment operator.



    // - A C++ compiler will generate them by default if needed, 
    //   in addition to the constructor and other functions
    //   we don't care about right now.
    //   Unfortunately the default versions are just "not enough"
    //   when your class deals with dynamic resources.
    //   Indeed, the compiler couldn't generate a constructor
    //   like the one in the example above: 
    //   it doesn't know anything about the logic of our class.


    // - The key point of the copy constructor and the assignment operator
    //   is that they both receive a const reference to an object
    //   in input and make a copy out of it for the class they belong to.
    //   The object in input, being a constant reference, is of course left untouched.
    
    // - The limitations of our current class design:

    // - Our class is good to go, but it lacks of some serious optimization. Consider the following function:

    Holder createHolder(int size)
    {
        return Holder(size);
    }

    // - It returns a Holder object by value.
    //   We know that when a function returns an object by value,
    //   the compiler has to create a temporary 
    //   — yet fully-fledged — object (rvalue).
    //   Now, our Holder is a heavy-weight object due to
    //   its internal memory allocation,
    //   which is a very expensive task:
    //   returning such things by value with our current class design would trigger
    //   multiple expensive memory allocations,
    //   which is rarely a great idea. How come?
    //   Consider this: (go to main function to "H1 Ref." comment )



    // Stackoverflow example Clarification of Move semantic

    class MyType {
        public:
            
            // Regular constructor
            MyType(std::string str) : mName(std::move(str)) {
                std::cout << "MyType::MyType " << mName << ' ' << this << '\n';
            }
            
            // Destructor
            ~MyType() { 
                std::cout << "MyType::~MyType " << mName << ' ' << this << '\n'; 
            }
            
            // copy constructor
            MyType(const MyType& other) : mName(other.mName) 
            { 
                std::cout << "MyType::MyType(const MyType&) " << mName << ' ' << &other << "->" << this << '\n'; 
            }
            
            // move constructor
            MyType(MyType&& other) //noexcept
            : mName(std::move(other.mName)) 
            { 
                std::cout << "MyType::MyType(MyType&&) " << mName << ' ' << &other << "->" << this << '\n';         
            }
            // assignment operator
            MyType& operator=(const MyType& other) { 
                if (this != &other)
                    mName = other.mName;
                std::cout << "MyType::operator=(const MyType&) " << mName << ' ' << this << '\n'; 
                return *this;
            }
            
            // move assignment operator
            MyType& operator=(MyType&& other) //noexcept      
            { 
                if (this != &other)
                    mName = std::move(other.mName);
                std::cout << "MyType::operator=(MyType&&) " << mName << '\n'; 
                return *this; 
            }      
            
        private:
            std::string mName;
    };



    // Copy-and-swap (idiom)

    // - Intent: 
    //   to create an exception safe implementation of overloaded assignment operator

    // - Motivation
    //   Exception safety is a very important corner stone of highly reliable C++ software
    //   that uses exceptions to indicate "exceptional" conditions.
    //   There are at least 3 types of exception safety levels:
    //   basic, strong, and no-throw. Basic exception safety should be offered always
    //   as it is usually cheap to implement.
    //   Guaranteeing strong exception safety may not be possible in all the cases.
    //   The copy-and-swap idiom allows an assignment operator to be implemented elegantly
    //   with strong exception safety.


    class String
    {

            char* str;
        public:
            //String& operator =(const String& s)
            //{
            //    String temp(s);   // Copy constructor
            //    temp.swap(*this); // Non-throwing swap
            //
            //    return *this;
            //}
            // Old resources released when destructor of temp is called
            
            // - Some variations of the above implementation are also possible.
            //   A check for self assignment is not strictly necessary
            //   but can give some performance improvements
            //   in (rarely occurring) self-assignment cases.

            //String& operator =(const String& s)
            //{
            //    if(this != &s)
            //    {
            //        String(s).swap(*this); // Copy constructor and Non-throwing swap
            //    }
            //
            //    return *this;
            //}

            // - copy elision and copy-and-swap idiom
            //   Strictly speaking, explicit creation of a temporary inside the assignment operator
            //   is not necessary. The parameter (right hand side) of the assignment operator
            //   can be passed-by-value to the function. The parameter itself serves as a temporary.

            String& operator =(String s)
            {
                s.swap(*this); // non-throwing swap
                return *this;
            }

            // - This is not just a matter of convenience but in fact an optimization. 
            //   If the parameter (s) binds to an lvalue (another non-const object),
            //   a copy of the object is made automatically while creating the parameter (s).
            //   However, when s binds to an rvalue (temporary object, literal),
            //   the copy is typically elided, which saves a call to a copy constructor
            //   and a destructor. In the earlier version of the assignment operator
            //   where the parameter is accepted as const reference,
            //   copy elision does not happen when the reference binds to an rvalue.
            //   This results in an additional object being created and destroyed.

            // - In C++11, such an assignment operator is known as a unifying assignment operator
            //   because it eliminates the need to write two different assignment operators:
            //   copy-assignment and move-assignment. As long as a class has a move-constructor,
            //   a C++11 compiler will always use it to optimize creation of a copy from another temporary (rvalue).
            //   Copy-elision is a comparable optimization in non-C++11 compilers to achieve the same effect.

            // Also see the non-throwing swap idiom
            void swap(String& s) throw()
            {
                std::swap(this->str, s.str);
            }
    };

    String createString()
    {
        return String();
    }

    // Perfect forwarding:

    // - First iteration:
    // - For efficiency reasons the function template should take its arguments by reference.
    //   To say it exactly. As a non-constant lvalue reference.
    //   Here is the function template create in my first iteration.

    // --------------------------------------
    //template<typename T, typename Arg>
    //T create(Arg& a)
    //{
    //    return T(a);
    //}
    // --------------------------------------

    // - Second iteration:
    
    // --------------------------------------
    //template<typename T, typename Arg>
    //T create(const Arg& a)
    //{
    //    return T(a);
    //}
    // --------------------------------------
    
    // - Third iteration:

    // - Now, I have the solution in the shape of the C++ function std::forward.
    //   With std::forward, the solution looks promising.
    
    // --------------------------------------
    //template<typename T, typename Arg>
    //T create(Arg&& a)
    //{
    //    return T(forward<Arg>(a));
    //}
    // --------------------------------------
    
    // - Before I present the recipe from cppreference.com to get perfect forwarding,
    //   I will introduce the name universal reference.

    // - The name universal reference is coined by Scott Meyers.

    // - The universal reference (Arg&& a) in line 7 is a powerful reference that can bind lvalues or rvalues.
    //   You have it to your disposal if you declare a variable Arg&& a for a derived type A.

    // - To achieve perfect forwarding you have to combine a universal reference with std::forward.
    //   std::forward<Arg>(a) returns the underlying type of a, because a is a universal reference.
    //   Therefore, a rvalue remains a rvalue.

    // - Now to the pattern
    
    //template<typename T>
    //T wrapper(T&& a)
    //{
    //    return func(forward<T>(a));
    //}

    // - I used the colour red to emphasis the key parts of the pattern.
    //   I used exactly this pattern in the function template create.
    //   Only the name of the type changed from T to Arg.

    // - Is the function template create perfect?
    //   Sorry to say, but now. create needs exactly one argument
    //   which is perfectly forwarded to the constructor of the object (line 7).
    //   The last step in now to make a variadic template out of the function template.

    // - Forth iteration - the perfect factory method

    // - Variadic Templates are templates that can get an arbitrary number of arguments.
    //   That is exactly the missing feature of the perfect factory method.

    template<typename T, typename ... Arg>
    T create(Arg&& ... arg)
    {
        return T(forward<Arg>(arg)...);
    }

    struct MyStruct{
        int year;
        double pi;
        string rvalue;
        
        MyStruct(int i, double d, string s){
            year = i;
            pi = d;
            rvalue = s;
        }
    };

    // - auto& and auto* versus auto

    // - What we‘ve seen so far is, that we need to be explicit,
    //   if it comes to auto and references. We must always write auto& to get a reference.
    //  How is it with pointers? There auto gives us the correct type, so we can spare the star?
    //  This is in fact a question I frequently get from my students.
    //   The answer is: it depends. I recommend writing it just for consistency.
    //   However, there are scenarios where we indeed need auto* even that auto did deduce the correct type.
    //   Consider this example:

    struct Foo{
        // public: inline constexpr Foo() noexcept; 
        // public: inline constexpr Foo(const Foo &); 
        // public: inline constexpr Foo(Foo &&); 
    };

    Foo* getFoo()
    {
        //static Foo foo;
        static Foo foo = Foo();

        return &foo;
    }

    // - The simple advice is: always be explicit and use the form auto& as well as auto*
    //   even if auto is able to deduce a pointer type.

    //  Let’s say we are explicit and use auto&. Look at this example:
    struct Singleton {};

    auto Get()
    {
        static Singleton s{};

        return s;
    }

    // --> error: non-const lvalue reference to type 'Singleton' cannot bind to a temporary of type 'Singleton'

    // - The reason is, the Get in fact return Singleton and not Singleton&. Why?
    //   Because we did not apply the & to the auto-return type of Get.
    //   A small change and the code compiles:

    auto& _Get()
    {
        static Singleton s{};

        return s;
    }

    // -----------------------------------------------------------------------------------------

    // R-value references: 
    // Forcing move semantics: 

    class X
    {
        public:
            
            X(){}
            ~X(){}
            
            X(const X& x){}
            
            X& operator = (const X& x){
                return *this;
            }
            X& operator =(X&&);

    };

    // - As we all know, the First Amendment to the C++ Standard states:
    //   "The committee shall make no rule that prevents C++ programmers from shooting themselves in the foot."
    //   Speaking less facetiously, when it comes to choosing between giving programmers more control
    //   and saving them from their own carelessness, C++ tends to err on the side of giving more control.
    //   Being true to that spirit, C++11 allows you to use move semantics not just on rvalues,
    //   but, at your discretion, on lvalues as well. A good example is the std library function swap.
    //   As before, let X be a class for which we have overloaded the copy constructor and copy assignment operator
    //   to achieve move semantics on rvalues.

    //template<class T> 
    //void swap(T& a, T& b)
    //{
    //    T tmp(a);
    //    a = b;
    //    b = tmp;
    //}

    // - There are no rvalues here. Hence, all three lines in swap use non-move semantics.
    //   But we know that move semantics would be fine:
    //   wherever a variable occurs as the source of a copy construction or assignment,
    //   that variable is either not used again at all, or else it is used only as the target of an assignment.
    
    // - In C++11, there is an std library function called std::move that comes to our rescue.
    //   It is a function that turns its argument into an rvalue without doing anything else.
    //   Therefore, in C++11, the std library function swap looks like this:

    template<class T>
    void _swap(T& a, T& b)
    {
        T tmp( move(a) );
        a = move(b);
        b = move(tmp);
    }

    // - Now all three lines in swap use move semantics. Note that for those types that do not implement
    //   move semantics (that is, do not overload their copy constructor and assignment operator
    //   with an rvalue reference version), the new swap behaves just like the old one.
    
    // - std::move is a very simple function. Unfortunately, though, I cannot show you the implementation yet.
    //   We'll come back to it later.

    // - Using std::move wherever we can, as shown in the swap function above,
    //   gives us the following important benefits:

    //      1- For those types that implement move semantics,
    //         many standard algorithms and operations will use move semantics
    //         and thus experience a potentially significant performance gain.
    //         An important example is inplace sorting: inplace sorting algorithms
    //         do hardly anything else but swap elements, and this swapping will
    //         now take advantage of move semantics for all types that provide it.

    //      2- The STL often requires copyability of certain types, e.g., types that can be
    //         used as container elements. Upon close inspection, it turns out that in many cases,
    //         moveability is enough. Therefore, we can now use types that are moveable but not copyable
    //         (unique_pointer comes to mind) in many places where previously, they were not allowed.
    //         For example, these types can now be used as STL container elements.


    // - Now that we know about std::move, we are in a position to see why the implementation of
    //   the rvalue reference overload of the copy assignment operator that I showed earlier is still
    //   a bit problematic. Consider a simple assignment between variables, like this:

    // a = b;

    // - What do you expect to happen here? You expect the object held by a to be replaced by a copy of b,
    //   and in the course of this replacement, you expect the object formerly held by a to be destructed.
    //   Now consider the line


    // a = move(b);

    // - If move semantics are implemented as a simple swap, then the effect of this is that the objects
    //   held by a and b are being exchanged between a and b. Nothing is being destructed yet.
    //   The object formerly held by a will of course be destructed eventually, namely, when b goes out of scope.
    //   Unless, of course, b becomes the target of a move, in which case the object formerly
    //   held by a gets passed on again. Therefore, as far as the implementer of the copy assignment operator
    //   is concerned, it is not known when the object formerly held by a will be destructed.


    // - So in a sense, we have drifted into the netherworld of non-deterministic destruction here:
    //   a variable has been assigned to, but the object formerly held by that variable
    //   is still out there somewhere. That's fine as long as the destruction of that object
    //   does not have any side effects that are visible to the outside world.
    //   But sometimes destructors do have such side effects. An example would be the release of a lock
    //   inside a destructor. Therefore, any part of an object's destruction that has side effects
    //   should be performed explicitly in the rvalue reference overload of the copy assignment operator:

    X& X::operator =(X&& rhs)
    {
        // perform a cleanup that takes care of at least those parts of the
        // destructor that have side effects. be sure to leave the project
        // in a distructible and assignable state.

        // Move semantics: exchange content between this and rhs

        return *this;
    }


    // Is an Rvalue Reference an Rvalue?
    
    // - As before, let X be a class for which we have overloaded the copy constructor
    //   and copy assignment operator to implement move semantics. Now consider:

    void __foo(X&& x)
    {
        X anotherX = x;
        // ...
    }

    // - The interesting question is: which overload of X's copy constructor gets called in the body of foo?
    //   Here, x is a variable that is declared as an rvalue reference, that is, a reference which preferably
    //   and typically (although not necessarily!) refers to an rvalue. Therefore, it is quite plausible to expect
    //   that x itself should also bind like an rvalue, that is,

    // X(X&& rhs);

    // - should be called. In other words, one might expect that anything that is declared as an rvalue reference
    //   is itself an rvalue. The designers of rvalue references have chosen a solution
    //   that is a bit more subtle than that:

    
    // - In the example above, the thing that is declared as an rvalue reference has a name,
    //   and therefore, it is an lvalue:

    //X&& goo(); 
    //X x = goo(); // calls X&(X&& rhs); because the thing on the right hand side has no name

    // - And here's the rationale behind the design: 
    //   Allowing move sematics to be applied tacitly 
    //   to something that has a name, as in

    // X anotherX = x; // x still in scope!
    

    // - would be dangerously confusing and error-prone because the thing from which we just moved,
    //   that is, the thing that we just pilfered, is still accessible on subsequent lines of code.
    //   But the whole point of move semantics was to apply it only where it "doesn't matter,"
    //   in the sense that the thing from which we move dies and goes away right after the moving.
    //   Hence the rule, "If it has a name, then it's an lvalue."

    // - So then what about the other part, "If it does not have a name, then it's an rvalue?"
    //   Looking at the goo example above, it is technically possible, though not very likely,
    //   that the expression goo() in the second line of the example refers to something
    //   that is still accessible after it has been moved from. But recall from the previous section:
    //   sometimes that's what we want! We want to be able to force move semantics on lvalues
    //   at our discretion, and it is precisely the rule, "If it does not have a name,
    //   then it's an rvalue" that allows us to achieve that in a controlled manner.
    //   That's how the function std::move works. Although it is still too early to show you
    //   the exact implementation, we just got a step closer to understanding std::move.
    //   It passes its argument right through by reference, doing nothing with it at all,
    //   and its result type is rvalue reference. So the expression

    // std::move(x)
    
    
    // - is declared as an rvalue reference and does not have a name.
    //   Hence, it is an rvalue. Thus, std::move "turns its argument into an rvalue
    //   even if it isn't," and it achieves that by "hiding the name."

    // - Here is an example that shows how important it is to be aware of the if-it-has-a-name rule.
    //   Suppose you have written a class Base, and you have implemented move semantics by
    //   overloading Base's copy constructor and assignment operator:
    



    class Base
    {
        public:
            
            Base(){}
            ~Base(){}
            Base(Base const & rhs){} // non-move semantic
            Base(Base&& rhs){}       // move semantic
    };

    // - Now you write a class Derived that is derived from Base.
    //   In order to assure that move semantics is applied to the Base part
    //   of your Derived objects, you must overload Derived's copy constructor
    //   and assignment operator as well. Let's look at the copy constructor.
    //   The copy assignment operator is handled analogously.
    //   The version for lvalues is straightforward:


    class Derived : public Base{
        public:
            Derived(){}
            ~Derived(){}

            Derived(Derived const & rhs) : Base(rhs)
            {
                // Derived-specific stuff
            }

            // - The version for rvalues has a big fat subtlety.
            //   Here's what someone who is not aware of the
            //   if-it-has-a-name rule might have done:
            
            //Derived(Derived&& rhs) : Base(rhs)      // -> Wrong!: rhs is an lvalue
            //{
            //    // Derived-specific stuff
            //}

            // - If we were to code it like that, the non-moving version
            //   of Base's copy constructor would be called, because rhs,
            //   having a name, is an lvalue. What we want to be called
            //   is Base's moving copy constructor,
            //   and the way to get that is to write

            Derived(Derived&& rhs) : Base(move(rhs)) // -> good, calls Base(Base&& rhs)
            {
                // Derived-specific stuff
            }

            Derived& operator =(Derived const& rhs){return *this;}
            Derived& operator = (Derived&& rhs){return *this;}
    };


    // - Move Semantics and Compiler Optimizations:

    // - Consider the following function definition:

    X foo()
    {
        X x;
        // perhaps do something to x

        return x;
    }

    // - Now suppose that as before, X is a class for which we have overloaded the copy constructor
    //   and copy assignment operator to implement move semantics.
    //   If you take the function definition above at face value,
    //   you may be tempted to say, wait a minute, there is a value copy happening here
    //   from x to the location of foo's return value.
    //   Let me make sure we're using move semantics instead:

   //X foo()
   //{
   //    X x;
   //    // perhaps do something to x
   //
   //    return move(x); // makint it wors!
   //}

    // - Unfortunately, that would make things worse rather than better.
    //   Any modern compiler will apply return value optimization
    //   to the original function definition. In other words, rather than
    //   constructing an X locally and then copying it out,
    //   the compiler would construct the X object directly
    //   at the location of foo's return value. Rather obviously,
    //   that's even better than move semantics.


    // - o as you can see, in order to really use rvalue references and move semantics in an optimal way,
    //   you need to fully understand and take into account today's compilers’ “special effects”
    //   such as return value optimization and copy elision.
    //   For a detailed discussion see Items 25 and 41 of Scott Meyers' book “Effective Modern C++”.
    //   It gets get pretty subtle, but hey, we chose C++ as our language of choice for a reason, right?
    //   We made our beds, so now let's lie in them.


    // - Perfect Forwarding: The Problem:

    // - The other problem besides move semantics that rvalue references were designed to solve is
    //   the perfect forwarding problem. Consider the following simple factory function:

    template<typename T, typename Arg>
    shared_ptr<T> factory(Arg arg)
    {
        return shared_ptr<T>(new T(arg));
    }

    // - Obviously, the intent here is to forward the argument arg from the factory function to T's constructor.
    //   Ideally, as far as arg is concerned, everything should behave just as if the factory function
    //   weren't there and the constructor were called directly in the client code: perfect forwarding.
    //   The code above fails miserably at that: it introduces an extra call by value, which is particularly bad
    //   if the constructor takes its argument by reference.

    // - The most common solution, chosen e.g. by boost::bind,
    //   is to let the outer function take the argument by reference:

    //template<typename T, typename Arg>
    //shared_ptr<T> factory(Arg& arg)
    //{
    //    return shared_ptr<T>(new T(arg));
    //}

    // - That's better, but not perfect.
    //   The problem is that now, the factory function
    //   cannot be called on rvalues:

    //factory<X>(goo());  // Error if hoo() returns by value
    //factory<X>(41);     // Error

    // - This can be fixed by providing an overload which takes its argument by const reference:

    //template<typename T, typename Arg>
    //shared_ptr<T> factory(Arg const& arg)
    //{
    //    return shared_ptr<T>(new T(arg));
    //}

    // - There are two problems with this approach. Firstly,
    //   if factory had not one, but several arguments,
    //   you would have to provide overloads for all combinations
    //   of non-const and const reference for the various arguments.
    //   Thus, the solution scales extremely poorly to functions with several arguments.

    // - Secondly, this kind of forwarding is less than perfect because it blocks out move semantics:
    //   the argument of the constructor of T in the body of factory is an lvalue.
    //   Therefore, move semantics can never happen even if it would without the wrapping function.

    // - It turns out that rvalue references can be used to solve both these problems.
    //   They make it possible to achieve truly perfect forwarding without the use of overloads.
    //   In order to understand how, we need to look at two more rules for rvalue references.

    // - Perfect Forwarding: The Solution:

    // - The first of the remaining two rules for rvalue references affects old-style lvalue references as well.
    //   Recall that in pre-11 C++, it was not allowed to take a reference to a reference:
    //   something like A& & would cause a compile error. C++11, by contrast,
    //   introduces the following reference collapsing rules1:

    //  * A& & becomes A&
    //  * A& && becomes A&
    //  * A&& & becomes A&
    //  * A&& && becomes A&&

    // - Secondly, there is a special template argument deduction rule for function templates
    //   that take an argument by rvalue reference to a template argument:

    // template<typename T>
    // void foo(T&&);

    // - Here, the following apply:
        
        // 1. When foo is called on an lvalue of type A, then T resolves to A&
        //    and hence, by the reference collapsing rules above,
        //    the argument type effectively becomes A&. 

        // 2. When foo is called on an rvalue of type A,
        //    then T resolves to A,
        //    and hence the argument type becomes A&&.

    // - Given these rules, we can now use rvalue references to solve the perfect forwarding problem
    //   as set forth in the previous section. Here's what the solution looks like:

    template<typename T, typename Arg>
    shared_ptr<T> factory(Arg&& arg)
    {
        return shared_ptr<T>( new T(forward<Arg>(arg)) );
    }

    // where std::forward is defined as follows:

    template<class S>
    S&& forward(typename remove_reference<S>::type& a) noexcept
    {
        return static_cast<S&&>(a);
    } 

    // - (Don't pay attention to the noexcept keyword for now.
    //   It lets the compiler know, for certain optimization purposes,
    //   that this function will never throw an exception.
    //   We'll come back to it in Section 9.) To see how the code above
    //   achieves perfect forwarding, we will discuss separately
    //   what happens when our factory function gets called on lvalues and rvalues.
    //   Let A and X be types.
    //   Suppose first that factory<A> is called on an lvalue of type X:

    // X x;
    // factory<A>(x);

    // - Then, by the special template deduction rule stated above,
    //   factory's template argument Arg resolves to X&. Therefore,
    //   the compiler will create the following instantiations of factory
    //   and std::forward:


   //shared_ptr<A> factory(X& && arg)
   //{
   //    return shared_ptr<A>(new A(forward<X&>(arg)));
   //}

   //X& && forward(remove_reference<X&>::type& a)    noexcept
   //{
   //    return static_cast<X& &&>(a);
   //}

    // - After evaluating the remove_reference and applying the reference collapsing rules, this becomes:


   //shared_ptr<A> factory(X& arg)
   //{
   //    return shared_ptr<A>(new forward<X&>(arg));
   //}

   //X& forward(X& a)
   //{
   //    return static_cast<X&>(a);
   //}

    // - This is certainly perfect forwarding for lvalues:
    //   the argument arg of the factory function gets passed on to
    //   A's constructor through two levels of indirection,
    //   both by old-fashioned lvalue reference.


    // - Next, suppose that factory<A> is called on an rvalue of type X:

    //X foo();
    //factory<A>(foo());

  //shared_ptr<A> factory(X&& arg)
  //{
  //    return shared_ptr<A>(new A(forward<X>(arg)));
  //}

  //X&& forward(X& a) noexcept
  //{
  //    return static_cast<X&&>(a);
  //}

    // - This is indeed perfect forwarding for rvalues:
    //   the argument of the factory function gets passed on to
    //   A's constructor through two levels of indirection, both by reference.
    //   Moreover, A's constructor sees as its argument an expression that is
    //   declared as an rvalue reference and does not have a name.
    //   By the no-name rule, such a thing is an rvalue.
    //   Therefore, A's constructor gets called on an rvalue.
    //   This means that the forwarding preserves any move semantics
    //   that would have taken place if the factory wrapper were not present.

    // - Section 9: see here: http://thbecker.net/articles/rvalue_references/section_09.html
    // - Section 10: see here: http://thbecker.net/articles/rvalue_references/section_10.html


*/



int factorials(int n)
{
    if(n <= 1)
        return 1;
    return n * factorials(n-1);
}













// <------------------------------------------------------------------------------> // 
//                               *** Main Function ***                              // 
// <------------------------------------------------------------------------------> // 

int main(int argc, char* argv[])
{
    cout<<"\tHello I am Ahmed\n\n\t!!! I'm learning a C++ Course from Arabic Competetive Programming Channel !!!\n";

/*

    // ---------------------------------
    // Video #16: Multidimentional array
    // ---------------------------------

    // 2D Array Visualizing:

    int val[][4] = {
        {8, 3, 99, 9},
        {2, 4, 98, 3},  // I can also remove the curly braces and the compiler would understand that the array is 2D
        {11, 5, 92, 6}
    };
    cout<<val[2][3]<<"\n";
    

    // 2D Array Accessing:

    for(int r = 0; r < 3; r++)
    {
        for(int c = 0; c < 4; c++)
            cout<< setw(4) << val[r][c];
        cout<<"\n";
    }

    val[0][0] += val[2][3];     // access

    cout<<val[0][0]<<"\n";  // output the result

    cin>> val[1][2];    // read

    cout<<val[1][2]<<"\n";  // output the input value

    // there are two concepts of accessing our 2D Arrays
    // 1. row major order iterator. means we go row by row
    // 2. column major order iterator. means we go column byb column

    //2D Array-as argument:

    int val2[3][4] = {{3, 5, 2, 6}, {5, 5, 4, 6}, {0, 2, 5, 1}}; // another way of visualizing 2D Array

    print2DArr(val2);

    // string 2D Array:

    string fullName[3] = {"Ahmed", "Zaky", "Mohamed"};  // standard string class
    cout<<fullName[0]<<" "<<fullName[1]<<" "<<fullName[2]<<"\n";    // outpu: Ahmed Zaky Mohamed

    cin>>fullName[1];   // read

    char name[3][10] = {
        "ali",
        {'a', 'n', 'a', 's'},
        "omar"
    };

    cout<<name[1]<<"\n";    // output: anas

    cin>>name[2];   // read

    // Flatten 2D <-> 1D

    int arr2D[ROWS][COLS] = {
        {2, 5, 2, 7},
        {4, 3, 7, 2},
        {2, 6, 2, 9}
    };

    int arr1D[ROWS*COLS] = {2, 5, 2, 7, 4, 3, 7, 2, 2, 6, 2, 9}; // we changed our 2D array into one line 1D array

    int r = 1, c = 3;
    cout<<arr2D[r][c]<<"\n";    // output: 6

    // try to find the same value in the 1D array
    int idx = r * COLS + c; // r * COLS part indicate how rows we skip and + c part indicate the pos of the value in its row
    cout<<idx<<" "<<arr1D[idx]<<"\n"; // output: 7 6

    // to find the value of 1D array into a 2D array
    int rr = idx / COLS, cc = idx % COLS; // to understand it better go to the video time(12:00)
    cout<<rr<<" "<<cc<<"\n";    // output: 1 3
    

    // 2D Array Storage Layout:
    // Rows are laid out sequentially in memory see video time(12:47)

    // Locality of reference:
    // row major order is faster than column major order because cashing issue of the CPU more details see video time(14:00)

    // Homework:
    // How to flatten (map) 3D/4D position to 1D

    // Declare 3D array
    const int S1_3D = 3, S2_3D = 3, S3_3D = 3;
    int arr3D[S1_3D][S2_3D][S3_3D] = {
        { 
            {3, 6, 2}, 
            {6, 2, 6}, 
            {8, 7, 2} 
        },
        {
            {7, 1, 0},
            {8, 3, 9},
            {1, 9, 4} 
        },
        {
            {8, 8, 9},
            {9, 2, 1},
            {3, 9, 7} 
        }
    };
    
    const int DIM3 = 3;
    int arrDim3[DIM3] = {S1_3D, S2_3D, S3_3D};
    
    int s1_3D = 2, s2_3D = 1, s3_3D = 1;
    int arrLoc3[DIM3] = {s1_3D, s2_3D, s3_3D};
    cout<<arr3D[s1_3D][s2_3D][s3_3D]<<"\n";
    
    int idx3D = DimArrToflatIdx(arrDim3,arrLoc3,DIM3); 
    
    if(idx3D >= 0)
        cout<<idx3D<<"\n";
    else
    {   
        cout<<"Something wrong with your array arguments!!!";
        assert(false);
    }
    
    flatToDimArrIdx(arrDim3, arrLoc3, DIM3, idx3D);

    
    //---------------------------------------------
    // Declare 4D Array
    const int S1_4D = 3, S2_4D = 3, S3_4D = 3, S4_4D = 2;
    int arr4D[S1_4D][S2_4D][S3_4D][S4_4D] = {
        {
            { 
                {8, 9},
                {1, 9},
                {3, 8} 
            },
            { 
                {9, 0},
                {1, 3},
                {3, 7}
            },
            { 
                {3, 5},
                {1, 8},
                {7, 9}
            }
        }, 
        {
            { 
                {9, 3},
                {1, 5}, 
                {3, 2} 
            },
            { 
                {5, 2},
                {5, 8},
                {3, 1} 
            },
            {
                {5, 7},
                {2, 8},
                {6, 2}
            }
        },
        {
            { 
                {3, 9},
                {1, 3},
                {8, 4}
            },
            {
                {2, 8},
                {3, 1},
                {2, 7} 
            },
            {
                {7, 8},
                {0, 3},
                {8, 5} 
            }
        }
    };

    
    const int DIM4 = 4;
    int arrDim4[DIM4] = {S1_4D, S2_4D, S3_4D, S4_4D};
    
    int s1_4D = 2, s2_4D = 1, s3_4D = 2, s4_4D = 1;
    int arrLoc4[DIM4] = {s1_4D, s2_4D, s3_4D, s4_4D};
    cout<<arr4D[s1_4D][s2_4D][s3_4D][s4_4D]<<"\n";
    
    int idx4D = DimArrToflatIdx(arrDim4,arrLoc4,DIM4); 
    
    if(idx4D >= 0)
        cout<<idx4D<<"\n";
    else
    {   
        cout<<"Something wrong with your array arguments!!!";
        assert(false);
    }
    
    flatToDimArrIdx(arrDim4, arrLoc4, DIM4, idx4D);

    // Homework:
    // 2nd Max 2D Array

    int arr2D[ROWZ][COLZ]; // we used our global variable for our 2D array

    input2DArr(arr2D);
    
    cout<<"\n";
    
    cout<<"The 2nd Max in our array is: "<<find2MaxArr(arr2D)<<"\n";
 
    // ---------------------------------------------
    // Video #17: Multidimensional Arrays - Practice
    // ---------------------------------------------

    int arr2D_1[ROWS][COLS] = {1, 2, 3, 4};
    int arr2D_2[ROWS][COLS] = {{4}, {8}};
    int arr2D_3[ROWS][COLS];

    print2DArr(arr2D_1);
    cout<<"\n + \n";
    print2DArr(arr2D_2);
    cout<<"\n = \n";
    add2DArr(arr2D_1, arr2D_2, arr2D_3);
    print2DArr(arr2D_3);
     

    int arr2D_1[ROWS1][COLS1] = {
        {4, 6, 2},
        {1, 9, 3},
        {6, 7, 3},
        {9, 8, 2}
    };

    int arr2D_2[ROWS2][COLS2] = {
        {1, 8},
        {5, 2},
        {3, 3}
    };

    int arr2D_3[ROWS1][COLS2] = {};

    mul2DArr(arr2D_1,arr2D_2, arr2D_3);

    print2DArr(arr2D_3);
    
   
   
    // Magic square:
    int square[N][N] = {
        {8, 1, 6},
        {3, 5, 7},
        {4, 9, 2}
    };

    if(validate(square)) cout<<"valid\n";
    else cout<<"Not valid\n";
   
    // try not valid by adding one to the first element in the first row
    square[0][0]++;

    if(validate(square)) cout<<"valid\n";
    else cout<<"Not valid\n";

    //Spiral Matrix Order:

    int arr[N][N] = {
        {1,  2,  3,  4,  5 },
        {6,  7,  8,  9,  10},
        {11, 12, 13, 14, 15},
        {16, 17, 18, 19, 20},
        {21, 22, 23, 24, 25}
    };

    spiral(arr, 1);
    spiral(arr, 2);
    spiral(arr, 3);
    spiral(arr, 4);
    spiral(arr, 5);



    // ------------------------
    // Video #18: Structures 1
    // ------------------------

    // Structures: Pointers

    // Declare a struct pointer
    Employee* pEmp = NULL;
    pEmp = new Employee;

    // access using arrow operator NOT Dot operator
    pEmp->name = "Ahmed";
    pEmp->salary = 100;
    pEmp->position = 1;

    delete pEmp;
    
    // Structures: Sorting

    Employee emps[5] = {
        {"Ahmed", 100, 1},
        {"Samer", 150, 3},
        {"Shady", 100, 2},
        {"Islam", 100, 4},
        {"Islam", 100, 3}
    };

    // cmp : is a compare function.
    //       here we will compare in a systematic way
    //       first compare with salary from biggest to smallest but if two salaries ties then
    //       second compare with name Alphabitic (a -> z) but if two names ties then
    //       third compare with position from (1 -> n=4)
    sort(emps, emps+5, cmp);

    // print out the emps array after sorting
    for(int i = 0; i < 5; i++){
        Employee &emp = emps[i];
        cout<<emp.salary<<" "<<emp.name<<" "<<emp.position;
    }

    // Sturctures: Offtopic: pointer to function

    functionPtr = &sum; // address of sum function
    int val = (*functionPtr)(5,6);

    // another way: generic way of computing send the 2 numbers and the operation (function)
    val = compute(2,5, mul);

    // array of pointers to functions
    const int N = 2;
    int (*ptrFun[2])(int, int); // declare array of pointers to functions of two Param. 

    // initializing the array elements
    ptrFun[0] = sum;
    ptrFun[1] = mul;

    val = (*ptrFun[0])(3,6);
    val = compute(3, 6, ptrFun[1]);

    // Data Structure alignment
    // for Optamization purposes compiler adds hidden elements
    // to know more about the topic search for this titel "Data Structure alignment"
    // a smaple example to show how it differs

    struct A{
        char c;
        char d;
        int i;
    };
    
    // Note: the order is different
    struct B{
        char c;
        int i;
        char d;
    };

    cout<< sizeof(A) << "\n";
    cout<< sizeof(B) << "\n";
    
    // Structures: Unions

    // used to set more than datatype to one variable and only one type is available

    EmployeeSalary salary;
    
    salary.iVal = 50;
    cout<< salary.iVal<<'\n'; // use ONLT intiger version

    salary.dVal = 15.5;
    cout<< salary.dVal<<'\n'; // use ONLT double version
    cout<< salary.iVal<<'\n'; // wrong: it will output 0 because you are using dVal know so you are not allowed to use any other dataypes other than dVal;


    // ------------------------
    // Video #19: Structures 2
    // ------------------------

    // Structures: Methods

    Employee emp;
    cout<<emp.salary<<'\n';

    emp.setSalary(100);
    cout<<emp.salary<<'\n';

    emp.addSalary(50);
    cout<<emp.salary;


    // Structures: Constractor and Destractor

    print(); // print a normal function
    Employee emp(2000, "Ahmed");
    emp.print();
    cout<<"See you later\n";

    // Structures: many Constractors

    Employee emp1(1000);
    emp1.print();
    cout<<'\n';

    Employee emp2(1000, "Ali");
    emp2.print();
    cout<<'\n';

    Employee emp3("Ali");
    emp3.print();
    cout<<'\n';

    // Structures: Method Overloading
    
    Employee empSpecial(10000);
    empSpecial.print();
    empSpecial.print(5000);

    // Structures: Public and Private sections

    //cout<< empSpecial.name_length << '\n'; // Error ... Outsiders can't see
    //cout<< empSpecial.sayCreating()<< '\n'; // Error ... Outsiders can't see

    // Structures: Operator overloaded methods (==, <, >, +, ...)

    Employee emps1[5] = {
        {10000,"Ahmed"},
        {5000, "Omar"},
        {50000, "Samir"},
        {50000, "Ali"},
        {5000, "Omar"}
    };

    bool Comparison1 = emps1[0] < emps1[4];
    bool Comparison2 = emps1[3] == emps1[0];
    //bool comaprison3 = emps1[2] > emps1[3]; // Error: > operator is not defined in your struct

    sort(emps1, emps1+5); // we can now deal with it as normal int datatypes
    
    // Structures: Functor

    // based on the previous defined Employee array
    sort(emps1, emps1+5, sortNameSalary());
    sort(emps1, emps1+5, sortSalaryName());

    bool result = sortSalaryName()(emps1[0], emps1[4]);


   // --------------
   // Video #20: STL
   // --------------

    // Macros:

    // out source:
    // ----------

    // #1: Preprocessor Directives (cpluscplus)
    // ----------------------------------------

        // - #1: Function Macros:
    
    int x = 5, y;

    y = getmax(x, 7);

    cout<<"Get Max of ("<<x<<", 7) = "<<y<<'\n';

    cout<<"Get Max of ("<<x<<", 2) = "<<getmax(x, 2)<<'\n';
    
        // - #1: spcial operator # ( replaced by a string literal that contains the argument passed)
    
    cout<<str(text)<<'\n'; // result is same as: cout<< "text";

        // - #1: special operator ## (concatenates 2 arguments leaving no blank spaces between them)

    cout<<'\n';
    glue(c,out) << str(text);

        // -#1: Predefined macro names
    
    cout<<'\n';
    cout<< "This is the line Number: " << __LINE__
        << " of file " << __FILE__<< ". \n"
        << "Its compilation began " << __DATE__
        << " at " << __TIME__<<".\n";
        //<< " The compiler gives a __cpluscpluc value of "<< __cpluscplus; // Does not work


    // Vector Basic test:
    // -----------------


    vi v(10);       // initialize 10 elements with zero
    vi v1(10,5);    // initialize 10 elements with 5

    // What about vector from array
    const int SIZE = 5;
    int array[SIZE] = {5, 2, 4, 1, 3};
    vi v2(array, array+SIZE);

    printVec(v2, "v2: ");

    // back and front are by reference, I can use them to add values to vector like: v2.front() = 1;
    cout<<"Front: "<<v2.front()<<" last element: "<<v2.back()<<'\n';

    swap(v2.front(), v2.back());
    printVec(v2, "swap: ");

    // vector from vector
    vi v3(v1.begin(), v1.end());
    printVec(v3, "v3 is from v1: ");

    v.resize(10); // better use size when declaring vectors if you know your size

    cout<<"\niterating over v2 (array manner): ";
    // what about iterating on vector, Either as in array or using iterators
    for(int i = 0; i < (int)v2.size(); ++i) // watch out: v.size() return unsigned. 
        cout<<v2[i]<<" ";                   // return v.size()-1 may cause problem. cast to int.
    cout<<'\n';

    // Another way
    cout<<"\nIterating over v2 (iterator manner):";
    vi::iterator it = v2.begin();
    while(it != v2.end())
    {
        cout<<(*it)<<" ";
        it++;
    }
    cout<<'\n';

    // sorting the vector
    sort(v2.begin(), v2.end()); // What if sorting all elements except 1st two elements: sort(v2.begin()+2, v2.end());

    printVec(v2, "sorted: ");

    // Sorting decreasing
    sort(v2.begin(), v2.end(), greater<int>()); // way #1: let greater 1st
    sort(v2.rbegin(), v2.rend());               // way #2: using reverse end or begin (reverse pointer)

    printVec(v2, "sorted greatest first: ");

    // Creating 2D vector of Boolean
    vector< vector<bool> > Vec2Dbool(10,(vector<bool>(20, true))); // create array 10 * 20 filled with true

    // comparing 2 vectors
    if(v1 < v2) // same <= , >=, ==, > 
        cout<<"\nv1 smaller than v2\n";
    else
        cout<<"\nv2 smaller than v1\n";

    // removing the 2nd element
    v2.erase(v2.begin()+1);     // O(n)
    printVec(v2, "delete 2nd element: ");

    // inserting 4th element
    v2.insert(v2.begin()+3, 14);
    printVec(v2, "insert 4th element: ");

    // push back in vector
    v2.push_back(20);
    printVec(v2, "add 20 in back: ");       // O(n)

    // finding element in vector
    if (find(all(v2), 14) != v2.end()) // find is O(n)
        cout<<"14 in v2\n";

    if (find(all(v2), 9) == v2.end())
        cout<<"9 is not in v2\n";

    // erase element with find
    v2.erase(find(all(v2), 14));
    printVec(v2, "remove 14 from v2: ");

    // reverse vector
    reverse(all(v2));
    printVec(v2, "reverse v2: ");

    // random shuffle v2
    random_shuffle(all(v2));
    printVec(v2, "shuffle randomly array elements: ");

    // remove last elemnt
    v2.pop_back();      // O(1);
    printVec(v2, "Last removed: ");

    // clear v2
    v2.clear();
    printVec(v2, "Clear v2: ");


    // Vector manipulation Section:
    // ---------------------------

    v2 = {2, 4, 1, 2, 5};

    // Distance between 2 iteratros = Equal to subtracting its iterators: e.g., it2 - it1 (where it2 is bigger)
    cout<<"Distance: "<<distance(v2.begin(), v2.begin()+3)<<'\n'; // = 3 v2.begin() is bigger than v2.begin()+3
    cout<<"Distance: "<<distance(v2.begin()+2, v2.begin())<<'\n'; // = -2

    // copy
    vector<int> v4 = v2;

    // replace
    printVec(v4, "Before replace: ");
    replace(all(v4), 2, 3);
    printVec(v4, "After replace: ");
    
    // add to front
    v3.front() = 3;
    *(v3.begin()+4) = 1;
    printVec(v3, "add to front: ");

    // search for 3 consecutive elements with value 5
    vector<int>::iterator _it;
    _it = search_n(all(v3), 3, 5);
    if(it != v3.end())
        cout<<"\n3 consecutive 5s from index: "<<_it-v3.begin()<<'\n';
    
    v1.clear();
    
    v1.push_back(1);
    v1.push_back(3);
    v2.insert(v2.begin()+3, 3);
    printVec(v1, "Vector 1: ");
    printVec(v2, "vector 2: ");

    // search subvectors: a vector in a vector
    _it = search(all(v2), all(v1));
    if( _it != v1.end())
        cout<<"\nsub-vector from index: "<<_it-v2.begin()<<'\n'; // '-' symbol is simply a minus to not be confused
    
    // Searching alogrithms based on sorting vectors:
    // unique/binary_search/lower_bound/upper_bound 
    // for lower_bound and upper_bound if we wanna use it to search elements than the vector should be sorted

    sort(all(v2));
    // binary_search
    bool ans = binary_search(all(v2), 4);
    cout<< "\nSearching for 4: "<<ans<<'\n';

    // lower_bound: Find the first element greater than or equal a given value
    random_shuffle(all(v2)); // only if we wanna use its raw simple purpose
    printVec(v2, "\nVector2 is: ");
    
    it = lower_bound(all(v2), 3);
    if(it != v2.end())
        cout<<"\nFirst element >= 3: "<<*it<<'\n';

    // upper_bound: Find the first element greater than a given value
    it = upper_bound(all(v2), 3);
    if(it != v2.end())
        cout<<"\nFirst element > 3: "<<*it<<'\n';
    
    // unique: return iterator to last element of unique sorted array 
    sort(all(v2));
    v2.resize(unique( all(v2) ) - v2.begin());

    // set_intersection()
    v.clear();
    set_intersection(all(v1), all(v2), back_inserter(v));
    printVec(v, "Set Intersection (v1, v2): ");

    // set_difference()
    v.clear();
    set_difference(all(v2), all(v1), back_inserter(v));
    printVec(v, "Set Difference (v1, v2): ");

    // a nice App. for set Difference: searching a subvector but its elements are shuffled in the main vector
    // if I differ.() the subvector form the main vector the result will be empty because its contained in the main vector 
    // set_union()
    v.clear();
    set_union(all(v1), all(v2), back_inserter(v));
    printVec(v, "Set Union (v1, v2): ");

    // max_element() && min_element()
    int max = *(max_element(all(v2)));
    int min = *(min_element(all(v2)));

    cout<<"\nmax element = "<<max<<"\tmin element = "<<min<<'\n';

    printVec(v1, "V1: ");
    printVec(v2, "v2: ");
    
    swap_ranges(v2.end()-3, v2.end(), v1.begin() ); // if I took a range which is bigger than the other vector it will replace the range
    printVec(v2, "2 elements swap v2: ");        // with the size of the other vector and do the swap operation
    printVec(v1, "2 elements swap v1: ");

    // Accumulate:
    // ----------
    
    // sum:
    int vecSum = accumulate(all(v2), 0);
    
    // mul:
    int vecMul = accumulate(all(v2), 1, multiplies<int>());
    
    // inner_product(): SumOfProduct and ProductOfSum
    // ----------------------------------------------

    // sum of product
    int sumOfProduct1 = inner_product(all(v2), v2.begin(), 0); 
    int sumOfProduct2 = inner_product(all(v2), v2.begin(), 0, plus<int>(), multiplies<int>()); // same as above

    // product of sum
    int productOfSum = inner_product(all(v2), v2.begin(),1 , multiplies<int>(), plus<int>());
    
    cout<<"\nvecSum = "<<vecSum<<'\n'
        <<"\nvecMul = "<<vecMul<<'\n'
        <<"\nsumOfProduct = #1: "<<sumOfProduct1<<" #2: "<<sumOfProduct2<<'\n'
        <<"\nProductOfSum = "<<productOfSum<<'\n';


    // partial sum or sub:
    // --------------------
    
    // partial sum
    v1.clear();
    partial_sum(all(v2), back_inserter(v1));
    printVec(v1, "Partial Sum: ");

    // partial sub
    v1.clear();
    partial_sum(all(v2), back_inserter(v1), minus<int>());
    printVec(v1, "Partial Sub:");

    // writing to a stream (ostringstream())
    ostringstream oss;
    partial_sum(all(v2), ostream_iterator<int>(oss, " "));           // here we can not find ostream_iterator 
    cout<<"Accumulative array in a string: "<<oss.str()<<'\n';       // instead we have ostreambuf_iterator which 
                                                                     // does not do the operation we want
    
    
    // Adjacent difference:
    v1.resize(v2.size());
    adjacent_difference(all(v2), v1.begin());
    printVec(v1, "adjacent difference: ");
    
    // Adjacent sum
    adjacent_difference(all(v2), v1.begin(), plus <int>());
    printVec(v1, "adjacent Sum: ");

    // Adjacent find
    v2.erase(v2.begin()+3);
    v2.insert(v2.begin()+3, 5);

    it = adjacent_find(all(v2), isEqual);
    if(it != v2.end())
        cout<<"The 2 adjacent values are: "<< *it <<" , "<< *(it+1) <<'\n';

    printVec(v2, "v2: ");
    cout<<"Count of 1: "<<count(all(v2), 1)<<'\n';
    cout<<"Count of Odd: "<<count_if(all(v2), isOdd)<<'\n';

    // remove all 1 value elements from v2 using v2.erase(remove(),)
    v2.erase(remove(all(v2), 1), v2.end());
    printVec(v2, "remove 1s: ");

    // rotate a vector
    rotate(v2.begin(), v2.begin()+1, v2.end());
    printVec(v2, "rotate 1 element right direction: ");

    // listing permutations using next_permutation (! You must sort input first !)
    v2.insert(v2.begin()+2, 6);
    sort( all(v2) );
    do{
        printVec(v2, "perm: ");
    }while(next_permutation( all(v2) )); // permutation on any given iterator with compare function

    // queue and stack operations (Plz look at Video (19:20))

    // Pairs, Sets, Maps - Basic Test:
    // ------------------------------

    // pair

    // declare
    pair<int, char> p1 = make_pair(1, 'a');                            
    pair<string, pair<int, char> > p2 = make_pair("mostafa", p1); // pairs in pairs

    // print
    cout<<p2.first<<'\n';
    cout<<p2.second.first<<'\n';
    cout<<p2.second.second<<'\n';

    // Rule: any algorithm / datasturcture that need to compare data, e.g., sort
    // it will use basic datatypes to compare (e.g., 3 < 5), or you provide a comperator / compare function

    // vector of pairs
    vector< pair<int, int> > vp;
    vp.push_back( make_pair(1, 2));
    vp.push_back( make_pair(3, 3));
    vp.push_back( make_pair(5, 4));
    
    sort(all(vp), sortPairCmp);


    // set

    // declare and insert
    set<string> strSet;
    strSet.insert("Ahmed");
    strSet.insert("Zaky");

    // 3 ways to search a specific element in set:
    // ------------------------------------------

    // find a value using count()
    if(strSet.count("mostafa"))
        cout<<"Mostafa is in set\n";
    
    // find a value using lower_bound() // if you know there is no elements smaller bigger than "mostafa"
    set<string>::iterator strIt = strSet.lower_bound("mostafa");
    
    // find a value using find()
    strIt = strSet.find("mostafa");

    // modify is not allowed
    // replace(all(strSet>, "mostafa", "Ahmed"); // Wrong !!!, do not try intermediate playing, because the are based on keys for sorting

    // map

    // declare
    map<string, int> mp;

    // insert
    mp["Ahmed"] = 10;
    mp["Zaky"] = 20; 

    // iterate (map & set) same like vector
    // Way #2 converting map to vector of pair (key, value)
    vector< pair<string, int> > mptov(all(mp));
    for(int i = 0; i  < (int)mptov.size(); ++i)
        cout<<mptov[i].first<<" "<<mptov[i].second<<'\n';

    // Note: Map and set are O(log(n))

    // multiset & multimap
    // see links above

    // String Basic Test:
    // -----------------

    // declare & initialize
    string _str("initialize");
    string text = "hi abc abc abc abc";

    // customize print 
    cout<<text.substr(3)<<'\n';
    cout<<text.substr(3,7)<<'\n'; // @param 1: position, @param 2: length

    // using find() for value which is not in text
    cout<<"Ahmed at: "<<text.find("ahmed")<<'\n';
    cout<<"Ahmed at: "<<(int)text.find("ahmed")<<'\n'; // cast int to get -1 in case not found

    cout<<"abc at: "<<(int)text.find("abc", 5)<<'\n';    // start finding from 6th character

    // |-------------------------|
    // |!!! should be reviewd !!!|
    // |-------------------------|
    // Functions that searches for a CHARACTER from a given string
    // I did undrestood this from this reference:
    // Beginning c++ (e-book)
    // see here: https://books.google.com.eg/books?id=oFAnCgAAQBAJ&pg=PA201&lpg=PA201&dq=text.find_first_of&source=bl&ots=znAocO7I3F&sig=ACfU3U3xqGJEhk7k5gmdcgz5fZgxGhQgwg&hl=ar&sa=X&ved=2ahUKEwjLg_K6j6jmAhXDRBUIHVQ5BqsQ6AEwAnoECAcQBA#v=onepage&q=text.find_first_of&f=false
    cout<<text.find_first_of("cab")         <<'\n';
    cout<<text.find_first_of("cab", 3)      <<'\n'; // string of chars
    cout<<text.find_first_of("cab", 3, 6)   <<'\n'; // string of chars and start position 
    cout<<text.find_last_of("aic")          <<'\n'; // string of chars and start position and length
    cout<<text.find_first_not_of("aic")     <<'\n';
    cout<<text.find_last_not_of("aic")      <<'\n';

    // replace text and chars with ranges
    text.replace(4,3,"x");

    // convert char array into string
    char arrCh[5] = {'a', 'h', 'm', 'e', 'd'};
    string s = arrCh;

    // convert string to char array
    const char* s_to_arrCh = s.c_str();

    // erase char or range of text
    cout<<"\nstr before erase char pos(4): ";
    text.erase(4);
    cout<<"\nstr before erase range from 4 to 6: ";
    text.erase(4,6);
    
    // string stream operations:
    // ------------------------

    // it manipulate same as cin and cout but on strings

    vector<int> _v;
    _v.push_back(30);
    _v.push_back(10);
    _v.push_back(7);

    // convert vector into stream (string)
    ostringstream _oss;
    copy (all(v), ostream_iterator<int>(_oss, ",")); 

    // input from stream to int
    istringstream iss("10 20 30");
    int Nr;
    while(iss>>Nr)
        cout<<"Read Nr. "<<Nr<<'\n';

    // convert function (int -> string)
    cout<<toStr(100)<<'\n';

    // valarray Basic Test:
    // -------------------

    int val[] = {1, -2, 3, -4, -5};

    valarray<int> v1(val, 5);

    // absulote v1 to v2
    valarray<int> v2 = abs(v1);

    // sum vector
    cout<<v2.sum()<<'\n';

    valarray  v3 = 2 * (v1 + v2);

    printValArray(v3, "v3: ");

    valarray<bool> v4 = (v1 == v2);

    cout<<"min = "<<v3.min()<<" max = "<<v3.max()<<'\n';

    double darr[] = {1, 2, 3, 4, 0};
    valarray<double> v5(darr, 5);

    valarray<double> v6 = 2.0 * ( v5 + (3 * v5) ); // 2.0 NOT 2 (may cause RTE) | not MIXED variables (i.e., int & double)

    cout<<pow(2.0, v5).sum()<<'\n';
    cout<<pow(v5, 2.0).sum()<<'\n';
    cout<<pow(2.5 * v5, v6).sum()<<'\n';
    //cout<<pow(v5, (2.5 * v6)).sum()<<'\n'; // compile error the power should be one value not expression

    // Valarray slice selector
    see here: https://www.geeksforgeeks.org/stdslice-valarray-slice-selector/



    // --------------------
    // Video #21: Recursion 
    // --------------------

    // elaborate how Recursion is done:
    // -------------------------------

    // Factorial:

    // note it only works the same if the input Nr. is 4
    cout<<"a4: "<<a4(4)<<'\n';
    cout<<"a4 Recursive: "<<a4_Rec(4)<<'\n';

    // Triangle:
    Triangle(4);
    cout<<'\n';
    rTriangle(4);

    // 3n+1 series
    cout<<_3n_plus_1(22)<<'\n';

    // merge sort
    vector<int> v(8);
    v = {3, 2, 5, 1, 7, 8, 3, 6};

    // print before sort
    cout<<"\nBefore Sort: ";    printVec(v);    cout<<'\n';
    
    mergesort(v, 0, v.size()-1);

    // print after Sort
    cout<<"\nAfter Sort:  ";    printVec(v);    cout<<'\n';
    
    // print Number|Bit
    cout<<"Print Recursion Nr. of 214: ";
    printNumber(214);   cout<<'\n';

    cout<<"Print Recursion bits of 214: ";
    printBit(214);      cout<<'\n';


    // max path finder
    
    // let n = 3
    n = 3;

    inputArr();
    printArr();
    cout<<"\nThe Max path finder in Grid: "<<maxPathSum(0,0)<<'\n';
    cout<<"\nThe Min path finder in Grid: "<<minPathSum(0,0)<<'\n';
    inputArrMaze();
    printArrMaze();
    
    cout<<'\n';

    // Find End in a maze
    if(findEnd)
        cout<<"\nThe End is Found\n";
    else
        cout<<"\nThe End is Not Found.\n";

    // Flood fill

    inputGrid();
    printGrid();
    countReachableCells(0,0);
    cout<<"\nNumber or Reachable cells start(0,0): "<<::count;
    cout<<"\nNumber of Connected Components: "<<countComponents();

    cout<<'\n';
    cout<<"\nBinary Sequence of Len = 3: ";
    GenBinSeq(3);

    cout<<"\nTernary Sequence of Len = 3: ";
    GenTernSeq(3);
    
    cout<<'\n';

    // print all possible permutations for a given number
    const int n = 4;
    int cur[n];
    int vis[n];
    perm(0,n,vis,cur);

    // print n choose M combinations
    int arr[] = {1, 2, 3, 4, 5};    
    int M = 3;  
    int n = sizeof(arr)/sizeof(arr[0]);  
    printComb(arr, n, M);    

    // Recursion Principles:

    //stackTest1();
    //stackTest2();
    //stackTest4();
    //stackTest3();
    //stackTest5();
    //stackTest6();
    //stackTest7();
    //stackTest8();
    //stackTest9(arr);

    generateTernary_MyStack(3);

    // Fibonacci Without Dynamic Programming
    cout<<Fib(50)<<'\n';

    // Fibonacci with Dynamic Programming
    memset(savedAnswer, -1, sizeof(savedAnswer));
    cout<<_Fib(50)<<'\n';


        // -----------------
        // Video #22: (Bits)
        // -----------------

    // try to use & operator
    int X = 7;
    int Y = 1;
    cout<<"here is the C++ X & Y: "<<(X & 1)<<'\n'; // you should put the operation between two parentheses
    printf("here is the C X & Y: %d\n", X & 1 );

    cout<<'\n';

    // print a number using bits operators
    unsigned int n = 123;
    int len = 0;

    //len = to_string(n).length();
    len = countBits(n);
    cout<<"Length = "<<len<<'\n';
    printNumber(n, len);    // The output should be arranged Up-Down -> Left-Right

    cout<<'\n';

    // Print a number using bits operators (Iteratively)
    printNumberIter(n, len);

    cout<<'\n';

    // Count Number of Bits (only the 1's)
    int  mask = 110;
    cout<<"Numbers of 1's in "<<mask<<" is : "<<countNumBits_1s(mask)<<'\n';

    cout<<'\n';

    // Rotate Number by Nr. of steps
    int rNr = 20;
    len = countBits(rNr);
    cout<<"Length = "<<len<<'\n';
    cout<<"Rotate Then Nr. ( "<<rNr<<" ) 3 steps = "<<rotateBits(rNr, len, 3)<<'\n';

    cout<<'\n';

    // print Subset iteratively instead of recursively
    printSubset(3);

    cout<<'\n';

    // Same as above but in a reverse order
    printSubsetR(3);

    cout<<'\n';

    // Print Gray code (ACP_C++ Method 1)
    PrintAllSubsetsGray(4);

    cout<<'\n';

    // Print Gray code (GeeksforGeeks Method 2)
    GenerateGrayArr(4);

    cout<<'\n';

    // print Gray code (Codespeedy Method 3)
    ConvertBinToGray(110110);

    cout<<'\n';

    // print all subsets of length (N) iteratively in reverse way
    printAllSubsetsAllOnes(4);

    cout<<'\n';

    getAllSubMasks(31); // Which represent : (11111)2

    cout<<'\n';

    getAllSubMasksR(31); 

    cout<<'\n';
    
    int A[10] = {2, 4, 6, 11, 8, 9, 3, 7, 0, 5};
    int B[11] = {0, 9, 3, 2, 28, 14, 5, 7, 6, 1, 10};
    intersection(A,10,B,11);

    cout<<'\n';
    
    int position[5];
    for(int i = 0; i < 5; i+=2)
        setVisited(i);
    
    for(int i = 0; i < 5; i++)
    {
        if(isVisited(i))
            cout<<isVisited(i)<<" is Visited."<<'\n';
        else
            cout<<isVisited(i)<<" not Visited."<<'\n';
    }

    cout<<'\n';

    // STL <bitset> library:
    STL();
    
    cout<<'\n';

    // Bits more Examples:
    // ------------------

    // compute XOR from 1 to n
    
    int _n = 5; 
    cout << computeXOR(n);

    cout<<'\n';

    // Equal Sum XOR

    _n = 12; 
    cout << "Nr of integers in range 1 -> n satisfies (n + i == n ^ i) are: "<<countValuesEff(n)<<'\n';

    cout<<'\n';

    // find if a Number is power of 2

    isPowerOfTwo(31)? cout<<"Yes"<<'\n' : cout<<"No"<<'\n';
    isPowerOfTwo(64)? cout<<"Yes"<<'\n' : cout<<"No"<<'\n';

    cout<<'\n';

    // find XOR of XOR's of all subsets

    int Set[] = {1, 2, 3}; 
    int sz = sizeof(Set)/sizeof(Set[0]); 
    cout << "XOR of XOR's of all subsets is "
         << findXORAllSubsets(Set, sz); 

    cout<<'\n';

    int x = 321;

    // Number of leading zeroes: __builtin_clz(x)
    cout<<"Number of leading zeros: "<<__builtin_clz(x)<<'\n';
    // Number of trailing zeroes : __builtin_ctz(x)
    cout<<"Number of trailing zeros: "<<__builtin_ctz(x)<<'\n';
    // Number of 1-bits: __builtin_popcount(x)
    cout<<"Number of 1-bits: "<<__builtin_popcount(x)<<'\n'; 

    cout<<'\n';

    // Convert binary code directly into an integer in C++.
    int binToInt = 0b011;
    cout<<"Bint to Int directly: (0b011)2 = "<<binToInt<<'\n';

    cout<<'\n';

    // swap 2 numbers without temp variable
    
    int a = 10, b = 5;
    swap_sum(a, b);
    cout << "After Swapping: x =" << a << ", y=" << b <<'\n';

    cout<<'\n';

    // flip a number in a simple way
    cout<<"Flip Nr. 23 is: "<<flipNumber(23)<<'\n';

    cout<<'\n';

    // Most Significant Bit (MSB)

    int n_msb = 273; 
    cout << "Most Significant Bit of Nr. "<< n_msb <<" is = "<< getMSB(n_msb)<<'\n'; 
    
    cout<<'\n';

    // check Alternate pattern
    
    int altPattern = 10; 
    cout<<"Is "<<altPattern<<" an Alternate Pattern? \n";
    if (findPattern(altPattern)) 
        cout << "Yes"; 
    else
        cout << "No";
    
    cout<<'\n';

    // Lowest set bit

    int LsetBit = 45;
    cout<<"The lowest set bit of Nr. "<< LsetBit <<" is "<<lowest_set_bit(LsetBit)<<'\n';

    cout<<'\n';

        //-----------------------
        // Video #23: Pointers 1:
        //-----------------------

    // - Hint:
    //   ----
    //   From (00:00) to (17:45) you should look it by your self 
    //   I did not write the examples for this period of time here


    // Start from (17:45) (Arithmatic pointers)


    // print array using pointer:
    int arr[5] =  {3, 5, 1, 9, 2};
    int *ptr = arr;

    while (ptr != arr+5)        // we can compare
    {
        cout<<*ptr++<<" ";      // print and move to next
    }

    // const and pointers:
    int val = 20;

    int *ptr1 = new int;
    *ptr1 = val;                        // Can change data, it is not constant
    ptr1 = &val;                        // Can change pointer, it is not constant


    const int* ptr2 = new int;
    const int* ptr3 = &val;             // The same applies to this case also
    //*ptr2 = val;                      // Can not change data, it is constant
    ptr = &val;                         // Can change pointer, it is not constant


    int* const ptr4 = new int;
    int* const ptr5 = &val;             // The same applies to this case also
    *ptr4 = val;                        // Can change data, it is not constant
    //ptr4 = &val;                      // Can not change pointer, it is constant


    const int* const ptr6 = new int;
    const int* const ptr7 = &val;       // The same applies to this case also
    //*ptr6 = val;                      // Can not change pointer, it is constant
    //ptr6 = &val;                      // Can not change pointer, it is constant
    
    
    // String class, Later.
    const char* Hello = "hello!";

    // Variable Alias: (Some problems)

    int someVal = 0;
    long &valRef1 = someVal;    // Wrong!, same type needed
    short &valRef2 = someVal;   // Same as above
    int &valRef3 = 5;           // Wrong!, 5 is a value not an address 

    // Parameter Alias Vs. Pointer: (look at min(25:00))

    cout<<'\n';
    
        //-----------------------
        // Video #24: Pointers 2:
        //-----------------------


    // Dynamic array allocation:
    // ------------------------

    // new & delete operators:
    // -> 'new' allows us to create dynamically array in memory and
    //    'delete' allows us to release this memory.

    int Nr_emp;
    cout<<"Enter Nr. of employees: ";   cin>>Nr_emp;

    int *emp_salaries = new int[Nr_emp];    // Old style: int emp_S[100];

    cout<<"\n Enter Employee Salaries one by one: ";
    for(int i = 0; i < Nr_emp; i++)         // We can access it like normal array
        cin>>emp_salaries[i];

    // some prcessing on array ...

    delete[] emp_salaries;                  // release the memory from this array after finishing my processing on it

    cout<<'\n';

    // declare a normal pointer
    float *pFloat = new float;
    *pFloat = 10.5;
    cout<<"\nLoc in Mem\tValue\n";
    cout<<pFloat<<"\t"<<*pFloat;


    // Array of pointers (can be used to create 2D Array):

    int arr2D[3][2];
    int *pArr[3] = {0}; // initialized to NULL, (0 and NULL are equivalent)

    for(int i = 0; i < 3; i++)  
        pArr[i] = new int[2];   // creating for each pointer an array of size 2

    for(int i = 0; i < 3; i++)  // Now access the array as if it is 3x2 Matrix 
        for(int j = 0; j < 2; j++)
            pArr[i][j] = arr2D[i][j] = i * j +1;


    for(int i = 0; i < 3; i++)  // we created 2 news so we should at the end make 2 deletes 
        delete[] pArr[i];
    

    cout<<'\n';

    // Pointer to pointer

    
    int **_pArr = create();
    print(_pArr);
    free(_pArr);

    cout<<'\n';

    // Passing arrays / pointers

    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr = arr;

    test1(arr);
    test2(arr);
    test3(arr);
    test3(ptr);

    int x = 10; 
    //test4(&x);        // Wrong, not array
    //test4(ptr);       // Wrong, not pointer
    test4(arr);

    int arr2[] = {1, 2, 3};
    //test4(arr2);      // Wrong, not same size


    // Standards, Compilers and Architectures look at The video min(20:40)

    // shooting yourself in the foot (Examples to illustrate the above topic)

    const int size = 10;
    int _arr[size];              // Good - Fixed size

    int n = 20;
    int _arr2[n];                // Variable size - Not standard may work on some compilers but do not use it

    // Don't  cast between primitives...unless you know what you really do

    short shortVal1 = 1;            // short type size is 2 Byte in memory
    int *pInt = (int*)&shortVal1;   // int   type size is 4 Byte in memory
    *pInt = 2147483647;             // CORRUPT MEMROY, changes will happen over the 4 bytes not the 2 bytes
    cout<<*pInt<<'\n';              // may CRASH now.

    // Do not maipulate the Memory... unless you know the architecture of your device and you know what you really do
    
    // be careful with Endianess issue related to your processor Architecture
    int value = 770;// !!!--> 00000010 00000011 00000000 00000000 4Byte length (little    endian) <-!!!
                           // 00000000 00000000 00000011 00000010 4Byte length (big       endian)
           //Memory Adress:   0x65fce8 0x65fce9 0x65fcea 0x65fceb
           // Simpler Address:    0        1        2        3
    
    char getSecByte = *(((char*)&value) +1); // try get the second byte which its has a value of 3 (00000011)2  
    cout<<(int)getSecByte<<'\n';             // output: 3 (if you have Intel x86 processor)
    
    cout<<'\n';

    // try to print each Byte in the Int with its address
    cout<<"\nAddress \tValue\n\n";
    for(int i = 0; i < 4; i++)
    {
        char getSecByte = *(((char*)&value)+i);   
        cout<<(int*)((char*)&value +i)<<'\t';   // print Address
        cout<<(int)getSecByte<<'\n';            // print Value
    }

    // Some Useful related Hint:
    // - Do not use C-stye casting - Because there is no compiler time checking
    //   instead use static_cast<> 
    // - Ex:
    //   int *pInt = static_cast<int*>(&shortVal);  // Well give compiler error  because of diff. size

    cout<<'\n';

        // -------------------------------
        // Video #26: Headers and Includes
        // -------------------------------

    // Header file.h and implementation file.cpp

    cout<<"!5 = "<<Ahmed_Functions::factorial(5)<<'\n';
    
    // Alias namespace
    namespace Factorial = Ahmed_Functions;
    cout<<"!4 = "<<Factorial::factorial(4)<<'\n';

    // Tmeplates

    cout<<"Sum Generic int of 1 + 2 = "<<sumGeneric(1, 2)<<'\n';
    cout<<"Sum Generic float of 1.5 + 2.0 = "<<sumGeneric(1.5, 2.0)<<'\n';
    cout<<"Sume Generic forced into <int>, 1.2 + 2.3 = "<<sumGeneric<int>(1.2, 2.3)<<'\n';

        // -----------------------------
        // Video #27: Streamse and Files
        // -----------------------------


    // open a file to write in it
    ifstream inputstream("input.txt");  

    if(inputstream.fail()){
        cerr<<"!!! Seems That the file is not there... or we can't open it. !!!";
        return 1;
    }



    string line;
    while(getline(inputstream, line))
        cout<< line << endl;
    
    // we can check if we reached the end of the file
    cout<<"\nEnd of file : ";
    inputstream.eof() ? cout<<" yes " : cout<<" no ";
    inputstream.close();

    cout<<'\n';

    // If I use a string object for the file name 
    // I should cast it to (const char* (C Language) datatype)
    string file_name = "input.txt";
    inputstream.open(file_name.c_str());    
    if(inputstream.fail()){
        cerr<<"!!! Seems That the file is not there... or we can't open it. !!!";
        exit(1);
    }

    inputstream >> line; // input only the first word or char  
    cout << line << endl;
    inputstream.close();

    cout<<'\n';

    // in case we read  a binary file and each line is pair of 2 integers
    inputstream.open("input.txt", ios::binary);
    if(inputstream.fail()){
        cerr<<"!!! Seems That the file is not there... or we can't open it. !!!";
        exit(1);
    }
    int x, y;
    inputstream >> x >> y;
    cout<< x <<" "<< y << endl;

    // The size of the file(seekg/seekp and tellg/tellp)

    // streampos begin; streamoff end;  // valid
    // streamoff begin, end;            // valid
    streampos begin, end;
    ifstream myfile("input.txt", ios::binary);
    begin = myfile.tellg();
    myfile.seekg(0,ios::end);
    end = myfile.tellg();

    cout<<"Size of myfile is "<< (end-begin) <<" Bytes."<<'\n';

    // reading an entire binary file
    streampos size;
    char* memBlock;

    ifstream file ("input.txt", ios::in | ios::binary | ios::ate);
    if(file.is_open())
    {
        size = file.tellg();
        memBlock = new char[size];
        file.seekg(0,ios::beg);
        file.read(memBlock, size);
        file.close();

        int i = 0;
        cout<<"The entire file binary is: \n";
        for(int i = 0; i < size; i++)
        {
            cout<<memBlock[i]<<" ";
        }
        cout<<'\n';
        delete[] memBlock;
    }else cerr<<"Unable to open the file!!!\n";

    // wirte to a file directly from user using (cin)
    char data[100];
    ofstream _file("input.txt",ios::out | ios::app);
    if(_file.is_open())
    {
        cout<<"\nWriting to a file: ";
        cout<<"\nEnter your name: ";
        cin.getline(data, 100);
        _file << data << endl;

        cout<<"\nEnter your age: ";
        cin>>data;
        cin.ignore();

        _file << data <<endl;

        _file.close();
    }else cerr<<"Unable to open the file!";

    file.open("input.txt");
    if(file.is_open())
    {
        cout<<"Reading from the file: \n";
        //file >> data;
        while(file.getline(data, 100))
            cout<< data << endl;
        

        file.close();
    }else cerr<<"Unable to open the file!";


    // Think fstream as same as cin/cout
    // iomanipulators

    _file.open("digits.txt", ios::app);
    if(_file.is_open())
    {
        _file << setiosflags(ios::fixed)
              << setiosflags(ios::showpoint)
              << setprecision(2);
        
        _file.setf(ios::scientific);
        _file.setf(ios::showbase);
        _file << 123.5 << endl;

        _file.close();
    }else cerr<<"Unable to open the file!";

    file.open("digits.txt");
    if(file.is_open())
    {   
        while(file >> x)
            cout<< x << endl;
        file.close();
    }else cerr<<"Unable to open the file!";

    // ws, skipws, and noskipws

    // The first Example :
    // (The original example was about `ws` I did edit it with `noskipws`)
    
    std::cout<<"First Example:\n\n";

    std::string word1 ,word2, word3;

    std::istringstream("this is Me") >> std::ws>>word1 >> word2 >> word3;
    std::cout << "Default behavior \""<< word1 << word2 << word3 << "\"\n";
    
    
    std::istringstream("this is Me") >> std::noskipws >> word1 >> word2 >> word3;
    std::cout << "noskipws behavior \""<<" W1 = "<< word1 <<" W2 = "<< word2 <<" W3 = "<< word3 << "\"\n";


    // The Second Example: 


    std::cout<<"\nSecond Example:\n\n";
    
    char c1, c2, c3;
    
    std::istringstream("a b c") >> c1 >> c2 >> c3;
    std::cout << "Default  behavior: c1 = " << c1 << " c2 = " << c2 << " c3 = " << c3 << '\n';

    
    std::istringstream("a b c") >> std::noskipws >> c1 >> c2 >> c3;
    std::cout << "noskipws behavior: c1 = " << c1 << " c2 = " << c2 << " c3 = " << c3 << '\n';

    // freopen: redirecting predefined streams

    x = 10;
    cout<<x;    // write to screen

    freopen("input.txt","a+", stdout);

    cout<<"Redircting to a file using normal cout operator(<<)"<<endl;

    cout<<'\n';

        //------------------
        // Video #29: c++ 11
        //------------------

    // auto

    // auto and Expression templates
    
    auto v = mult(3);
    std::cout << v[0]; // some value that could be, but almost certainly is not, 3.

    cout<<'\n';

    // auto, const and references

    std::vector<std::string> strings = { "stuff", "things", "misc" };
    for(auto s : strings) {
        std::cout << s << std::endl;
    }

    cout<<'\n';

    // - if the body of the loop modifies 's' (such as by calling =-> s.append("and stuff") <-=),
    //   only this copy will be modified not the original member of strings

    // - On the other hand if 's' is declared with ' auto& ' it will be a reference type 
    //   (inferred to be "std::string&") so on each iteration of the loop it will be assigned
    //   a reference to a string in the vector.

    for(auto& s : strings){
        cout<< s << endl;
        s.append(" new");
    }

    cout<<'\n';

    // print to check out the change
    for(auto s: strings){
        cout<< s << endl;
    }

    cout<<'\n';

    // const and reference:
    for(const auto& s: strings)
    {
        //cout<< s.append("Not allowed!") << endl;
        cout<< s << endl;
    }

    cout<<'\n';

    // Basic auto sample

    // - The keyword auto provides the auto-deduction of type of a variable.
    // - It is especially convenient when dealing with long type names:
    // - Example:

    // declare 2 elements to be inserted in the map first
    string firstName = "Ahmed";
    shared_ptr<string> secondName = make_shared<string>("Zaky");
    
    // declare a map
    map<string, shared_ptr<string> > table;

    // insert into map
    table.insert(pair<string, shared_ptr<string> >(firstName, secondName));

    //table(pairfirstName, )
    // C++ 98
    map<string, shared_ptr<string> >::iterator i = table.find("Ahmed");

    // print if found
    if(i != table.end())
        cout<< i->first <<" "<< *(i->second) << endl;
    else
        cout<<"Not found!";

    // auto Basic example with range-based for loop

    vector<int> _v = {0, 1, 2, 3, 4, 5};
    for(auto n : _v)
        cout<< n <<" ";
    cout<<'\n';

    // auto Basic exmaple with lambdas
    auto f = [](){ cout<< "lambda\n"; };
    f();

    cout<<'\n';

    // auto Basic example to avoid repition of the type
    auto _i = make_shared<int>(1);

    // auto Basic example to avoid surprising and unnecissary copies
    auto myMap = map<int, float>();
    myMap.emplace(1, 3.14);

    pair<int, float> const& firstPair = *myMap.begin(); // This is copy, Not wanted
    auto const& _firstPair = *myMap.begin();            // This is not copy, wanted

    // (auto) Generic lambda (C++14)

    auto print = []( const auto& arg) { cout<< arg << endl;};
    
    print(1);
    print("I am Ahmed!");

    cout<<'\n';

    // c++ 11 : vectors, pairs and maps with initializer lists
    vector<int> values = {1, 2, 3};
    vector<string> _strings = {"Ahmed", "Zaky"};
    pair<int, int> myPair = {20, 70};

    map<int, string> numeral = {
        {1, "Me"},
        {2, "You"}
    };

    map<string, pair<int, int> > mp_pr ={
        {"Ahmed", {100, 200}},
        {"Zaky",  {300, 400}}
    }; 

    // Tuples:
    tuple<int, char> foo = {1, 'a'};
    auto bar = make_tuple("Me", 99.9, 90, 'A');
    
    get<2>(bar) = 100;

    int myInt; int myChar;

    // Unpack elements:
    tie(myInt, myChar) = foo;
    tie(ignore, ignore, myInt, myChar) = bar;

    myChar = get<3>(bar);

    get<0>(foo) = get<2>(bar);
    get<1>(foo) = myChar;

    cout << "foo contains: ";
    cout << get<0>(foo) << ' '
         << get<1>(foo) << '\n';

    cout<<'\n';

    // Variadic Functions: 

    cout<< "Variadic sum function: \n";
    cout<< "Sum of 1 + 2 + 3 + 4 = " << sum(1, 2, 3, 4) << endl;
    cout<< "Sum of 1 + 5 = "<< sum(1, 5) << endl;

    // Move 

    // A will have a copy of content as compute() does
    // and then during the runtime the compute() is freed...meaningless!

    vector<int> A = compute();

    // Move takes what in A to B. A is now empty!
    vector<int> B = move(A);

    // C has what is in compute() ... compute() is now empty
    // more faster than normal assignment like with A (above example)
    vector<int> C = move( compute() );  

    // Raw strings
    
    // Normal string
    string str = "Hallo\tworld!\n";       // output: Hallo    world (new line)
    string r_str = R"(Hallo\tworld!\t)";  // output: Hallo\tworld\n (skips escape chars)
    string _r_str = R"(First line,
                     The second line.)";

    cout<< str ;
    cout<< r_str << endl;
    cout<< _r_str << endl;

    cout << '\n';

    // check smartpointers online from Reference part in the header

    // lambda funciton

    vector<int> numbers = {1, 2, 3, 4, 5};
    
    // count_if() 3rd Parm. is called (Unary predicate)
    // which means a one variable function returns bool type
    cout<< count_if(numbers.begin(), numbers.end(), isOdd) << '\n';

    // lambda function without name
    cout<< count_if(numbers.begin(), numbers.end(), 
                    [](int i) { return ( (i%2) == 1 ); } ) << '\n';
    
    // with return type specified
    cout<< count_if(numbers.begin(), numbers.end(),
                    [](int i) -> bool
                    {
                        return ((i%2) == 1);
                    }
    ) << '\n';
    
    // assign to a variable
    auto fSum = [](int a, int b) { return a+b;};

    cout<< fSum(3, 4) <<endl;

    auto square = [](int n) { return n*n; };

    vector<int> sqVec = {1, 2, 3, 4};

    for(auto &val : sqVec)
        val = square(val);

    for(auto val : sqVec)
        cout<< val <<" ";   // output: 1, 4, 9, 16


    cout<<'\n';

    // more complicated example (lambda expression):
    auto _square = [](int x) { return x*x;};
    auto addOne = [](int x) { return x+1;};
    auto _print  = [](int x)
                  {
                      cout<< x <<' ';
                      return x;
                  };

    vector<int> _vecNr = {1, 2, 3, 4, 5};
    perform(_square, _vecNr);
    perform(addOne, _vecNr);
    perform(_print, _vecNr); // output: 2 5 10 17

    cout<<'\n';

    // understand the Capture Closuer []
    
    // [=] call by value (readonly)
    vector<int> _vecNr2 = {1, 2, 3, 4, 5};
    int factor = 1;
    auto addFactor = [=](int x){ return x+factor; }; // Or [factor] ...

    perform(addFactor, _vecNr2);
    perform(_print, _vecNr2);     cout<<'\n'; // 2, 3, 4, 5

    factor = 10;
    perform(addFactor, _vecNr2);
    perform(_print, _vecNr2);     cout<<'\n'; // 11, 12, 14, 15

    // [&] call by reference (read and write)
    vector<int> _vecNr3 = {1, 2, 3, 4, 5};

    int sum = 0;
    for_each(_vecNr3.begin(), _vecNr3.end(), [&](int x) {
        sum += x;    
    });

    cout<< sum <<endl;

    // [&sum, y] mix calling from its scope
    vector<int> _vecNr4 = {1, 2, 3, 4, 5};

    int _sum = 0;
    int plusOne = 1;
    for_each(_vecNr4.begin(), _vecNr4.end(), [&_sum, plusOne](int x){
        _sum = x + plusOne;  // we can modify sum but not plusOne
    });

    perform(_print, _vecNr4);

    cout<<'\n';

    // using with sort to sort in undescending order
    vector<int> _vecNr5 = {1, 2, 3, 4, 5};
    
    sort(begin(_vecNr5), end(_vecNr5), [](int a, int b){ return a > b; });

    perform(_print, _vecNr5);

    cout<<'\n';

    // C++ rvalue references and move semantics for beginners (tutorial)
    // see ref. for more infos.

    // Introducing the magic of rvalue references
    // - The traditional C++ rules say that you are allowed to
    //   take the address of an rvalue only if you store it in a const (immutable) variable. 
    //   More technically, you are allowed to bind a const lvalue to an rvalue. 
    //   Consider the following example:   

    // int& x = 666;    // Error
    const int& x = 666; // Ok
    
    // - The first operation is wrong: 
    //   it's an invalid initialization of non-const reference 
    //   of type int& from an rvalue of type int. 
    //   The second line is the way to go. Of course, 
    //   being x a constant, you can't alter it.
    
    // - C++0x has introduced a new type called rvalue reference, 
    //   denoted by placing a double ampersand && after some type. 
    //   Such rvalue reference lets you modify the value of a temporary object: 
    //   it's like removing the const attribute in the second line above!

    // - Let's play a bit with this new toy:

    string s1 = "hello, ";
    string s2 = "world!";
    string&& s_rref = s1 + s2;  // - The result of s1 + s2 is an rvalue 
    s_rref += ", I am Ahmed";   // - I can change the temporary string
                                
    cout<< s_rref <<endl;       // - print "hello, world!, I am Ahmed"
    
    // - Here I create two simple strings s1 and s2. 
    //   I join them and I put the result (a temporary string, i.e. an rvalue) 
    //   into std::string&& s_rref. Now s_rref is a reference to a temporary object, 
    //   or an rvalue reference. There are no const around it, 
    //   so I'm free to modify the temporary string to my needs. This wouldn't be possible without rvalue references and its double ampersand notation. To better distinguish it, we refer to traditional C++ references (the single-ampersand one) as lvalue references.

    // - This might seem useless at a first glance. 
    //   However rvalue references pave the way for the implementation of move semantics, 
    //   a technique which can significantly increase the performance of your applications.
    
    
    // - Move semantics, the scenic route
    
    // - Implementing the copy constructor
    // - Let's stick to the Rule of Three and implement
    //   the copy constructor first. 
    //   As you may know, the copy constructor is used to create a new object
    //   from another existing object. 
    //   For example:
    

    Holder h1(10000);   // regular constructor
    Holder h2 = h1;     // copy constructor
    Holder h3(h2);      // copy constructor (Alternate syntax)

    // - Implementing the assignment operator
    // - It's now time for the assignment operator,
    //   used to replace an existing object with another existing object.
    //   For example:

    Holder _h1(10000);  // regular constructor
    Holder _h2(20000);  // regular constructor
    _h1 = _h2;          // assignment operator

    // H1 Ref.

    // - A temporary object coming out from createHolder()
    //   is passed to the copy constructor.
    //   According to our current design,
    //   the copy constructor allocates its own m_data pointer
    //   by copying the data from the temporary object.
    //   Two expensive memory allocations:
    //   a) during the creation of the temporary,
    //   b) during the actual object copy-construct operation.

    // - The same copy procedure occurs within the assignment operator:

    Holder h = createHolder(1000);
    h = createHolder(1000);

    // - The code inside our assignment operator wipes
    //   the memory out and then reallocates it from scratch
    //   by copying the data from the temporary object.
    //   Yet another two expensive memory allocations:
    //   a) during the creation of the temporary,
    //   b) in the actual object assignment operator.

    // - Too many expensive copies! We already have a fully-fledged object,
    //   the temporary and short-lived one returning from createHolder(),
    //   built for us by the compiler:
    //   it's an rvalue that will fade away with no use at the next instruction:
    //   why, during the construction/assignment stages,
    //   don't we steal — or move the allocated data inside the temporary object
    //   instead of making an expensive copy out of it?

    // - In the old days of C++ there was no way to optimize this out:
    //   returning heavy-weight objects by value was simply a no-go.
    //   Fortunately in C++11 and greater we are allowed (and encouraged) to do this,
    //   by improving our current Holder class with move semantics. In a nutshell,
    //   we will steal existing data from temporary objects instead of making useless clones.
    //   Don't copy, just move, because moving is always cheaper.


    // - Implementing move semantics with rvalue references: 
    
    // - Now that we have our new methods in place,
    //   the compiler is smart enough to detect whether you are creating an object
    //   with a temporary value (rvalue) or a regular one (lvalue)
    //   and trigger the proper constructor/operator accordingly.
    // - For example:

    Holder hd1(1000);                   // regular constructor

    Holder hd2(hd1);                    // copy constructor (lvalue in input)
    Holder hd3 = createHolder(2000);    // move constructor (rvalue in input) (1)  

    hd2 = hd3;                          // assignment operator (lvalue in input)
    hd3 = createHolder(3000);           // move assignment operator (rvalue in input)

    // - Where and when move semantics apply:

    // - Move semantics provide a smarter way of passing heavy-weight things around.
    //   You create your heavy-weight resource only once
    //   and then you move it where needed in a natural way.
    //   As I said before, move semantics is not only about classes.
    //   You can make use of it whenever you need to change the ownership
    //   of a resource across multiple areas of your application.
    //   However keep in mind that, unlike a pointer,
    //   you are not sharing anything:
    //   if object A steals data from object B,
    //   data in object B no longer exists, thus is no longer valid.
    //   As we know this is not a problem when dealing with temporary objects,
    //   but you can also steal from regular ones. We will see how shortly.
    
    // Some Notes !!!:
    // --------------

    // - I tried your code: the move constructor never gets called!

    // - That's right. If you run the last snippet above
    //   you will notice how the move constructor does not get called during (1).
    //   The regular constructor is called instead:
    //   this is due to a trick called Return Value Optimization (RVO).
    //   Modern compilers are able to detect that you are returning an object by value,
    //   and they apply a sort of return shortcut to avoid useless copies.

    // - You can tell the compiler to bypass such optimization:
    //   for example, GCC supports the -fno-elide-constructors flag.
    //   Compile the program with such flag enabled and run it again:
    //   the amount of constructor/destructor calls will increase noticeably.

    // - Why should I care implementing move semantics if the RVO does its optimization job by default?

    // - RVO is only about return values (output), not function parameters (input).
    //   There are many places where you may pass movable objects as input parameters,
    //   which would make the move constructor and the move assignment operator come into play,
    //   if implemented. The most important one: the Standard Library.
    //   During the upgrade to C++11 all the algorithms and containers in there were extended to
    //   support move semantics.
    //   So if you use the Standard Library with classes that follow the Rule of Five you will
    //   gain an important optimization boost.
    
    // - Can I move lvalues?

    // - Yes you can, with the utility function std::move from the Standard Library.
    //   It is used to convert an lvalue into an rvalue. Say we want to steal from an lvalue:

    Holder hld1(1000);          // hld1 is an lvalue
    Holder hld2(move(hld1));    // move constructor invoked (because of rvlaue is in input)

    // - Here std::move has converted the lvalue h1 into an rvalue:
    //   the compiler sees such rvalue in input and then triggers
    //   the move constructor on h2. The object h2 will steal data from h1
    //   during its construction stage.


    // - Mind that at this point h1 is a hollow object.
    //   However, we did a good thing when in our move constructor
    //   we set the stolen object's data to a valid state
    //   (other.m_data = nullptr, remember?).
    //   Now you may want to reuse h1,
    //   test it in some way or let it go out of scope
    //   without causing nasty crashes.

    
    // - Stackoverflow example Clarification of Move semantic
    
    // - effect if noexcept is not declared:
    //   std::vector uses the copy constructor already at the
    //   second and third insertion with push_back.
    
    // - effect if noexcept is declared:
    //   In the second example, it does the same operation,
    //   but with the move constructor instead.
    {        
        std::cout << "In scope: " << "\n";
        MyType elementA("elementA");
        MyType elementB("elementB");
        MyType elementC("elementC");
        std::vector<MyType> vector;
        vector.push_back(std::move(elementA));
        vector.push_back(std::move(elementB));
        vector.push_back(std::move(elementC));
        std::cout << "\n";
        std::cout << "After scope exit: " << "\n";
    }

    // - copy-and-swap idiom:

    String createString();          // a function that returns String object
    String s;   s = createString();
    // Here: Right Hand Side (RHS -> createString()) is a rvalue, 
    // pass-by-value style assignment operator could be more efficient
    // than, pass-by-const-reference style assignment operator

    cout<<'\n';

    // - Perfect forwarding:
    // - First iteration:

    // lvalues
    //int five = 5;
    //int myFive = create<int>(five);
    //
    //cout<< "myFive: " <<myFive <<endl; 
    //
    //// rvalues
    //int _myFive = create<int>(5); // compile error
    //
    //cout<< "_myFive: " << _myFive <<endl;

    // - If I compile the program, I will get a compiler error.
    //   The reason is that the rvalue (line 21) can not be bound to a non-constant lvalue reference.

    // - Now, I have to ways to solve the issue.

    // 1- Change the non-constant lvalue reference (line 6) in a constant lvalue reference.
    //    You can bind a rvalue to a constant lvalue reference. But that is not perfect,
    //    because the function argument is constant and I can therefore not change it.
   
    // 2- Overload the function template for a constant lvalue reference
    //    and a non-const lvalue reference. That is easy. That is the right way to go.    

    cout<<'\n';

    // - Second iteration: 
    //   Nothing new to type in main we only added an overload function template to create().

    // - That was easy. Too easy. The solution has two conceptional issues.

    // 1- To support n different arguments, I have to overload  2^n +1 variations
    //    of the function template create. 2^n +1 because the function create
    //    without an argument is part of the perfect factory method.

    // 2- The function argument mutates in the function body of create to a lvalue,
    //    because it has a name. Does this matter? Of course, yes.
    //    a is not movable any more. Therefore, I have to perform an expensive copy
    //    instead of a cheap move. But what is even worse.
    //    If the constructor of T (line 12) needs a rvalue, it will not work any more.

    // Third iteration: Nothing new here.

    cout<<'\n';

    // Fourth iteration: the perfect factory method

    // lvalues
    int five = 5;
    int myFive = create<int>(five);
    cout<< "myFive: " <<myFive <<endl; 

    string _str{"Lvalue"};
    string str2 = create<string>(str);
    cout<<"Str2: "<< str2 <<endl;

    // rvalues
    int _myFive = create<int>(5); // compile error
    cout<< "_myFive: " << _myFive <<endl;

    string str3 = create<string>(string("Rvalue"));
    cout<< "str3: " << str3 <<endl;

    string str4 = create<string>(move(str3));
    cout<< "str4: " << str4 <<endl;
    
    // Arbitrary Nr. of arguments

    double db = create<double>();
    cout<< "db: " << db <<endl;

    MyStruct mystr = create<MyStruct>(2020, 3.14, str4);

    cout<< mystr.year << " " << mystr.pi << " " << mystr.rvalue <<endl;


    // Type deduction: 

    // - With C++11 we got with auto and decltype a new form of type deduction.
    //   We are used to type deduction from templates, however,
    //   these two new variants can be tricky sometimes.

    // - auto

    int* ip;
    const int* cip;
    const int* const cicp = ip;

                            // - output C++ Insights gives
    auto aip = ip;          // int* ip;
    auto acip = cip;        // const int* cip;
    auto acicp = cicp;      // const int* cip;

    // - We have three different pointers, all of type int. They are getting more and more constified.
    //   The question is what’s the type that is deduced by auto? All are pointers,
    //   that’s for sure. But what happens with the const? auto removes all top-level qualifier.
    //   Hence, even the const disappears. Does it? Here is the output C++ Insights gives:


    // - Yes, the top-level const is removed. A constant pointer does not matter,
    //   so this const is discarded, but the constness of the memory behind it sticks.
    //   Hence, this const is preserved. Which is why acip looks exactly like acicp. This makes sense right.
    
    // - decltype(auto)

    // - Now, from time to time we like to preserve all qualifiers. This is when decltype appears.
    //   In contrast to auto, decltype does preserve all top-level qualifiers.
    //   With  C++14 the combination of decltype and auto is possible
    //   and we can write decltype(auto) which makes things easier.
    //   Here is another example from C++ Insights which uses C++14:
    
                                    // output:
    decltype(auto) _aip = ip;       // int* _aip = ip;
    decltype(auto) _acip = cip;     // const int* _acip = cip;
    decltype(auto) _acicp = cicp;   // const int* const _acicp = cicp;

    // - We can see, that acicp does carry the second const which is lost when we just use auto.

    // decltype: 

    // - When do we need decltype, or more precisely when do we like to keep all qualifiers?
    //   One popular reason is templates. Imagine a class template with some function Get.
    //   With just using auto as a return type we can never return a reference to something.
    //   In template code we often don’t know the exact types, which makes it desirable to provide
    //   code that just works. decltype can help here. However, consider decltype as a library writer feature.
    //   In most cases we are fine with auto. It is just good to know the entire toolbox.
    
    // - auto& and auto* versus auto

    auto fp = getFoo();

    // - We have a function returning a Foo* and an auto variable auto f = GetFoo()
    //   which deduces the type. Of course, the correct type. What if we’d like to make f const?
    //   That we cannot alter the data of f? Sure, we write it like this
    //   const auto f = .... At least that’s what we would do, if we write it without auto.
    //   Here are some possibilities we can try:

    auto _fp = getFoo();
    const auto        fp1 = getFoo();
          auto  const fp2 = getFoo();
 
 // const auto  const fp3 = getFoo(); // compile error
    
    const auto*       fp4 = getFoo(); 
          auto* const fp5 = getFoo();
    const auto* const fp6 = getFoo();


    // - First, fp1 produces a const pointer to mutable data.
    //   Not exactly what we intended. fp2 probably seems pointless.
    //   fp3 makes more sense, but this doesn’t compile. The control changes,
    //   if we start using the form auto*.
    //   Now, we can add the qualifiers like we can do it with a regular type.
    //   But see for yourself in C++ Insights what the result is:

    // the representation of 'auto' above code
          Foo*      __fp = getFoo();
          Foo* const _fp1 = getFoo();
          Foo* const _fp2 = getFoo();
    
    const Foo*       _fp4 = getFoo();
          Foo* const _fp5 = getFoo();
    const Foo* const _fp6 = getFoo();
 
    // ----------------------------------

    // auto& x = Get();

    // - We have a classical singleton which the function Get should return.
    //   Of course, we like a reference to it otherwise we have multiple-tons.
    //   Despite auto and & this code does not compile:

    // --> error: non-const lvalue reference to type 'Singleton' cannot bind to a temporary of type 'Singleton'

    // - The reason is, the Get in fact return Singleton and not Singleton&. Why?
    //   Because we did not apply the & to the auto-return type of Get.
    //   A small change and the code compiles:

    auto& _x = _Get();

    // ----------------------------------

    // C++ Rvalue References Explained:

    // Rvalue references solve at least two problems:
    
        // 1- Implementing move semantic.
        // 2- Perfect forwarding.

    // - Forcing move semantics:

    X a, b;
    _swap(a, b);
    
    cout<<'\n';

    // Use Raw Strings for Regular Expressions

    // - First of all, for simplicity purposes, I will break the previous rule.
    //   The regular expression for the text C++ is quite ugly: C\\+\\+.
    //   You have to use two backslashes for each + sign.
    //   First, the + sign is a special character in a regular expression.
    //   Second, the backslash is a special character in a string.
    //   Therefore one backslash escapes the + sign,
    //   the other backslash escapes the backslash.
    
    // - By using a raw string literal the second backslash is not necessary any more,
    //   because the backslash is not be interpreted in the string.

    // - The following short example may not convince you.

    string regExpr("c\\+\\+");
    string regExprR(R"(c\+\+)");

    // - Both strings stand for regular expression which matches the text C++.
    //   In particular, the raw string R"(C\+\+) is quite ugly to read.
    //   R"(Raw String)" delimits the raw string. By the way,
    //   regular expressions and path names on windows "C:\temp\newFile.txt"
    //   are typical use-case for raw strings.

    // - Imagine, you want to search for a floating point number in a text,
    //   which you identify by the following sequence of signs:
    //   Tabulator FloatingPointNumber Tabulator \\DELIMITER.
    //   Here is a concrete example for this pattern: "\t5.5\t\\DELIMITER".

    // - The following program uses a regular expression encode in a string
    //   and in a raw string to match this pattern

    string text = "A text with floating pointer number \t5.5\t\\DELIMITER and more text.";
    cout<< text <<endl;

    cout<<'\n';

    regex rgx("\\t[0-9]+\\.[0-9]+\\t\\\\DELIMITER");
    regex rgxRaw(R"(\t[0-9]+\.[0-9]+\t\\DELIMITER)");

    if (regex_search(text, rgx)) cout<< "Found with rgx" <<endl;
    if (regex_search(text, rgxRaw)) cout<< "Found with rgxRaw" <<endl;

    // - The regular expression rgx("\\t[0-9]+\\.[0-9]+\\t\\\\DELIMITER") is pretty ugly.
    //   To find n "\"-symbols (line 1), you have to write 2 * n "\"-symbols.
    //   In constrast, using a raw string to define a regular expression, makes it possible,
    //   to express the pattern your are looking for directly in the regular expression:
    //   rgxRaw(R"(\t[0-9]+\.[0-9]+\t\\DELIMITER)") (line 2).
    //   The subexpression [0-9]+\.[0-9]+ of the regular expression stands for a floating point number:
    //   at least one number [0-9]+ followed by a dot \. followed by at least one number [0-9]+. 

    // - For further analyse use your match_result

    // - Using a regular expression consists typically of three steps.
    //   This holds for std::regex_search, and std::regex_match.

    //      1. Define the regular expression.
    //      2. Store the result of the search.
    //      3. Analyse the result.

    // (?:[a-z0-9!#$%&'*+/=?^_`{|}~-]+(?:\.[az0-9!#$%&'*+/=?^_`{|}~-]+)*|"(?:[\x01-\x08\x0b\x0c\x0e-\x1f\x2\x23-\x5b\x5d-\x7f]|\\[\x01-\x09\x0b\x0c\x0e-\x7f])*")
    // @(?:(?:[a-z0-9](?:[a-z0-9-]*[a-z0-9])?\.)+[a-z0-9](?:[a-z0-9-]*[a-z0-9])?|\[(?:(?:25[0-5]|2[0-4][0-9]|[01]?[0-9][0-9]?)\.){3}(?:25[0-5]|2[0-4][0-9]|[01]?[0-9][0-9]?|[a-z0-9-]*[a-z0-9]:(?:[\x01-\x08\x0b\x0c\x0e-\x1f\x21-\x5a\x53-\x7f]|\\[\x01-\x09\x0b\x0c\x0e-\x7f])+)\])


    // - For readability, I made a line break in the regular expression.
    //   The first line matches the local part and the second line
    //   the domain part of the e-mail address.
    //   My program uses a simpler regular expression for matching an e-mail address.
    //   It's not perfect, but it will do its job. Additionally,
    //   I want to match the local part and the domain part of my e-mail address.


    cout<<'\n';

    string emailText = "A text with an email address: ahmed6mohamed6@gamil.com."; // (1)


    string regExprStr(R"(([\w.%+-]+)@([\w.-]+\.[a-zA-Z]{2,4}))");
    regex _rgx(regExprStr);                                                       // (2)

    std::smatch smatch;

    if( regex_search(emailText, smatch, _rgx )) {                                 // (3)
        
        cout<< "Text" << emailText <<endl;
        cout<< '\n';

        cout<< "Before the email address: "<< smatch.prefix() <<endl;
        cout<< "After the email address: "<< smatch.suffix() <<endl;
        cout<< '\n';

        cout<< "Length of email address: "<< smatch.length() <<endl;
        cout<< '\n';

        cout<< "Email address: " << smatch[0] <<endl;   // (6)
        cout<< "Local part: " << smatch[1] <<endl;      // (4)
        cout<< "Domain part: " << smatch[2] <<endl;     // (5)
    }


    // - Lines 1, 2, and 3 stand for the beginning of the 3 typical steps of the usage of a regular expression.
    //   The regular expression in line 2 needs a few additional words.

    // - Here it is:([\w.%+-]+)@([\w.-]+\.[a-zA-Z]{2,4})

    //      - [\w.%+-]+: At least one of the following characters:
    //        "\w", ".", "%", "+", or "-". "\w" stands for a word character.
    
    //      - [\w.-]+\.[a-zA-Z]{2,4}:
    //        At least one of a "\w", ".", "-", followed by a dot ".",
    //        followed by 2 - 4 characters from the range a-z or the range A-Z.
    
    //       - (...)@(...): The round braces stand for a capture group.
    //         They allow you to identify a submatch in a match.
    //         The first capture (line 4) group is the local part of an address.
    //         The second capture group (line 5) is the domain part of the e-mail address.
    //         You can address the entire match with the 0-th capture group (line 6).



    // Regular expression (Geeks for Geeks):

    // working of regex_match()

    string _a = "GeeksforGeeks";

    regex _b(R"((Geeks)(.*))"); // Geeks followed by any character
    
    // regex_match function matches string a against regex b
    if(regex_match(_a, _b))
        cout<< "String a matches regular expression of 'b'."; 
    
    cout<<'\n';

    // regex_match function for matching a range in string a against regex b
    if(regex_match(_a.begin(), _a.end(), _b))
        cout<< "regular expression 'b' matches  string a in the range from 0 to string end.";

    cout<<'\n';

    // working of regex_search()

   // Target sequence:
    string _s = "I am looking for GeeksforGeeks articles!"; 

    // an object of regex for pattern to be searched
    regex r("(Geeks)[a-zA-Z]+");
    
    // flag type for determining the match behavior
    // here it is for matches on 'string' objects
    std::smatch _smatch;

    // regex_search() for searching the regex pattern 
    // 'r' in the string 's'.
    //  'm' is flag for determining matching behavior.
    regex_search(_s, _smatch, r);

    for(auto x : _smatch)
        cout<< x << " ";


    // working for regex_replace()

    // we use _s and r from above

    // regex_replace() for replacing the match with 'geek'  
    cout<< regex_replace(_s, r, "geeks");

    cout<<'\n';

    string result;
    // regex_replace() for replacing the match with 'geek' in a range of s
    regex_replace(back_inserter(result), _s.begin(), _s.end(), r, "geeks");

    cout<< result;
*/ 

    cout<<'\n';
    
    // passing Arguments through g++ command line

    //cout<< "Total recieved arguments are: " << argc <<endl;

    //for(int i = 0; i < argc; i++)
    //    cout<< i+1 << "- argument: " << argv[i] <<endl;

    // factorial example input out from g++ command line

    if(argc != 2)
    {
        cout<<"Usage: n - Integer to compute its factorial\n";
        return 1;
    }

    int n = atoi(argv[1]); // convert char* to int

    cout<< n << "! = " << factorials(n) <<endl;


    return 0;
}
