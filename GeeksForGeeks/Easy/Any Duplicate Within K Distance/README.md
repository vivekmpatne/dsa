# Any Duplicate Within K Distance

## Difficulty: Easy

## Platform: GeeksForGeeks

## Problem Link
[View Problem](https://www.geeksforgeeks.org/problems/kth-distance3757/1)

## Solved On
08 Sept 2026 at 11:53 pm

<h2><a href="https://www.geeksforgeeks.org/problems/kth-distance3757/1">Any Duplicate Within K Distance</a></h2><h3>Difficulty Level: Easy</h3><hr><p><span style="font-family: impact, sans-serif;"><span style="font-size: 18.6667px;">Given an unsorted array <strong>arr[]</strong> and an integer <strong>k</strong>, check if there is any duplicate within k distance.&nbsp;</span></span></p>
<p><strong><span style="font-size: 14pt; font-family: 'andale mono', monospace;">Examples:</span></strong></p>
<pre><span style="font-size: 14pt; font-family: 'andale mono', monospace;"><strong>Input:</strong> arr[] = [1, 5, 4, 5, 1], k = 3</span><br><span style="font-size: 14pt; font-family: 'andale mono', monospace;"><strong>Output:</strong> true</span><br><span style="font-size: 14pt; font-family: 'andale mono', monospace;"><strong>Explanation:</strong> 5 is at distance 2 which is less than or equal to k.</span></pre>
<pre><span style="font-size: 14pt; font-family: 'andale mono', monospace;"><strong>Input:</strong> arr[] = [10, 2, 3, 4, 10, 5], k = 3</span><br><span style="font-size: 14pt; font-family: 'andale mono', monospace;"><strong>Output:</strong> false</span><br><span style="font-size: 14pt; font-family: 'andale mono', monospace;"><strong>Explanation: </strong>Only one duplicate 10 at distance 4 which is more than 3.<br></span></pre>
<pre><span style="font-size: 14pt; font-family: 'andale mono', monospace;"><strong>Input:</strong> arr[] = [6, 8, 4, 1, 8, 5, 7], k = 3</span><br><span style="font-size: 14pt; font-family: 'andale mono', monospace;"><strong>Output:</strong> true</span><br><span style="font-size: 14pt; font-family: 'andale mono', monospace;"><strong>Explanation:</strong> 8 is repeated at distance 3.</span></pre>