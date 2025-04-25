int numberOfEmployeesWhoMetTarget(int* hours, int h, int target) {
    int workers = 0;
    for (int i = 0; i < h; i++) {
        if (hours[i] >= target) {
            workers++;
        }
    }
    return workers;
}