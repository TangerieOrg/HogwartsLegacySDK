#pragma once
#include <cstdint>
#include "UDialogueLineRule.hpp"
#pragma pack(push, 1)
class UDialogueLineRule_FacialEmotion : public UDialogueLineRule {
public:
    char pad_38[0x8];
    static UDialogueLineRule_FacialEmotion* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
