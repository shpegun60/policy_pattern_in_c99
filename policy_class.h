#ifndef __POLICY_CLASS_H__
#define __POLICY_CLASS_H__

typedef struct {
    void (*fooo)(void);
    void (*fooo_fill)(void* const);
    void (*fooo_print)(const void* const);
} policy_II;


typedef struct {
    // i-face
    policy_II II;
#if !defined(POLICY_ENA)

#elif POLICY_ENA == 1
    double a;
#elif POLICY_ENA == 2
    int b;
#else
    int c;
#endif /* POLICY_ENA */
} policy_t;

#endif /* __POLICY_CLASS_H__ */
