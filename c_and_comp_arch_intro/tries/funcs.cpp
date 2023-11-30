typedef struct {
    int x;
    int y;
} Point;

void add_one(int* p) {
    *p = *p + 1;
}

void print_arr(int *arr, int l) {
    printf("Array: ");
    for (int i = 0; i < l; ++i) {
        if (i == l - 1) {
            printf("%d;", arr[i]);
        } else {
            printf("%d, ", arr[i]);
        }

    }
    printf("\n");
}

void hello() {
    printf("Hello!\n");
    printf("///////////////////////////////////////////\n");

    int y = 3;
    add_one(&y);
    printf("y = %d\n", y);
    printf("///////////////////////////////////////////\n");

    Point p1;
    Point p2;
    Point* paddr = &p1;

    p1.x = 1;
    p1.y = 2;

    printf("p1.y = %d\n", p1.y);
    printf("p1.y = %d\n", paddr->y);
    printf("///////////////////////////////////////////\n");

    int x[] = {2, 4, 6, 8};
    print_arr(x, 4);
    int *p = x;
    int **pp = &p;
    (*pp)++;
    (**pp)++;
    printf("%d\n", *p);
    print_arr(x, 4);
    printf("///////////////////////////////////////////\n");
}
