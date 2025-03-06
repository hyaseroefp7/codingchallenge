int main() {
  int i = 1;
  char* s = "Hello";
  while(i < 5) {
    printf("%c\n", *s);
    s++;
    i++;
  }
  return 0;
}