# watch-chain-finality-scope

`watch-chain-finality-scope` explores blockchain tooling with a small C codebase and local fixtures. The technical goal is to implement a C blockchain tooling project for finality protocol validation, using framed sample traffic and bounds and ordering tests.

## Problem It Tries To Make Smaller

The project exists to keep a narrow engineering decision visible and testable. For this repo, that decision is how event finality and settlement risk should influence a review result.

## Watch Chain Finality Scope Review Notes

`stress` and `stale` are the cases worth reading first. They show the optimistic and cautious ends of the fixture.

## Working Pieces

- `fixtures/domain_review.csv` adds cases for event finality and nonce pressure.
- `metadata/domain-review.json` records the same cases in structured form.
- `config/review-profile.json` captures the read order and the two review questions.
- `examples/watch-chain-finality-walkthrough.md` walks through the case spread.
- The C code includes a review path for `nonce pressure` and `event finality`.
- `docs/field-notes.md` explains the strongest and weakest cases.

## Design Notes

The fixture data drives the tests. The code stays thin, while `metadata/domain-review.json` and `config/review-profile.json` explain what each case is meant to protect.

The C addition stays small enough to inspect in one sitting.

## Example Run

```powershell
powershell -NoProfile -ExecutionPolicy Bypass -File scripts/verify.ps1
```

## Tests

The verifier is intentionally local. It should fail if the fixture score math, lane assignment, or language-specific test drifts.

## Known Limits

The repository is intentionally scoped to local checks. I would expand it by adding adversarial fixtures before adding features.
