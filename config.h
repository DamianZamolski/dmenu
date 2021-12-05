static int topbar = 1;   
static const char *fonts[] = { "Source Code Pro:size=16" };
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	[SchemeNorm] = { "#383a42", "#fafafa" },
	[SchemeSel] = { "#383a42", "#50a14f" },
	[SchemeOut] = { "#000000", "#00ffff" },
};
static unsigned int lines      = 0;
static const char worddelimiters[] = " ";
