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
   Thinking O(n^2) one is pretty easy, for O(n), think that you dont have to return the vector, but an integer. So there must be a maths trick so that you can solve it in one-pass!
6. [Find Minimum in Rotated Sorted Array](https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/)

15th Jul 2020

Practicing Stacks today.

1. [Simplify Path](https://leetcode.com/problems/simplify-path/)
   Learnt a nice thing viz., stringstream and getline. Let me drop the links to both articles so you can refer. getline() would allow you to read between two '/' here.
   [stringstream](https://www.geeksforgeeks.org/stringstream-c-applications/)
   [getline()](https://www.geeksforgeeks.org/getline-string-c/)

2. [Evaluate Reverse Polish Notation](https://leetcode.com/problems/evaluate-reverse-polish-notation)
   Very important question, must do! Lesson learnt: Use pen-paper boi!

16th Jul 2020

Continuing stacks!

1. [132 Pattern](https://leetcode.com/problems/132-pattern/)
   A pretty difficult and tricky one for me,yes. First of all a small idea hit me, but it was O(n^3), so will try it -_-. After that I got an idea of stack, but didn't know how to proceed. So here it goes if you are struggling. See you have to calculate, triplets such that a1< a3< a2 right? So tell me for what you'll make a stack, obviously to keep the largest one, i.e , a2. Now if the incoming a2 (that is gonna be pushed into stack) is greater than the top, then the top element is a good candidate for a3, right? So the only traversal you have to do is for a1, rest all are handled by pushing and popping the stack (*winks). So the time complexity reduced to O(n)!!!!!!!!! Damn,enjoy xD.

2. [Asteroid Collision](https://leetcode.com/problems/asteroid-collision/)
   Only in one case you will have collision that is stack.top() goes right and incoming asteroid goes left! Keep a flag for checking if the asteroid is getting destroyed or not.

3. [Next Greater Element II](https://leetcode.com/problems/next-greater-element-ii/)
   Simple trick for cyclic arrays, resize the array to double size, and copy elements, *wink.

17th Jul 2020

Today Sliding Window and some Hash Tables!

1. [Find All Anagrams in a String](https://leetcode.com/problems/find-all-anagrams-in-a-string/)
   If you use sort, it will do in O(nlogn), is it bad? Can we make it better? O(n) really? Yes, the answer is two words, Sliding Window!

2. [Permutation in String](https://leetcode.com/problems/permutation-in-string/)
   If you have done the above, you know how to do this!

3. [Repeated DNA Sequences](https://leetcode.com/problems/repeated-dna-sequences/)
   You gotta check a long sequence of 10 chars/digits. First thing that hit my mind is extra space, more like a hashMap? You can map A,C,T,G in some manner, you have to also keep in mind that substring are only once added in the result vector. Ok, how you store a hash of the substring? Store it as some integer, in a set! Why a set? Because searching a no. in a set only takes O(1) time as compared to array's O(n).

4. [Contiguous Array](https://leetcode.com/problems/contiguous-array/)
   Make a hashMap for <sum,index>, now, there are two cases if sum at index i = 0 or is not 0, if its 0, then i+1 is the longest array, or if its not 0; you have to find a previous index with the same sum, coz difference b/w them [i,j) will be 0!!!

18th Jul 2020

Tried somethings on Parentheses.

1. [Generate Parentheses](https://leetcode.com/problems/generate-parentheses/)
   You can do with simple recursion technique, Take a 2*n string, and tell me what is the constraint? Obviously, no. of left brackets at any point of time should be greater than the right brackets also no. of left brackets should not exceed n!

2. [Valid Parenthesis String](https://leetcode.com/problems/valid-parenthesis-string/)
   When we encounter '(' no. of balance factor,i.e, left-right, increases
   When we encounter ')' it increases;
   When we encounter '*' it can be changed by -1,0,1;   
   So we can have a range of the balance factor, and if at some place.

19th Jul 2020

Lets go back on track, I did misc. questions today.

1. [Merge Intervals](https://leetcode.com/problems/merge-intervals/)
   I guess its pretty easy, just simple constraints!

2. [Non-overlapping Intervals](https://leetcode.com/problems/non-overlapping-intervals/)
   Try for a greedy approach! Find max overlapping and then n- that!

3. [Find Peak Element](https://leetcode.com/problems/find-peak-element/)
   Simple Binary Traversal, you can skip if you want!

4. [Minimum Size Subarray Sum](https://leetcode.com/problems/minimum-size-subarray-sum/)
   Ok so if you have done the Largest Contiguous SubArray Sum question [refer to this](https://www.geeksforgeeks.org/largest-sum-contiguous-subarray/), you might know the O(n) Kaden Algorithm, then you might know what to do! If you know the old O(nlogn) Binary search one then you should check it out. Now the mistake I did while approaching the question from Kaden Algo is I included a new space as in vector<int> temp. Now the issue is when sum > target I have to clear the vector as temp.clear(), also you want the first element(front) to be removed from temp while(sum > target). This is an issue as it will lead to TLE. Instead you can do that simply by introducing another iterator j. So while one loop traverses the array, the other clears the no.s in temp while (sum >target).