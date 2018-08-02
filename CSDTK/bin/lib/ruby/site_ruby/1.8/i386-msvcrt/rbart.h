/* -*- c-file-style: "ruby"; indent-tabs-mode: nil -*- */
/**********************************************************************

  rbart.h - header file for Art module of ruby

  $Author: mutoh $
  $Date: 2005/10/09 18:49:17 $

  Copyright (C) 2004,2005  Ruby-GNOME2 Project
  Copyright (C) 2002,2003  KUBO Takehiro <kubo@jiubao.org>

**********************************************************************/

#ifndef _RBART_H_included
#define _RBART_H_included
#include <libart_lgpl/libart.h>
#include <libart_lgpl/libart-features.h>
#include <ruby.h>

#ifndef ULONG2NUM
#define ULONG2NUM UINT2NUM
#endif

extern VALUE artAffine;
extern VALUE artSVP;
extern VALUE artBpath;
extern VALUE artVpath;
extern VALUE artVpathDash;
extern VALUE artCanvas;
extern VALUE artDRect;
extern VALUE artIRect;
extern VALUE artUta;

/*
 * For other libraries
 */
extern double *get_art_affine(VALUE);
extern VALUE make_art_affine(double[6]);

extern ArtSVP *get_art_svp(VALUE);
extern VALUE make_art_svp(ArtSVP *);

extern ArtBpath *get_art_bpath(VALUE);
extern VALUE make_art_bpath(ArtBpath *);

extern ArtVpath *get_art_vpath(VALUE);
extern VALUE make_art_vpath(ArtVpath *);

extern ArtVpathDash *get_art_vpath_dash(VALUE);
extern VALUE make_art_vpath_dash(ArtVpathDash *);

extern ArtDRect *get_art_drect(VALUE);
extern VALUE make_art_drect(ArtDRect *);

extern ArtIRect *get_art_irect(VALUE);
extern VALUE make_art_irect(ArtIRect *);

extern ArtUta *get_art_uta(VALUE);
extern VALUE make_art_uta(ArtUta *);

/*
 * Internal usage
 */
extern void Init_art_affine(VALUE);
extern void Init_art_svp(VALUE);
extern void Init_art_bpath(VALUE);
extern void Init_art_vpath(VALUE);
extern void Init_art_vpathdash(VALUE);
extern void Init_art_canvas(VALUE);
extern void Init_art_rect(VALUE);
extern void Init_art_uta(VALUE);

#ifndef HAVE_OBJECT_ALLOCATE
extern VALUE rbart_s_new(int, VALUE*, VALUE);
#endif
extern void rbart_init_func(VALUE, void*);
#define RBART_INIT_FUNC(klass) rbart_init_func(klass, NULL)
#define RBART_INIT_FUNC2(klass, func) rbart_init_func(klass, func)

#endif /* ! _RBART_H_included */
