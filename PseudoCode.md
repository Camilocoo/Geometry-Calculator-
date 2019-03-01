```` Pseudo Code geometry calculator


PI = 3.14159

CIRCLE_CHOICE = 1; 
RECTANGLE_CHOICE = 2;
TRIANGLE_CHOICE= 3;
QUIT_CHOICE = 4;


Display the menu in order for the user to select a choice 

Get choice 

If (CIRCLE_CHOICE){

Display enter the radius of the circle
Get radius

if (radius < 0 ){
	Display invalid number please try again 
	Get radius
} 

area = PI * (radius^2);

Display area 

}endif 

if (RECTANGLE_CHOICE){
Display question asking for the length of the rectangle; 
Get length 

	if (length< 0){
Display invalid number please try again 
Get length 	

	}
Display question asking for the width of the rectangle 
Get the width 
	
	If (width < 0 ){
		Display error message please try again 
		Get the width 
	}

Area = length * width 

Display the area of the rectangle 

}endif 


if (TRIANGLE_CHOICE){
Display question asking for the base of the triangle 
Get the base of the triangle 

	if (base< 0){
		Display an error message and please try again 
		Get base 

	}
Display question asking for the height of the triangle 
Get the height of the triangle 

	if (height<0){

	Display error message please try again 
	Get the height of the triangle 

`}
Area = (base * height ) * 0.5

Display the area of the triangle 


} endif 

If (QUIT_CHOICE){
	
	Display goodbye message 


}endif 

````
