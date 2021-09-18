fn selectionSort(arr:[i32]){
    for i in 0..arr.len()-1 {
        let smallest: usize = i;
        for j in i+1..arr.len() {
            if arr[j] < arr[smallest] {
                smallest = j;
            }
        }
        let tmp: i32 = arr[i];
        arr[i] = arr[smallest];
        arr[smallest] = tmp
    }
}

fn main(){
    let xs = [3, 2, 4, 1, 8, 6, 9, 7];
    selectionSort(xs);
    print!("[");
    for elem in xs {
        print!("{},",elem);
    }
    print!("]");
}