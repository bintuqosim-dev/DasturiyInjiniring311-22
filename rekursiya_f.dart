// Rekursiv funksiya: Ro'yxatdagi barcha sonlarning yig'indisini hisoblash
int yigindiHisoblash(List<int> arr, int n) {
  if (n == 0) {
    return 0;
  }

  return arr[n - 1] + yigindiHisoblash(arr, n - 1);
}

void main() {
  List<int> arr = List<int>.filled(5, 0); 
  arr[0] = 10;
  arr[1] = 20;
  arr[2] = 30;
  arr[3] = 40;
  arr[4] = 100;

  int n = arr.length;
  int yigindi = yigindiHisoblash(arr, n);
  print("Ro'yxatdagi sonlarning yig'indisi: $yigindi");
}