int indexOfSmallest(int data[], int size, int startIndex);
void selectionSort(int data[], int size);


int indexOfSmallest(int data[], int size, int startIndex) {
    int minIndex = startIndex;
    int i = startIndex;

    while(i < size){
        if(data[i] < data[minIndex]){
            minIndex = i;
        }
        i++;
    }

    return minIndex;
}

void selectionSort(int data[], int size){
    int i = 0;
    int smallest;
    int temp;

    while(i < size){
        smallest = indexOfSmallest(data, size, i);
        
        temp = data[i];
        data[i] = data[smallest];
        data[smallest] = temp;

        i++;
    }
}