// Problem D

#include <iostream>
#include <cmath>

int gt(int x){
	int s = 1;
	for (int i = 1; i <= x; i++){
		s *= i;
	}
	return s;
}

int s(int x){
	int sum = 0;
	while (x) {
		sum += (x % 10);
		x = x / 10;
	}
	return sum;
}

int d(int x){
	int sum = s(x);
	if (sum / 10 == 0){
		return sum;
	}
	else {
		return d(sum);
	}
}

int main(void){
	int x;
	std::cin >> x;
	if (x < 6){
		std::cout << d(gt(x));
	}
	else{
		std::cout << 9;
	}
	return 0;
}