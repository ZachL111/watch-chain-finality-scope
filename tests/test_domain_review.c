#include "domain_review.h"
#include <assert.h>
#include <string.h>

int main(void) {
    DomainReview item = {68, 21, 31, 80};
    assert(domain_review_score(item) == 144);
    assert(strcmp(domain_review_lane(item), "ship") == 0);
    return 0;
}
