Room Allocation
Jadavpur University wants to find out the number of rooms they need to accommodate the teams coming for their fest.
A total of N colleges are coming, where, the ith college has a team of Ai members.

Each room can accommodate at most 2 people. Moreover, people from different colleges dislike staying together.

Find the minimum number of rooms Jadavpur University will have to use to accommodate everyone, such that a room never contains people from different colleges.

## Input Format
The first line of input will contain a single integer T, denoting the number of test cases.
Each test case consists of multiple lines of input.
The first line of each test case contains one integer, N, the number of colleges coming for the fest.
The next line contains N space-separated integers, A1,A2,…,AN, the number of people coming from each college.
## Output Format
For each test case, output on a new line, the minimum number of rooms needed to accommodate all students, such that a room never contains people from different colleges.
## Constraints
1 ≤ T ≤ 100

1 ≤ N ≤ 100

1 ≤ Ai ≤ 100
Sample 1:
## Input
2

1

1

4

4 4 4 4
## Output
1

8
## Explanation:
In the first test case, there is only one college attending and we need 1 room to accommodate the 1 person.

In the second test case, each college is sending 4 people, and thus needs 2 rooms. So, a total of 2.4 = 8 rooms are needed.
