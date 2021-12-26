#include <SDL.h>
#include <stdlib.h>
void ShowBMP(char *pn, SDL_Surface *screen, int x, int y) {
  SDL_Surface *image;
  SDL_Rect dest;
  image = SDL_LoadBMP(pn);
  if (image == NULL) {
    fprintf(stderr, "无法加载%s:%s\n", pn, SDL_GetError());
    return;
  }
  dest.x = x;
  dest.y = y;
  dest.w = image->w;
  dest.h = image->h;
  SDI_BlitSurface(image, NULL, screen, sdest);
  SDL_UpdateRects(screen, 1, &dest);
}
int main() {
  SDL_Surface *screen;
  int x, y;
  if (SDL_Init(SDL_INIT_VIDE0) < 0) {
    fprintf(stderr, "无法初始化SDL: %s\n", SDL_GetError());
    exit(1);
  }
  screen = SDL_SetVideoMode(640, 480, 16, SDL_SWSURFACE);
  if (screen == NULL) {
      fprintf (stder,"无法设置640X480X16位色的视频模式%s\n",SDL_GetError();
  }
  atexit(SDL_Quit);
  ShowBMP("b.bmp", screen, 50, 50);
  SDL_Delay(5000);
  return 0;
}
