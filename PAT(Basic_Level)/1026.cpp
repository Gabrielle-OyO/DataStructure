#include <iostream>
using namespace std;
int main() {
  int a, b;
  cin >> a >> b;
  int n = ((b - a) + 50) / 100;
  int hour = n / 3600;
  n = n % 3600;
  int minute = n / 60, second = n % 60;
  printf("%02d:%02d:%02d", hour, minute, second);
  return 0;
}

/*
分析：n表示运⾏的时间，n为(b-a)/100，因为常数CLK_TCK为100，题⽬要求不⾜1秒的时间四舍五⼊
到秒，所以先给(b-a)加上50，这样如果(b-a)/100的⼩数位⼤于等于0.5则会进位，⼩于等于0.5则会舍
去，所以n = ((b – a) + 50) /
100，因为要把秒数n化为时:分:秒的格式，⼀⼩时等于3600秒，所以hour = n /
3600，此时将n % 3600即为剩下的分钟和秒数；因为⼀分钟等于60秒，所以minute = n /
60， 则n %
60剩下的就是秒，最后⽤printf的%02d格式⾃动为不⾜2位的整数在前⾯补上0，保证能够按照
*/