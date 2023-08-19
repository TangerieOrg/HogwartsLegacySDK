#pragma once
#include <cstdint>
#include "USceneRigScriptNode.hpp"
#pragma pack(push, 1)
class USceneRigScriptNode_Scene : public USceneRigScriptNode {
public:
    FString SceneText; // 0x40
    USceneRigScriptNode* SceneScript; // 0x50
    static USceneRigScriptNode_Scene* StaticClass();
}; // Size: 0x58
#pragma pack(pop)
