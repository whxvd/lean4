This fork of [Lean 4](https://github.com/leanprover/lean4) provides the following modifications on top of the upstream [`releases/v4.32.0`](https://github.com/leanprover/lean4/tree/releases/v4.32.0) branch:

+ Minimize and adapt CI to my (very manual) workflow
+ Rebase [Robin Arnez](https://github.com/Rob23oba)'s parser tracing PR [lean4#13792](https://github.com/leanprover/lean4/pull/13792) and update stage0
+ Add `FlattenBehavior` to `MessageData.group`, just as `Format.group` has
