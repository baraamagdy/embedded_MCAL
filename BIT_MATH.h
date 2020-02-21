#ifndef BIT_MATH_h
#define BIT_MATH_h

	
	#define SET_BIT(var,BIT)     var|=(1<<BIT)
	#define CLR_BIT(var,BIT)     var&=~(1<<BIT)
	#define Toggle_BIT(var,BIT)  var^=(1<<BIT)
	#define Get_BIT(var,BIT)    (var>>BIT)&1
    

#endif
