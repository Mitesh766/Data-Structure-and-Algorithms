# direct function to find upper bound and lower bound
from bisect import bisect_left
from bisect import bisect_right
l1=[1,2,3,4,4,4,5]
target=4
print(bisect_left(l1,target))
print(bisect_right(l1,target))