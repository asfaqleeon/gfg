function linear_search(arr,param){
	var i, size = arr.length;
	
	for(i=0;i<size;i++){
		if(arr[i] == param)
			return 'y';
	}
	return 'n';
}

var a = [2,3,4,5,6,7,8,9,0,1,11,23,45,67,89,91];
console.log( linear_search(a,122) );
