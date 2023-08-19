#pragma once
#include <cstdint>
#include "UDialogueLineRule.hpp"
class UDialogueLineRule_PickCamera_Event;
#pragma pack(push, 1)
class UDialogueLineRule_PickCamera : public UDialogueLineRule {
public:
    TArray<UDialogueLineRule_PickCamera_Event*> Events; // 0x38
    static UDialogueLineRule_PickCamera* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
