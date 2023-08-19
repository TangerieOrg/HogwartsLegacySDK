#pragma once
#include <cstdint>
#include "FGuid.hpp"
#pragma pack(push, 1)
struct FRemoteControlPresetGroup {
    FName Name; // 0x0
    FGuid ID; // 0x8
    TArray<FGuid> Fields; // 0x18
}; // Size: 0x28
#pragma pack(pop)
