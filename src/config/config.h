#ifndef CONFIG_H
#define CONFIG_H
/* def */
#define TERMINAL "st"

#ifndef STDDEF_H
#include <stddef.h>
#endif
#ifndef ARCHY_DWM_H
#include "../archy_dwm.h"
#endif
#include "keys.h"
#include "mouse.h"

/* appearance */
static const unsigned int borderpx = 1; /* border pixel of windows */
static const unsigned int gappx = 3;    /* gaps size between windows */
static const unsigned int snap = 32;    /* snap pixel */
static const unsigned int systraypinning =
    0; /* 0: sloppy systray follows selected monitor, >0: pin systray to monitor
          X */
static const unsigned int systrayonleft =
    -1; /* 0: systray in the right corner, >0: systray on left of status text */
static const unsigned int systrayspacing = 2; /* systray spacing */
static const int systraypinningfailfirst =
    1; /* 1: if pinning fails, display systray on the first monitor, False:
          display systray on the last monitor*/
static const int showsystray = 1;    /* 0 means no systray */
static const int showbar = 1;        /* 0 means no bar */
static const int topbar = 0;         /* 0 means bottom bar */
static const int splitstatus = 1;    /* 1 for split status items */
static const char *splitdelim = ";"; /* Character used for separating status */
static const char *fonts[] = {
    "monospace:size=6", "Noto Color Emoji:size=6"};
static const char dmenufont[] = "monospace:size=7";

/* Colors - Gruvbox dark hard */
static const char norm_fg[] = "#D5C4A1";     // light2
static const char norm_bg[] = "#1D2021";     // dark0_hard
static const char norm_border[] = "#504945"; // dark2

static const char sel_fg[] = "#D79921";     // neutral_yellow
static const char sel_bg[] = "#1D2021";     // dark0_hard
static const char sel_border[] = "#7C6F64"; // dark4

static const char urg_fg[] = "#D5C4A1";     // light4
static const char urg_bg[] = "#FB4934";     // bright_red
static const char urg_border[] = "#458588"; // neutral_blue

static const char *colors[][3] = {
    /*               fg           bg         border                         */
    [SchemeNorm] = {norm_fg, norm_bg, norm_border}, // unfocused wins
    [SchemeSel] = {sel_fg, sel_bg, sel_border},     // the focused win
    [SchemeUrg] = {urg_fg, urg_bg, urg_border},
};

// Autostart programs
static const char *const autostart[] = {
    // Start my build of slstatus
    "archy-slstatus", NULL, NULL /* terminate */
};

/* tagging */
// static const char *tags[] = { "I", "II", "III", "IV", "V", "VI", "VII",
// "VIII", "IX" }; static const char *tags[] = { "", "", "", "",
// "", "", "", "", "" };
static const char *tags[] = {"www", "dev", "sys",  "chat", "lab",
                             "vid", "mus", "vbox", "gfx",  ";"};

static const Rule rules[] = {
    /* xprop(1):
     *	WM_CLASS(STRING) = instance, class
     *	WM_NAME(STRING) = title
     *	It's just a bitwise shift. Binary of 5 is 101, then you shift it left on
     *6 and get 101000000, which means 7 and 9 in dwm ( because 1-s are on 7 and
     *9 position from right).
     *	https://www.reddit.com/r/dwm/comments/f2omo9/comment/fjr93yt/?utm_source=share&utm_medium=web2x&context=3
     */
    /* class      instance    title       tags mask     isfloating   monitor */
    {"Gimp", NULL, NULL, 9 << 8, 1, -1}, // 0100000000 (gfx tag)
    {"Tor Browser", "Navigator", NULL, 9 << 9, 0,
     -1}, // Open it in tag 10 (9 in array) (; tag)
    {"KeePassXC", "keepassxc", NULL, 9 << 9, 0, -1}, // 1000000000 (; tag)
    {"firefoxdeveloperedition", "Navigator", NULL, 1 << 0, 0,
     -1}, // 0000000001 (www tag)
    //{"discord", NULL, NULL, 4 << 1, 0, -1}, // 0000001000 (chat tag)
    {"Virt-manager", "virt-manager", NULL, 9 << 7, 0,
     -1}, // 0010000000 (vbox tag)
    {"VirtualBox Manager", "VirtualBox Manager", NULL, 9 << 7, 0,
     1},                                               // 0010000000 (vbox tag)
    {NULL, "open.spotify.com", NULL, 8 << 3, 0, -1},   // 0001000000 (mus tag)
    {"cmus", NULL, NULL, 8 << 3, 0, -1},               // 0001000000 (mus tag)
    {"jetbrains-clion", NULL, NULL, 1 << 1, 0, -1},    // 0000000010 (dev tag)
    {"jetbrains-idea", NULL, NULL, 1 << 1, 0, -1},     // 0000000010 (dev tag)
    {"jetbrains-pycharm", NULL, NULL, 1 << 1, 0, -1},  // 0000000010 (dev tag)
    {"jetbrains-studio", NULL, NULL, 1 << 1, 0, -1},   // 0000000010 (dev tag)
    {"jetbrains-webstorm", NULL, NULL, 1 << 1, 0, -1}, // 0000000010 (dev tag)
    {"jetbrains-phpstorm", NULL, NULL, 1 << 1, 0, -1}, // 0000000010 (dev tag)
    {"jetbrains-rubymine", NULL, NULL, 1 << 1, 0, -1}, // 0000000010 (dev tag)
    {"jetbrains-goland", NULL, NULL, 1 << 1, 0, -1},   // 0000000010 (dev tag)
    {"jetbrains-datagrip", NULL, NULL, 1 << 1, 0, -1}, // 0000000010 (dev tag)
    {"PacketTracer", NULL, NULL, 1 << 4, 0, -1}        // 0000010000 (lab tag)
};

/* layout(s) */
static const float mfact = 0.60f; /* factor of master area size [0.05..0.95] */
static const int nmaster = 1;     /* number of clients in master area */
static const int resizehints =
    1; /* 1 means respect size hints in tiled resizals */
static const int lockfullscreen =
    1; /* 1 will force focus on the fullscreen window */

#endif // CONFIG_H
