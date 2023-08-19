#pragma once
#include <cstdint>
#include "UDialogueLineRule_PickCamera_Event.hpp"
#pragma pack(push, 1)
class UDialogueLineRule_PickCamera_SpeakingActorEvent : public UDialogueLineRule_PickCamera_Event {
public:
    float OffsetFromDialogueLine; // 0xb8
    float SwitchCameraLengthThreshold; // 0xbc
    static UDialogueLineRule_PickCamera_SpeakingActorEvent* StaticClass();
}; // Size: 0xc0
#pragma pack(pop)
