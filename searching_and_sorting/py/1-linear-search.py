def linear_search(arr,x):
	for a in arr:
		if a == x :
			return 'y'
	return 'n';

a = [2,3,4,5,6,7,8,9,0,1,11,23,45,67,89,91]
print linear_search(a,11)
