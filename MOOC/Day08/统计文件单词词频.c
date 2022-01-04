int main() {
  int TableSize = 10000;
  int wordcount = 0, length;
  HashTable H;
  ElementType word;
  FILE *fp;
  char document[30] = "filename.txt";
  H = InitializeTable(TableSize);
  if ((fp = fopen(document, "r")) == NULL) FatalError("Faile to open files\n");
  while (!feof(fp)) {
    length = GetAWord(fp, word);
    if (length > 3) {
      wordcount++;
      InsertAndCount(word, H);
    }
  }
  fclose(fp);
  printf("there are total %d word", wordcount);
  Show(H, 10.0 / 100);  //显示词频前10%的所有单词
  DestroyTable(H);
  return 0;
}