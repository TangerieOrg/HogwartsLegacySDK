#pragma once
#include <cstdint>
#include "FTableRowBase.hpp"
#pragma pack(push, 1)
struct FSceneAction_PlayBinkMedia_SubtitleLine : public FTableRowBase {
    FString Key; // 0x8
    float StartTime; // 0x18
    float EndTime; // 0x1c
}; // Size: 0x20
#pragma pack(pop)
