void copyNonNeg (int data[], int size, int nonNeg[]);

void copyNonNeg(int data[], int size, int nonNeg[]){
    int i = 0;

    while(i < size){
        if(data[i] < 0){
            nonNeg[i] = 0;
        } else{
            nonNeg[i] = data[i];
        }
        i++;
    }
}