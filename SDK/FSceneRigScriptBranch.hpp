#pragma once
#include <cstdint>
class UScriptConditionProvider;
class USceneRigScriptNode;
#pragma pack(push, 1)
struct FSceneRigScriptBranch {
    UScriptConditionProvider* Condition; // 0x0
    USceneRigScriptNode* Script; // 0x8
}; // Size: 0x10
#pragma pack(pop)
