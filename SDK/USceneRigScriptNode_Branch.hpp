#pragma once
#include <cstdint>
#include "FSceneRigScriptBranch.hpp"
#include "USceneRigScriptNode.hpp"
#pragma pack(push, 1)
class USceneRigScriptNode_Branch : public USceneRigScriptNode {
public:
    TArray<FSceneRigScriptBranch> Branches; // 0x40
    int32_t CurrentBranch; // 0x50
    bool HasMissmatchingInternalBranches; // 0x54
    char pad_55[0x3];
    static USceneRigScriptNode_Branch* StaticClass();
}; // Size: 0x58
#pragma pack(pop)
