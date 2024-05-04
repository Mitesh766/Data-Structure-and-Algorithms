from bisect import bisect_left
from bisect import bisect_right

l1=[1,2,3,4,4,4,5,6]
target=4
lower_bound=bisect_left(l1,target)
upper_bound=bisect_right(l1,target)
print(upper_bound-lower_bound)