**LeetCode Questions:**

1. [Longest Substring Without Repeating Characters](https://leetcode.com/problems/longest-substring-without-repeating-characters)  
	Hint: To randomly check the existence of a character in window [i,j] use an Unordered_Set or Hash_Set. This is useful since operations in a set takes O(1) time compared to Array O(n)!
	
2. [Longest Palindromic Substring](https://leetcode.com/problems/longest-palindromic-substring)  

   Hint: When doing the Brute Force method, you instantly come with idea of recursive tree, so you must know what common algo rules over recursion =>> DP!!! Also dont store string in matrix, as it will make O(n^3).
   
3. [ Integer to Roman](https://leetcode.com/problems/integer-to-roman)  

   Nice question for practice of map and pair!

4. [String to Integer (atoi)](https://leetcode.com/problems/string-to-integer-atoi)  

   Handle Overload: number 1, you can use longlongint. number 2 like in this quesn, you can check ki if len > 9 then to pkka nhi h something like that.

5th July 2020

1. [ Find the Duplicate Number](https://leetcode.com/problems/find-the-duplicate-number)  

   New Algorithm Learned : Floyd Tortoise and Hare (Cycle Detection)!!! If you don't remember, check it out!

6th July 2020

MATH DAY:

1. [Pow(x, n)](https://leetcode.com/problems/powx-n)  :

   It was a nice question, check corner cases, also there's a bit of a trick, try to divide into cases, when n is odd and even.

2. [Permutation Sequence](https://leetcode.com/problems/permutation-sequence) :

​		You wont find it as a math problem at first. Try dividing into blocks and finding each permutation as a function of index and k. If you still don't get it check out this [link](https://leetcode.com/problems/permutation-sequence/discuss/696595/C%2B%2B-or-Very-Easy-and-Detailed-Explanation-(Idea-%2B-code))

3. [Permutations](https://leetcode.com/problems/permutations), [Permutations II](https://leetcode.com/problems/permutations-ii), [Next Permutations](https://leetcode.com/problems/next-permutation):

   Classic questions on Backtracking, its a very important concept, learn to apply it.

   Next Permutations, is a trick based question and rather than medium, its hard.

8th July 2020

DP DAY:

1. [Unique Paths](https://leetcode.com/problems/unique-paths), [Unique Paths II](https://leetcode.com/problems/unique-paths-ii), [Minimum Path Sum](https://leetcode.com/problems/minimum-path-sum):

   A good practice of DP, start thinking about base cases and bottom-up approach.

2. [Rotate Image](https://leetcode.com/problems/rotate-image):
   Not a DP question, but involves a good trick, you need to remember.

9th July 2020

Today we learn: Hashing and Hash Table.

In C++ it is [unordered_map](http://www.cplusplus.com/reference/unordered_map/unordered_map/).

Other important links are:
1. https://www.geeksforgeeks.org/hashing-set-1-introduction/?ref=lbp
2. https://www.geeksforgeeks.org/hashing-set-2-separate-chaining/?ref=lbp
3. https://www.geeksforgeeks.org/hashing-set-3-open-addressing/?ref=lbp

Questions:
1. [3sum](https://leetcode.com/problems/3sum/)
2. [3sum Closest](https://leetcode.com/problems/3sum-closest/)
3. [Letter Combinations of a Phone Number](https://leetcode.com/problems/letter-combinations-of-a-phone-number/)
4. [4 Sum](https://leetcode.com/problems/4sum/)
5. [Generate Parentheses](https://leetcode.com/problems/generate-parentheses/)

Easy questions, but good practice for Arrays and Hash. In default I did by array, 2nd try must be with hash.

10th July 2020

Today we continue the work on hash and string too.

1. [Group Anagrams](https://leetcode.com/problems/group-anagrams/submissions/)
   The question was pretty easy, I could have just sorted the strings and then matched it with the key, but took the longer approach. Spend more time on thinking before jumping in on writing the code.

11th July 2020

Had some backlog of work so couldn't do much yesterday, so I'll finish with the string today.

1. [Delete Operation for two strings](https://leetcode.com/problems/delete-operation-for-two-strings/)
   Remember LCS finding using DP?
2. [Complex Number Multiplication](https://leetcode.com/problems/complex-number-multiplication/)
   This is pretty easy. Checkout sscanf
3. [Reorganize String](https://leetcode.com/problems/reorganize-string/)
   Its pretty easy, use counting sort for O(n).

14th Jul 2020

Lets continue with Arrays.

1. [Set Matrix Zeroes](https://leetcode.com/problems/set-matrix-zeroes/)
   It's a pretty easy one. Keep a flag of both rows and columns to be made 0.
2. [Search a 2D Matrix](https://leetcode.com/problems/search-a-2d-matrix/)
   Ok, first thing that should hit the mind after seeing sorted rows is "Binary Search"!!!! Take the matrix as a big 1D array to traverse. So start point is "0" and end point is  "m*n - 1". Now you have to traverse and binary search like a 1D array.
3. [Search a 2D Matrix II](https://leetcode.com/problems/search-a-2d-matrix-ii/)
   This is a tricky yet simple one. You have to traverse both row and col wise with certain conditions!
4. [Sort Colors](leetcode.com/problems/sort-colors/)
   Counting sort yay!!!
5. [Remove Duplicates from Sorted Array II](https://leetcode.com/problems/remove-duplicates-from-sorted-array-ii/)
   Thinking O(n^2) one is pretty easy, for O(n), thinnk that you dont have to return the vector, but an integer. So there must be a maths trick so that you can solve it in one-pass!
6. [Find Minimum in Rotated Sorted Array](https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/)

15th Jul 2020

Practicing Stacks today.

1. [Simplify Path](https://leetcode.com/problems/simplify-path/)
   Learnt a nice thing viz., stringstream and getline. Let me drop the links to both articles so you can refer. getline() would allow you to read between two '/' here.
   [stringstream](https://www.geeksforgeeks.org/stringstream-c-applications/)
   [getline()](https://www.geeksforgeeks.org/getline-string-c/)

2. [Evaluate Reverse Polish Notation](https://leetcode.com/problems/evaluate-reverse-polish-notation)
   Very important question, must do! Lesson learnt: Use pen-paper boi!