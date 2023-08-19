#pragma once
#include <cstdint>
#pragma pack(push, 1)
struct FLightGroupMessage {
    FName Region; // 0x0
    FName Name; // 0x8
    bool bIsOn; // 0x10
    char pad_11[0x3];
}; // Size: 0x14
#pragma pack(pop)
