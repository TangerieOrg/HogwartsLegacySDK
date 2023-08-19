#pragma once
#include <cstdint>
#include "USceneRigScriptNode.hpp"
#pragma pack(push, 1)
class USceneRigScriptNode_ChoicePreview : public USceneRigScriptNode {
public:
    FName DialogueID; // 0x40
    FName CharacterID; // 0x48
    FString EnglishScriptText; // 0x50
    static USceneRigScriptNode_ChoicePreview* StaticClass();
}; // Size: 0x60
#pragma pack(pop)
