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

2.[Permutation Sequence](https://leetcode.com/problems/permutation-sequence) :

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
