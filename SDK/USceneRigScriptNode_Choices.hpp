#pragma once
#include <cstdint>
#include "FSceneRigScriptChoice.hpp"
#include "USceneRigScriptNode.hpp"
#pragma pack(push, 1)
class USceneRigScriptNode_Choices : public USceneRigScriptNode {
public:
    TArray<FSceneRigScriptChoice> Choices; // 0x40
    int32_t CurrentChoice; // 0x50
    char pad_54[0x4];
    static USceneRigScriptNode_Choices* StaticClass();
}; // Size: 0x58
#pragma pack(pop)
