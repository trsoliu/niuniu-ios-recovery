# ADR 0001: Keep recovered analysis distinct from buildable source

Status: accepted for this export

The operator supplied one personal IPA and authorized recovery and publication to their GitHub account. The original Xcode project is unavailable. The recovery must preserve what the binary actually establishes without inventing original method implementations or claiming TestFlight readiness.

Use REA 6.5.0 with local Ghidra 12.1.4 for method pseudocode. Retain the source IPA digest and method addresses as provenance. Extract Objective-C declarations and raw type encodings from runtime metadata. Scope business/UI candidates explicitly; third-party dependencies remain named dependencies rather than a claim of original source ownership.

Publish only a reviewed private repository containing recovery tools, recovered declarations, pseudocode, scoped resources, inventories and limitations. Exclude the original IPA, executable libraries, signing profiles, keys, device/account records, local paths and raw diagnostic logs. User confirmed personal/non-company scope and authorization to publish. No company workspace is an input.

Pseudocode is not a compilable Objective-C project. A future native rebuild must implement and verify missing logic and dependency integrations using a supported SDK before any TestFlight submission. SDK metadata edits and a signed old executable do not constitute that rebuild.
