#pragma once
#include <cstdint>
#include "USceneRigScriptNode.hpp"
class UDialogueScriptCommand;
#pragma pack(push, 1)
class USceneRigScriptNode_Dialogue : public USceneRigScriptNode {
public:
    FName DialogueID; // 0x40
    FName CharacterID; // 0x48
    float TimeDelay; // 0x50
    char pad_54[0x4];
    TArray<UDialogueScriptCommand*> Commands; // 0x58
    static USceneRigScriptNode_Dialogue* StaticClass();
}; // Size: 0x68
#pragma pack(pop)
