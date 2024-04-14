#include "policy_use_2.h"
#include <stdlib.h>

#ifdef POLICY_ENA
#   undef POLICY_ENA
#endif /* POLICY_ENA */
#   define POLICY_ENA 1
#include "policy.h"

void* policy_2_new(void)
{
    policy_t* self = malloc(sizeof(policy_t));

    if(self) {
        policy_2_init(self);
    }
    return self;
}

void policy_2_init(void* self)
{
    policy_t* const dta = self;
    dta->a = 0;
    fooo_fill(self);
    policy_init(self);
}

void policy_use_2(void* self)
{
    policy_t* const dta = self;
    fooo();

    fooo_print(self);

    printf("policy 2 ----------------\t\n");
    printf("fooo address = %d\t\n", (unsigned int)fooo);
    printf("fooo_fill address = %d\t\n", (unsigned int)fooo_fill);
    printf("fooo_print address = %d\t\n", (unsigned int)fooo_print);
    printf("\t\n");
    printf("dta_3.fooo = %d\t\n", (unsigned int)dta->II.fooo);
    printf("dta_3.fooo_fill address = %d\t\n", (unsigned int)dta->II.fooo_fill);
    printf("dta_3.fooo_print address = %d\t\n", (unsigned int)dta->II.fooo_print);
    printf("\t\n");

    fflush(stdout);
}

