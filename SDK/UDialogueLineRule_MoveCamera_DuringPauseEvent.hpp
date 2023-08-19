#pragma once
#include <cstdint>
#include "UDialogueLineRule_MoveCamera_Event.hpp"
#pragma pack(push, 1)
class UDialogueLineRule_MoveCamera_DuringPauseEvent : public UDialogueLineRule_MoveCamera_Event {
public:
    float DurationThreshold; // 0xa8
    float DurationVariability; // 0xac
    float ShowBeforePause; // 0xb0
    float ShowBeforePauseVariability; // 0xb4
    float ShowAfterPause; // 0xb8
    float ShowAfterPauseVariability; // 0xbc
    float CombinePausesThreshold; // 0xc0
    float CombinePauseThresholdVariability; // 0xc4
    static UDialogueLineRule_MoveCamera_DuringPauseEvent* StaticClass();
}; // Size: 0xc8
#pragma pack(pop)
