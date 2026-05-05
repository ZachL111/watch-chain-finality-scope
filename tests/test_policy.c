#include "policy.h"
#include <assert.h>
#include <string.h>

int main(void) {
    Signal signal_case_1 = {76, 88, 8, 23, 8};
    assert(score_signal(signal_case_1) == 156);
    assert(strcmp(classify_signal(signal_case_1), "review") == 0);
    Signal signal_case_2 = {62, 70, 14, 11, 13};
    assert(score_signal(signal_case_2) == 159);
    assert(strcmp(classify_signal(signal_case_2), "review") == 0);
    Signal signal_case_3 = {106, 79, 19, 22, 12};
    assert(score_signal(signal_case_3) == 187);
    assert(strcmp(classify_signal(signal_case_3), "accept") == 0);
    return 0;
}
