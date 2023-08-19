#pragma once
#include <cstdint>
#include "UDialogueLineRule_MoveCamera_Event.hpp"
#pragma pack(push, 1)
class UDialogueLineRule_MoveCamera_EndingEvent : public UDialogueLineRule_MoveCamera_Event {
public:
    bool ForChoicesAtEnd; // 0xa8
    char pad_a9[0x3];
    float OffsetFromEnd; // 0xac
    float MinimumPreviousCameraLength; // 0xb0
    char pad_b4[0x4];
    static UDialogueLineRule_MoveCamera_EndingEvent* StaticClass();
}; // Size: 0xb8
#pragma pack(pop)
