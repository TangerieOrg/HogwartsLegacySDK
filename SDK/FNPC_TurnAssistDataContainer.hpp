#pragma once
#include <cstdint>
#include "ENPC_TurnAssist.hpp"
#include "FNPC_TurnAssistData.hpp"
#pragma pack(push, 1)
struct FNPC_TurnAssistDataContainer {
    ENPC_TurnAssist Mode; // 0x0
    char pad_1[0x3];
    FNPC_TurnAssistData Data; // 0x4
}; // Size: 0xc
#pragma pack(pop)
