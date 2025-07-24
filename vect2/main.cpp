#include "vect2.hpp"

int main()
{
    vect2 a(3, 4);
    vect2 b(1, 2);
    vect2 c;

    std::cout << "Initial vectors:\n";
    std::cout << "a = " << a << "\n"; // {3, 4}
    std::cout << "b = " << b << "\n"; // {1, 2}
    std::cout << "c = " << c << "\n"; // {0, 0}

    // Arithmetic
    std::cout << "\nArithmetic operations:\n";
    std::cout << "a + b = " << (a + b) << "\n";       // {4, 6}
    std::cout << "a - b = " << (a - b) << "\n";       // {2, 2}
    std::cout << "a * b = " << (a * b) << "\n";       // {3, 8}
    std::cout << "a / b = " << (a / b) << "\n";       // {3, 2}

    // Scalar arithmetic
    std::cout << "\nScalar arithmetic:\n";
    std::cout << "a + 10 = " << (a + 10) << "\n";     // {13, 14}
    std::cout << "a - 2 = " << (a - 2) << "\n";       // {1, 2}
    std::cout << "a * 2 = " << (a * 2) << "\n";       // {6, 8}
    std::cout << "a / 2 = " << (a / 2) << "\n";       // {1, 2}

    // Reverse scalar
    std::cout << "\nReverse scalar arithmetic:\n";
    std::cout << "10 + b = " << (10 + b) << "\n";     // {11, 12}
    std::cout << "5 - b = " << (5 - b) << "\n";       // {4, 3}
    std::cout << "3 * b = " << (3 * b) << "\n";       // {3, 6}
    std::cout << "8 / b = " << (8 / b) << "\n";       // {8, 4}

    // Compound assignment
    std::cout << "\nCompound assignment:\n";
    c = a;
    c += b;
    std::cout << "c += b -> " << c << "\n";           // {4, 6}
    c -= b;
    std::cout << "c -= b -> " << c << "\n";           // {3, 4}
    c *= 2;
    std::cout << "c *= 2 -> " << c << "\n";           // {6, 8}
    c /= 2;
    std::cout << "c /= 2 -> " << c << "\n";           // {3, 4}

    // Unary minus and increment/decrement
    std::cout << "\nUnary and increment/decrement:\n";
    std::cout << "-a = " << (-a) << "\n";             // {-3, -4}
    vect2 pre = ++a;
    std::cout << "++a = " << pre << "\n";             // {4, 5}
    vect2 post = a++;
    std::cout << "a++ = " << post << ", now a = " << a << "\n"; // {4, 5}, now a = {5, 6}
    pre = --a;
    std::cout << "--a = " << pre << "\n";             // {4, 5}
    post = a--;
    std::cout << "a-- = " << post << ", now a = " << a << "\n"; // {4, 5}, now a = {3, 4}

    // Comparisons
    std::cout << "\nComparisons:\n";
    std::cout << std::boolalpha;
    std::cout << "a == b: " << (a == b) << "\n";       // false
    std::cout << "a != b: " << (a != b) << "\n";       // true
    std::cout << "a < b: "  << (a < b) << "\n";        // false
    std::cout << "a > b: "  << (a > b) << "\n";        // true
    std::cout << "a <= b: " << (a <= b) << "\n";       // false
    std::cout << "a >= b: " << (a >= b) << "\n";       // true

	// Const
	std::cout << "\nConst correctness test:\n";
    const vect2 const_a(7, 8);
    const vect2 const_b(2, 3);

    std::cout << "const_a = " << const_a << "\n";              // {7, 8}
    std::cout << "const_b = " << const_b << "\n";              // {2, 3}
    std::cout << "const_a + const_b = " << (const_a + const_b) << "\n";  // {9, 11}
    std::cout << "const_a == const_b: " << (const_a == const_b) << "\n"; // false
    std::cout << "-const_a = " << (-const_a) << "\n";          // {-7, -8}

    // The following would be compiler errors (as expected):
    // const_a += const_b;        // ❌ won't compile
    // const_a++;                 // ❌ won't compile

    return 0;
}
