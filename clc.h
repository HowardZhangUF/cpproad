 class circle{
public: 
		int radius;
		int height;
		double area;
		double girth;
		double volume;
		double getgirth(){
			return radius * 2 * 3.14159;
		}
		int compare(circle c){
			if(radius>c.radius){
				return 1;
			}else if(radius == c.radius){
				return 0;
			}else{
				return -1;
			}
		
		}	
		int compare1(circle * pc){
			if(radius>pc->radius){
				return 1;
			}else if(radius == pc->radius){
				return 0;
			}else{
				return -1;
			}
		
		}
		
		int compare2(circle & pc){
			if(radius>pc.radius){
				return 1;
			}else if(radius == pc.radius){
				return 0;
			}else{
				return -1;
			}
			
		}
		
		int compare3(circle *& pc){
			if(radius>pc->radius){
				return 1;
			}else if(radius == pc->radius){
				return 0;
			}else{
				return -1;
			}
			
		}
		
		circle copy(){
			circle c;
			c.radius = radius;
			return c;
		}
		void copy2(circle * pc){
			pc->radius = radius;
			
		}
		circle * copy3(circle *pc){
			
			pc->radius = radius;
			return pc;
		}
		
		circle & copy4(circle & c){
			c.radius = radius;
			return c;
		} 
		circle *& copy5(circle *& c){
			c->radius = radius;
			return c;
		}
};
