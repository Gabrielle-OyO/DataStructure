

bool BracketCheck(char *str) {
  InitStack(S);
  int i = 0;
  while (str[i] != '\0') {
    switch (str[i]) {  //左括号入栈
      case '(':
        push(S, '(');
        break;
      case '[':
        push(S, '[');
        break;
      case '{':
        push(S, '{');
        break;
      //遇到右括号
      case ')':
        pop(S, e);
        if (e != '(') return false;
        break;
      case ']':
        pop(S, e);
        if (e != ']') return false;
        break;
      case '}':
        pop(S, e);
        if (e != '}') return false;
        break;
        defualt;
        break;
    }
    i++;
  }
  if (!IsEmpty(S)) {
    printf("括号不匹配\n");
    return false;
  } else {
    printf("括号匹配\n");
    return true;
  }
}