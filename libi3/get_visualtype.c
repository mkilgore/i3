/*
 * vim:ts=4:sw=4:expandtab
 *
 * i3 - an improved dynamic tiling window manager
 * © 2009-2011 Michael Stapelberg and contributors (see also: LICENSE)
 *
 */
#include "libi3.h"
#include <xcb/xcb_util.h>

/*
 * Returns the visual type associated with the given screen.
 *
 */
xcb_visualtype_t *get_visualtype_for_screen(xcb_screen_t *screen) {
    return xcb_aux_find_visual_by_id(screen, screen->root_visual);
}

/*
 * Returns the visual type associated with the given depth for the givens creen.
 *
 */
xcb_visualtype_t *get_visualtype_for_depth(xcb_screen_t *screen, uint8_t depth) {
    return xcb_aux_find_visual_by_attrs(screen, -1, depth);
}
