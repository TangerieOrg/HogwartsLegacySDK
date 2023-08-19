#pragma once
#include <cstdint>
#include "UDialogueLineRule_MoveCamera_Event.hpp"
#pragma pack(push, 1)
class UDialogueLineRule_MoveCamera_SpeakingActorStartEvent : public UDialogueLineRule_MoveCamera_Event {
public:
    float OffsetFromDialogueLine; // 0xa8
    float SwitchCameraLengthThreshold; // 0xac
    static UDialogueLineRule_MoveCamera_SpeakingActorStartEvent* StaticClass();
}; // Size: 0xb0
#pragma pack(pop)
