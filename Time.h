struct Time{
	int h,m,s;
};
void getTime(struct Time &t){
	cout<<"Input Time (h m s):";
	cin>>t.h >>t.m >>t.s;

}
struct Time subtract(struct Time t2,struct Time t1){
	struct Time t3; 
	t3.h=t2.h-t1.h;
	t3.m=t2.m-t1.m;
	t3.s=t2.s-t1.s;

	if(t3.s<0){
		t3.m-=1;
		t3.s+=60;
	}if(t3.m<0){
		t3.h-=1;
		t3.m+=60;
	}
	if(t3.h<0){
		t3.h+=24;
	}
	return t3;
}
void display(struct Time t3){
	cout<<"t3 "<<setfill('0')<<setw(2)<<t3.h <<":"<<setfill('0')<<setw(2)<<t3.m<<":"<<setfill('0')<<setw(2)<<t3.s<<endl;
}
//create 3 functions

//1.  getTime function
//2. subtract fuctions
//3. display functions