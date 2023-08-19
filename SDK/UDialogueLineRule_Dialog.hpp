#pragma once
#include <cstdint>
#include "UDialogueLineRule.hpp"
#pragma pack(push, 1)
class UDialogueLineRule_Dialog : public UDialogueLineRule {
public:
    bool UseSameSpeakerPreAndPostRoll; // 0x38
    bool UseDifferentSpeakerPreAndPostRoll; // 0x39
    char pad_3a[0x2];
    float SameSpeakerDelayBetweenLines; // 0x3c
    float DifferentSpeakerDelayBetweenLines; // 0x40
    float FirstConversationDelay; // 0x44
    float LaterConversationDelay; // 0x48
    bool bEnableDialogueSkipping; // 0x4c
    bool bEnableGameOptions; // 0x4d
    char pad_4e[0x2];
    static UDialogueLineRule_Dialog* StaticClass();
}; // Size: 0x50
#pragma pack(pop)
