#pragma once
#include <cstdint>
#include "UDialogueLineRule_PickCamera_Event.hpp"
#pragma pack(push, 1)
class UDialogueLineRule_PickCamera_EndingEvent : public UDialogueLineRule_PickCamera_Event {
public:
    bool ForChoicesAtEnd; // 0xb8
    bool ForBeforeEmbeddedSequence; // 0xb9
    char pad_ba[0x2];
    float OffsetFromEnd; // 0xbc
    float MinimumOffsetFromEnd; // 0xc0
    float MinimumPreviousCameraLength; // 0xc4
    static UDialogueLineRule_PickCamera_EndingEvent* StaticClass();
}; // Size: 0xc8
#pragma pack(pop)
