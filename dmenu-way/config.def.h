/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom */
static int opacity = 1;                     /* -o  option; if 0, then alpha is disabled */
static int fuzzy = 1;                       /* -F  option; if 0, dmenu doesn't use fuzzy matching */
static int center = 1;                      /* -c  option; if 0, dmenu won't be centered on the screen */
static int min_width = 300;                 /* minimum width when centered */
static const int vertpad = 10;              /* vertical padding of bar */
static const int sidepad = 10;              /* horizontal padding of bar */
/* -fn option overrides fonts[0]; default X11 font or font set */
static char *fonts[] =
{
	"JetBrainsMono:size=20:wight=bold:antialias=true:autohint=true",
};
static char *prompt            = NULL;      /* -p  option; prompt to the left of input field */
static const char *symbol_1 = "<";
static const char *symbol_2 = ">";

static const unsigned int baralpha = 0xd0;
static const unsigned int borderalpha = OPAQUE;
static const unsigned int alphas[][3]      = {
	/*               fg      bg        border     */
	[SchemeNorm] = { OPAQUE, baralpha, borderalpha },
	[SchemeSel]  = { OPAQUE, baralpha, borderalpha },
	[SchemeBorder] = { OPAQUE, OPAQUE, OPAQUE },
	[SchemeMid] = { OPAQUE, baralpha, borderalpha },
	[SchemeSelHighlight] = { OPAQUE, baralpha, borderalpha },
	[SchemeNormHighlight] = { OPAQUE, baralpha, borderalpha },
	[SchemeHp] = { OPAQUE, baralpha, borderalpha },
	[SchemeHover] = { OPAQUE, baralpha, borderalpha },
	[SchemeGreen] = { OPAQUE, baralpha, borderalpha },
	[SchemeRed] = { OPAQUE, baralpha, borderalpha },
	[SchemeYellow] = { OPAQUE, baralpha, borderalpha },
	[SchemeBlue] = { OPAQUE, baralpha, borderalpha },
	[SchemePurple] = { OPAQUE, baralpha, borderalpha },
};

static
char *colors[][2] = {
	/*               fg         bg       */
	[SchemeNorm] = { "#d5c9ab", "#272e33" },
	[SchemeSel]  = { "#272e33", "#a7c080" },
	[SchemeOut]  = { "#272e33", "#7c8377" },
	[SchemeBorder] = { "#a7c080", "#a7c080" },
	[SchemeMid]  = { "#272e33", "#7c8377" },
	[SchemeSelHighlight]  = { "#272e33", "#a7c080" },
	[SchemeNormHighlight] = { "#272e33", "#7c8377" },
	[SchemeHp]   = { "#bbbbbb", "#333333" },
	[SchemeHover]  = { "#ffffff", "#353D4B" },
	[SchemeGreen]  = { "#ffffff", "#52E067" },
	[SchemeRed]    = { "#ffffff", "#e05252" },
	[SchemeYellow] = { "#ffffff", "#e0c452" },
	[SchemeBlue]   = { "#ffffff", "#5280e0" },
	[SchemePurple] = { "#ffffff", "#9952e0" },
};
/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines      = 10;
static unsigned int lineheight = 30;         /* -h option; minimum height of a menu line     */
static unsigned int min_lineheight = 8;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* Size of the window border */
static unsigned int border_width = 5;

