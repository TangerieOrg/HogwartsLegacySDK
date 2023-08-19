#pragma once
#include <cstdint>
#include "UObject.hpp"
class USceneRigScriptNode;
#pragma pack(push, 1)
class USceneRigScript : public UObject {
public:
    USceneRigScriptNode* RootNode; // 0x28
    static USceneRigScript* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
