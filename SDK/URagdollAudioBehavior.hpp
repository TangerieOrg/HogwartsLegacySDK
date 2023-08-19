#pragma once
#include <cstdint>
#include "URagdollBehaviorBase.hpp"
class UAvaAudioDialogueEvent;
#pragma pack(push, 1)
class URagdollAudioBehavior : public URagdollBehaviorBase {
public:
    UAvaAudioDialogueEvent* Event; // 0xc0
    bool StopOnExit; // 0xc8
    bool AlwaysInterrupt; // 0xc9
    char pad_ca[0x6];
    TArray<URagdollAudioBehavior*> CanInterruptAudioBehaviors; // 0xd0
    static URagdollAudioBehavior* StaticClass();
}; // Size: 0xe0
#pragma pack(pop)
