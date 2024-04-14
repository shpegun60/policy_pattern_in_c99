#ifndef __POLICY_H__
#define __POLICY_H__ 1

#include <stdio.h>
#include "policy_class.h"

static void fooo(void)
{
#if !defined(POLICY_ENA)
    printf("W dupie cie mam kurwo!!!\t\n");
#elif POLICY_ENA == 1
    printf("POLICY 1!!!\t\n");
#elif POLICY_ENA == 2
    printf("POLICY 2!!!\t\n");
#else
    printf("POLICY 0!!!\t\n");
#endif
    fflush(stdout);
}

static void fooo_fill(void* const self)
{
    policy_t* const dta = (policy_t* const)self;

#if !defined(POLICY_ENA)
    printf("W dupie cie mam kurwo!!!\t\n");
#elif POLICY_ENA == 1
    dta->a = 1;
#elif POLICY_ENA == 2
    dta->b = 2;
#else
    dta->c = 3;
#endif
    (void)dta;
}

static void fooo_print(const void* const self)
{
    policy_t* const dta = (policy_t* const)self;

#if !defined(POLICY_ENA)
    printf("W dupie cie mam kurwo!!!\t\n");
#elif POLICY_ENA == 1
    printf("dta->a = %f\t\n", dta->a);
#elif POLICY_ENA == 2
    printf("dta->b = %d\t\n", dta->b);
#else
    printf("dta->c = %d\t\n", dta->c);
#endif

    (void)dta;
    fflush(stdout);
}

//---------------------------------------------------------------------
static inline void policy_init(policy_t* const self)
{
    self->II.fooo = fooo;
    self->II.fooo_fill = fooo_fill;
    self->II.fooo_print = fooo_print;
}
#endif /* __POLICY_H__ */
