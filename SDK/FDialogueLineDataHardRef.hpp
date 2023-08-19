#pragma once
#include <cstdint>
#include "FDialogueLineData.hpp"
class UAnimSequence;
#pragma pack(push, 1)
struct FDialogueLineDataHardRef : public FDialogueLineData {
    UAnimSequence* DialogueLineAnim; // 0x28
}; // Size: 0x30
#pragma pack(pop)
