static int topbar = 1;
static const char* fonts[] = { "SauceCodePro Nerd Font Mono:pixelsize=24:antialias=true:autohint=true" };
static const char* prompt = NULL;
static const char* colors[SchemeLast][2] = {
  [SchemeNorm] = { "#000000", "#fafafa" },
  [SchemeSel] = { "#000000", "#50a14f" },
  [SchemeOut] = { "#000000", "#00ffff" },
};
static unsigned int lines = 0;
static const char worddelimiters[] = " ";
