#pragma once
#include <cstdint>
#include "FRenderSettingsPPProbesToneMapping.hpp"
#pragma pack(push, 1)
struct FRenderSettingsPPProbes {
    FName Name; // 0x0
    FRenderSettingsPPProbesToneMapping ToneMapping; // 0x8
}; // Size: 0x18
#pragma pack(pop)
