

float getaverage(int score[],int length);

float getaverage(int score[],int length){
	double total;
	for(int i = 0;i<length;i++){
		total+=score[i];	
				}
				
	return total/length;		
	}
	

