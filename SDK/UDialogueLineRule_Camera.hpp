#pragma once
#include <cstdint>
#include "FDialogLineRule_CameraCharacter.hpp"
#include "UDialogueLineRule.hpp"
class UDialogueLineRule_MoveCamera_Event;
#pragma pack(push, 1)
class UDialogueLineRule_Camera : public UDialogueLineRule {
public:
    char pad_38[0x8];
    TArray<FDialogLineRule_CameraCharacter> Characters; // 0x40
    TArray<UDialogueLineRule_MoveCamera_Event*> Events; // 0x50
    static UDialogueLineRule_Camera* StaticClass();
}; // Size: 0x60
#pragma pack(pop)
