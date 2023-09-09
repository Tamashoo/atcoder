int sosu(int n);

int sosu(int n){
	if(n == 2) return 1;
	else if(n%2 == 0) return 0;

	double a = sqrt(n);
	for(int i = 3;i<=a;i +=2){
		if(n % i == 0){
			return 0;
		}
	}
	return 1;
}