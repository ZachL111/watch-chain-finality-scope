# Field Notes

I would read this project from the data inward: cases first, implementation second.

The domain cases cover `event finality`, `nonce pressure`, `settlement risk`, and `proof depth`. They sit beside the smaller starter fixture so the project has both a compact scoring check and a domain-flavored review check.

The widest spread is between `nonce pressure` and `event finality`, so those are the first two cases I would preserve during a refactor.

The point is not to make the repository bigger. The point is to make the important judgment testable.
