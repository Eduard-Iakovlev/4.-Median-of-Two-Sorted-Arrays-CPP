# 4. Median of Two Sorted Arrays CPP

Given two sorted arrays nums1 and nums2 of size m and n respectively, return the median of the two sorted arrays.

The overall run time complexity should be O(log (m+n)).

 

Example 1:

Input: nums1 = [1,3], nums2 = [2]
Output: 2.00000
Explanation: merged array = [1,2,3] and median is 2.
Example 2:

Input: nums1 = [1,2], nums2 = [3,4]
Output: 2.50000
Explanation: merged array = [1,2,3,4] and median is (2 + 3) / 2 = 2.5.
 

Constraints:

nums1.length == m
nums2.length == n
0 <= m <= 1000
0 <= n <= 1000
1 <= m + n <= 2000
-106 <= nums1[i], nums2[i] <= 106

# 4. Медиана двух отсортированных массивов

Даны два отсортированных массива nums1 и nums2 размером m и n соответственно. Верните медиану двух отсортированных массивов.

Общая сложность во время выполнения должна быть O(log (m+n)).

 

Пример 1:

Входные данные: nums1 = [1,3], nums2 = [2]
Выходные данные: 2,00000
Пояснение: объединенный массив = [1,2,3], а медиана равна 2.
Пример 2:

Ввод: nums1 = [1,2], nums2 = [3,4]
Вывод: 2,50000
Объяснение: объединенный массив = [1,2,3,4], а медиана равна (2 + 3) / 2 = 2,5.
 

Ограничения:

nums1.length == m
nums2.length == n
0 <= m <= 1000
0 <= n <= 1000
1 <= m + n <= 2000
-106 <= nums1[i], nums2[i] <= 106