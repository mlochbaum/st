#define TAB 8
#define TNAME "st-256color"
#define XFT_FONT "monospace-11"
#define BORDER 2
#define SHELL "/bin/sh"

/* Terminal colors (16 first used in escape sequence) */
static const char *colorname[] = {
  "#000000",
  "#A62131",
  "#58B06C",
  "#A39E49",
  "#2B2B73",
  "#963C7B",
  "#438EAB",
  "#C4C4C4",

  "#666666",
  "#CF6171",
  "#55C274",
  "#F0D948",
  "#5375F2",
  "#E084B4",
  "#65BECF",
  "#FFFFFF",

  [255] = 0,

  "#070712",
  "#C4C4C4",
  "#555555"
};

/* Default colors (colorname index)
   foreground, background, cursor   */
#define DefaultFG  7
#define DefaultBG  256
#define DefaultCS  257
#define DefaultUCS 258

/* Special keys (change & recompile st.info accordingly)
   Keep in mind that kpress() in st.c hardcodes some keys.

   Mask value:
   * Use XK_ANY_MOD to match the key no matter modifiers state
   * Use XK_NO_MOD to match the key alone (no modifiers)

      key,        mask,  output */
static Key key[] = {
  { XK_BackSpace, XK_NO_MOD, "\177" },
  { XK_Insert,    XK_NO_MOD, "\033[2~" },
  { XK_Delete,    XK_NO_MOD, "\033[3~" },
  { XK_Home,      XK_NO_MOD, "\033[1~" },
  { XK_End,       XK_NO_MOD, "\033[4~" },
  { XK_Prior,     XK_NO_MOD, "\033[5~" },
  { XK_Next,      XK_NO_MOD, "\033[6~" },
  { XK_F1,        XK_NO_MOD, "\033OP"   },
  { XK_F2,        XK_NO_MOD, "\033OQ"   },
  { XK_F3,        XK_NO_MOD, "\033OR"   },
  { XK_F4,        XK_NO_MOD, "\033OS"   },
  { XK_F5,        XK_NO_MOD, "\033[15~" },
  { XK_F6,        XK_NO_MOD, "\033[17~" },
  { XK_F7,        XK_NO_MOD, "\033[18~" },
  { XK_F8,        XK_NO_MOD, "\033[19~" },
  { XK_F9,        XK_NO_MOD, "\033[20~" },
  { XK_F10,       XK_NO_MOD, "\033[21~" },
  { XK_F11,       XK_NO_MOD, "\033[23~" },
  { XK_F12,       XK_NO_MOD, "\033[24~" },
};

/* Line drawing characters (sometime specific to each font...) */
static char gfx[] = {
  ['f'] = 'o',
  ['g'] = '+',
  ['i'] = '#',
  [255] = 0,
};

/* double-click timeout (in milliseconds) between clicks for selection */
#define DOUBLECLICK_TIMEOUT 300
#define TRIPLECLICK_TIMEOUT (2*DOUBLECLICK_TIMEOUT)
