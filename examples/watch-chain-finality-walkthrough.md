# Watch Chain Finality Scope Walkthrough

This note is the quickest way to read the extra review model in `watch-chain-finality-scope`.

| Case | Focus | Score | Lane |
| --- | --- | ---: | --- |
| baseline | event finality | 144 | ship |
| stress | nonce pressure | 198 | ship |
| edge | settlement risk | 167 | ship |
| recovery | proof depth | 192 | ship |
| stale | event finality | 139 | watch |

Start with `stress` and `stale`. They create the widest contrast in this repository's fixture set, which makes them better review anchors than the middle cases.

The useful comparison is `nonce pressure` against `event finality`, not the raw score alone.
