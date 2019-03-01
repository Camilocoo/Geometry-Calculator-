#include <iostream>
#include <cmath>
#include <iomanip> 

using namespace std; 

int main()
{
     const float PI = 3.14159;
     
     int choice; 
        
     float length, width, base, height, radius,area;
     
     const int CIRCLE_CHOICE=1, RECTANGLE_CHOICE=2,TRIANGLE_CHOICE=3,QUIT_CHOICE=4; 
     
     
     cout<<" "<<endl; 
     
     cout<<"Geometry Calculator"<<endl;
     
     cout<<"------------------------------------"<<endl; 
     
     cout << " " << endl;
     
     cout << "1.Area of the circle" << endl; 
     
     cout << " " << endl; 
     
     cout << "2.Area of the reactangle " << endl;
     
    cout << " "<< endl; 
    
    cout << "3.Area of the triangle "<< endl; 
    
    cout << " "<<endl; 
    
    cout << "4.Quit"<< endl;
    
    cout << " " << endl;
    
    cout << "Enter your choice from 1 to 4 "<< endl;
    
    cout << " " << endl; 
    
    cin >> choice; 
    
    cout << " " << endl; 
    
    
    
    switch(choice)
        {
        
        case CIRCLE_CHOICE:
        
        cout <<"please enter the radius of the circle"<<endl;
        
        cout << " "<< endl; 
        
        cin>> radius; 
        
        cout << " " << endl; 
        
            if(radius<0){
                
                cout <<"invalid number please try again"<< endl;
                
                cin >> radius;
            
                cout << " " << endl; 
                
            }
            
        area = PI * pow(radius,2);
        
        cout << "The area of the circle is: "<< area << " sq m2" <<endl;
        
        break;
        
        case RECTANGLE_CHOICE:
        
        cout << "please enter the length of the rectangle"<<endl; 
        
        cout << " " <<endl; 
        
        cin >> length; 
            
            if(length<0){
                
                cout << "invalid number please try again" << endl;
                
                cin >> length; 
                
            }
            
        cout << "please enter the width of the rectangle"<< endl;
        
        cout << " " <<endl; 
        
        cin >> width; 
        
            if(width<0){
                
                cout << " " << endl;
                
                cout << "invalid number please try again"<<endl;
                
                cout << " " <<endl; 
                
                cin>> width;
                
            }
            
        area = length * width; 
        
        cout << "the rectangle area is : " << area << " sq units"; 
        
        break; 
        
        case TRIANGLE_CHOICE:
        
        cout << "Please enter the base of the triangle" << endl;
        
        
        cout << " " <<endl; 
        
        cin>>base; 
        
            if(base<0){
                cout << "invalid number please try again"<< endl;
            
                cout << " " <<endl; 
            
                cin >> base; 
            }
            
        cout << " " <<endl; 
        
        cout << "please enter the base of height of the triangle" << endl; 
        
        cout << " " <<endl; 
        
        cin >> height; 
        
            if(height<0){
                
                cout << "invalid number please try again"<< endl; 
                
                cout << " " <<endl; 
                
                cin >> height;
                
            }
            
        
        cout << " " <<endl; 
        
        area = base* height * 0.5; 
        
        cout << "the triangle area is: " << area << "sq units" << endl;
        
        break;
        
        case QUIT_CHOICE: 
        
        cout << "See you later thanks for using our service" << endl; 
        
        break; 
        
        default: 
        
        cout << " choices are from 1 to 4 please run the program again " << endl;  
        
        }
    
    return 0;  
        
}
