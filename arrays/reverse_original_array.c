void reverse(int data[], int size) {
    int low_pointer = 0;
    int high_pointer = size - 1;
    int temp;

    while(low_pointer < high_pointer){
        temp = data[low_pointer];
        data[low_pointer] = data[high_pointer];
        data[high_pointer] = temp;

        low_pointer++;
        high_pointer--;
    }
}