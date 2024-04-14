#include "app_logic.h"
#include "policy_use_3.h"
#include "policy_use_2.h"
#include "policy_class.h"
#include "policy.h"

#include <stdio.h>

void app_main()
{
    policy_t* policy3 = policy_3_new();
    policy_use_3(policy3);
    printf("policy3 print--------------\t\n");
    policy3->II.fooo_print(policy3);
    printf("\t\n");

    policy_t* policy2 = policy_2_new();
    policy_use_2(policy2);
    printf("policy2 print--------------\t\n");
    policy2->II.fooo_print(policy2);
    printf("\t\n");

    // dta_3.fooo();
    // dta_3.fooo_fill(&dta_3);
    // dta_3.fooo_print(&dta_3);

    //printf("app_main: fooo_fill address = %d\t\n\n", (unsigned int)dta_3.fooo_fill);

    policy2->II.fooo();

    // nie wolno tak robic kurwo!!!!
    fooo(); //output w dupie cie mam kurwo!!!
    //!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!


    fflush(stdout);
}
