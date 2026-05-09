void swap(int data[], int swapper, int indexer) {
    int temp = data[swapper];
    data[swapper] = data[indexer];
    data[indexer] = temp;
}

int split(int data[], int low, int high) {
    int pivot = data[high];
    int swapper = low - 1;
    int indexer = low;

    while (indexer < high) {
        if (data[indexer] < pivot) {
            swapper++;
            swap(data, swapper, indexer);
        }
        indexer++;
    }
    swap(data, swapper + 1, high);
    return swapper + 1;
}

void quickSort(int data[], int low, int high) {
    if (low >= high) {
        return;
    }
    int pivotIndex = split(data, low, high);
    quickSort(data, low, pivotIndex - 1);
    quickSort(data, pivotIndex + 1, high);
}