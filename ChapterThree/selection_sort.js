const selectioSort = (arr) => {
  for (let i = 0; i < arr.length - 1; i++) {
    let smallest = i;
    for (let j = i + 1; j < arr.length; j++) {
      if (arr[j] < arr[smallest]) {
        smallest = j;
      }
    }

    let tmp = arr[i];
    arr[i] = arr[smallest];
    arr[smallest] = tmp;
  }
};

const arr = [3, 2, 4, 1, 8, 6, 9, 7];
selectioSort(arr);
process.stdout.write("[");
for (let index = 0; index < arr.length; index++) {
  process.stdout.write(`${arr[index]}`);
  if (index < arr.length - 1) {
    process.stdout.write(",");
  }
}
process.stdout.write("]");
