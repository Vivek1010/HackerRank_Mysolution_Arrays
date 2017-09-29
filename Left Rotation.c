int main() {
    int n; 
    int d; 
    scanf("%i %i", &n, &d);
    int *a = malloc(sizeof(int) * n);
    for (int a_i = 0; a_i < n; a_i++) {
       scanf("%i",&a[a_i]);
    }
    int result_size = n;
    //int* result = a; //leftRotation(n,a, d, &result_size);
    for(int result_i = 0; result_i < result_size; result_i++) {
        if(result_i) {
            printf(" ");
        }
        printf("%d", a[(result_i + d)%n]);
    }
    puts("");


    return 0;
}
