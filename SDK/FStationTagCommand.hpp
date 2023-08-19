#pragma once
#include <cstdint>
#include "FBaseTagCommand.hpp"
#pragma pack(push, 1)
struct FStationTagCommand : public FBaseTagCommand {
    char pad_1[0x7];
    int64_t UUID_AIPath; // 0x8
    int32_t FromPathPointIndex; // 0x10
    float Probability; // 0x14
    FName SiteLocation; // 0x18
}; // Size: 0x20
#pragma pack(pop)
