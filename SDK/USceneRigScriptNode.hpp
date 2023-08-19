#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class USceneRigScriptNode : public UObject {
public:
    TArray<USceneRigScriptNode*> PreviousNodes; // 0x28
    USceneRigScriptNode* NextNode; // 0x38
    static USceneRigScriptNode* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
