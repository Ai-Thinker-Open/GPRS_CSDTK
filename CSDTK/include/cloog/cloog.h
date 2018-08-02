
   /**-------------------------------------------------------------------**
    **                               CLooG                               **
    **-------------------------------------------------------------------**
    **                              cloog.h                              **
    **-------------------------------------------------------------------**
    **                   First version: july 25th 2002                   **
    **-------------------------------------------------------------------**/


/******************************************************************************
 *               CLooG : the Chunky Loop Generator (experimental)             *
 ******************************************************************************
 *                                                                            *
 * Copyright (C) 2001-2005 Cedric Bastoul                                     *
 *                                                                            *
 * This is free software; you can redistribute it and/or modify it under the  *
 * terms of the GNU General Public License as published by the Free Software  *
 * Foundation; either version 2 of the License, or (at your option) any later *
 * version.                                                                   *
 *                                                                            *
 * This software is distributed in the hope that it will be useful, but       *
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY *
 * or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License   *
 * for more details.                                                          *
 *                                                                            *
 * You should have received a copy of the GNU General Public License along    *
 * with software; if not, write to the Free Software Foundation, Inc.,        *
 * 59 Temple Place, Suite 330, Boston, MA  02111-1307 USA                     *
 *                                                                            *
 * CLooG, the Chunky Loop Generator                                           *
 * Written by Cedric Bastoul, Cedric.Bastoul@inria.fr                         *
 *                                                                            *
 ******************************************************************************/

/******************************************************************************
 *  THIS FILE HAS BEEN AUTOMATICALLY GENERATED FROM clooh.h.in BY configure   *
 ******************************************************************************/

#ifndef CLOOG_H
#define CLOOG_H
#include "cloog-config.h"
#ifdef CLOOG_PPL_BACKEND
# define GNUMP
# include<cloog/ppl_backend.h>
#else
# include <polylib/missing.h>
# include<cloog/polylib_backend.h>
#endif

/******************************************************************************
 *                             CLOOG GMP MACROS                               *
 ******************************************************************************/
#ifdef GNUMP
#define value_init_c(val)              { mpz_init((val)) ; \
                                       }
#define value_clear_c(val)             { mpz_clear((val)) ; \
                                       }
#define value_sprint(Dst,fmt,val)      { char * str ; \
                                         str = mpz_get_str(0,10,(val)) ; \
                                         sprintf((Dst),(fmt),str) ; \
                                         free(str) ; \
                                       }
#define value_eq_si(v1,i2)             (mpz_cmp_si((v1),(i2)) == 0)
#define value_ne_si(v1,i2)             (mpz_cmp_si((v1),(i2)) != 0)
#define value_gt_si(v1,i2)             (mpz_cmp_si((v1),(i2)) > 0)
#define value_lt_si(v1,i2)             (mpz_cmp_si((v1),(i2)) < 0)
#define value_multiply_si(ref,v1,i2)   (mpz_mul_si((ref),(v1),(i2)))


/******************************************************************************
 *                          CLOOG BASIC TYPES MACROS                          *
 ******************************************************************************/
#else
#define value_init_c(val)              ((val) = 0)
#define value_clear_c(val)             ((val) = 0)
#define value_sprint(Dst,fmt,val)      (sprintf((Dst),(fmt),(val)))
#define value_eq_si(v1,i2)             ((v1) == (i2))
#define value_ne_si(v1,i2)             ((v1) != (i2))
#define value_gt_si(v1,i2)             ((v1) > (i2))
#define value_lt_si(v1,i2)             ((v1) < (i2))
#define value_multiply_si(ref,v1,i2)   ((ref) = value_mult((v1),(i2)))
#endif

#ifndef value_subtract
#define value_subtract value_substract
#endif


#include <cloog/version.h>
#include <cloog/options.h>
#include <cloog/domain.h>
#include <cloog/statement.h>
#include <cloog/block.h>
#include <cloog/names.h>
#include <cloog/loop.h>
#include <cloog/program.h>
#include <cloog/clast.h>
#include <cloog/pprint.h>

#endif /* !CLOOG_H */
