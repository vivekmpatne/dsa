# Max Distance Between Same

## Difficulty: Easy

## Platform: GeeksForGeeks

## Problem Link
[View Problem](https://www.geeksforgeeks.org/problems/max-distance-between-same-elements/1)

## Solved On
28 Oct 2026 at 08:18 pm

<h2><a href="https://www.geeksforgeeks.org/problems/max-distance-between-same-elements/1">Max Distance Between Same</a></h2><h3>Difficulty Level: Easy</h3><hr><p><span style="font-size: 20px;">Given an array <strong>arr[]</strong>, the task is to find the maximum distance between two occurrences of an element. If no element has two occurrences, then return 0.</span></p><p><span style="font-size: 20px;"><strong>Examples:</strong></span></p><pre><span style="font-size: 20px;"><strong>Input: </strong></span><span style="font-size: 20px;">arr[] = [1, 1, 2, 2, 2, 1]</span>
<span style="font-size: 20px;"><strong>Output: </strong>5</span>
<span style="font-size: 20px;"><strong>Explanation: </strong>distance for 1 is: 5-0 = 5, distance for 2 is : 4-2 = 2, So max distance is 5.</span></pre><pre><span style="font-size: 20px;"><strong>Input: </strong>arr[] = [3, 2, 1, 2, 1, 4, 5, 8, 6, 7, 4, 2]</span>
<span style="font-size: 20px;"><strong>Output: </strong>10</span>
<span style="font-size: 20px;"><strong>Explanation: </strong></span><span style="font-size: 20px;">maximum distance for 2 is 11-1 = 10, maximum distance for 1 is 4-2 = 2 ,maximum distance for 4 is 10-5 = 5, So max distance is 10.<br></span></pre><pre><strong><span style="font-size: 20px;">Input: </span></strong><span style="font-size: 20px;">arr[] = [1, 2, 3, 6, 5, 4]<br><strong>Output: </strong>0<br><strong>Explanation: </strong>No element has two occurrences, so maximum distance = 0.<br></span></pre><p><span style="font-size: 18px;"><strong>Expected Time Complexity </strong>:&nbsp; O(n)<br><strong>Expected Auxilliary Space </strong>: O(n)</span></p>