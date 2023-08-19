#pragma once
#include <cstdint>
#include "UDialogueLineRule_PickCamera_Event.hpp"
#pragma pack(push, 1)
class UDialogueLineRule_PickCamera_DuringPauseEvent : public UDialogueLineRule_PickCamera_Event {
public:
    float DurationThreshold; // 0xb8
    float DurationVariability; // 0xbc
    float ShowBeforePause; // 0xc0
    float ShowBeforePauseVariability; // 0xc4
    float ShowAfterPause; // 0xc8
    float ShowAfterPauseVariability; // 0xcc
    float CombinePausesThreshold; // 0xd0
    float CombinePauseThresholdVariability; // 0xd4
    static UDialogueLineRule_PickCamera_DuringPauseEvent* StaticClass();
}; // Size: 0xd8
#pragma pack(pop)
