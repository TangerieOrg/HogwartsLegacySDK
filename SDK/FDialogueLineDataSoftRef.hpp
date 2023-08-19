#pragma once
#include <cstdint>
#include "FDialogueLineData.hpp"
#pragma pack(push, 1)
struct FDialogueLineDataSoftRef : public FDialogueLineData {
    char pad_28[0x28];
}; // Size: 0x50
#pragma pack(pop)
