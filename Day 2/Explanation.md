so how this code works is basically,
the first if statement checks if there's actually a GCD in the two strings, if not, it returns "" (which is blank)
so if AB AB
ABAB ✓
but if AB BA
ABBA X
after that, the equation gets the length of GCD by getting the length of string 1 and string 2, computing their GCD, then returning the prefix string 1 w/ length of that GCD