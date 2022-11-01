float luasSegitiga(int a, int b, int c) {
	float s = (float)(a + b + c)/2;
	float luas = sqrt(s*(s-a)*(s-b)*(s-c));
	return luas;
}

float luasSegiempat(int panjang, int lebar){
	int luas;
	luas = panjang*lebar;
	return luas;
}