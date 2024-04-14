#include "policy_use_3.h"
#include <stdlib.h>

#ifdef POLICY_ENA
#   undef POLICY_ENA
#endif /* POLICY_ENA */
#   define POLICY_ENA 0
#include "policy.h"

void* policy_3_new(void)
{
    policy_t* self = malloc(sizeof(policy_t));

    if(self) {
        policy_3_init(self);
    }
    return self;
}

void policy_3_init(void* self)
{
    policy_init(self);
}

void policy_use_3(void* self)
{
    policy_t* const dta = self;
    dta->c = 0;
    fooo();
    fooo_fill(self);
    fooo_print(self);

    printf("policy 3 ----------------\t\n");
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
