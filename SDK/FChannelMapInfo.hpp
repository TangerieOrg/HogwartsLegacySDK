#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FChannelMapInfo {
    int32_t ControlIndex; // 0x0
    int32_t TotalChannelIndex; // 0x4
    int32_t ChannelIndex; // 0x8
    int32_t ParentControlIndex; // 0xc
    FName ChannelTypeName; // 0x10
}; // Size: 0x18
#pragma pack(pop)
