#pragma once
#include <cstdint>
#include "AvaAudioDialogueFlags.hpp"
#include "UMultiFX2_Filtered.hpp"
class UAvaAudioDialogueEvent;
#pragma pack(push, 1)
class UMultiFX2_Dialogue : public UMultiFX2_Filtered {
public:
    UAvaAudioDialogueEvent* DialogueEvent; // 0x68
    FString DialogueEventName; // 0x70
    bool bStopWhenAttachedToDestroyed; // 0x80
    AvaAudioDialogueFlags flags; // 0x81
    bool bIgnoreDeactivate; // 0x82
    char pad_83[0x5];
    static UMultiFX2_Dialogue* StaticClass();
}; // Size: 0x88
#pragma pack(pop)
