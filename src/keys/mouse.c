//
// Created by anas on 10/31/22.
//

#include "mouse.h"
#include "keys.h"

/* button definitions */
/* click can be ClkTagBar, ClkLtSymbol, ClkStatusText, ClkWinTitle, ClkClientWin, or ClkRootWin */
static Button buttons[] = {
        /* click                event mask      button          function        argument */
        {ClkTagBar,    MODKEY, Button1, tag,            {0}},
        {ClkTagBar,    MODKEY, Button3, toggletag,      {0}},
        {ClkStatusText, 0,     Button2, spawn,          {.v = termcmd}},
        {ClkClientWin, MODKEY, Button1, movemouse,      {0}},
        {ClkClientWin, MODKEY, Button2, togglefloating, {0}},
        {ClkClientWin, MODKEY, Button3, resizemouse,    {0}},
        {ClkTagBar,     0,     Button1, view,           {0}},
        {ClkTagBar,     0,     Button3, toggleview,     {0}},
        {ClkTagBar,    MODKEY, Button1, tag,            {0}},
        {ClkTagBar,    MODKEY, Button3, toggletag,      {0}},
};
