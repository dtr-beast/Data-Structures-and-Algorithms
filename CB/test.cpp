int arr[N * N];
for (int i = 0; i < N; i++) {
    cin >> arr[i];
}

sort(arr, arr + n);
printArray(arr);