#pragma once
#include <cstdint>
class ULightComponentStateData;
#pragma pack(push, 1)
struct FLightComponentStatesSaveData {
    TArray<ULightComponentStateData*> Data; // 0x0
}; // Size: 0x10
#pragma pack(pop)
