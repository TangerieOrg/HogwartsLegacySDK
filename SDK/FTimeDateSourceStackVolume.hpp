#pragma once
#include <cstdint>
class UTimeSourceVolume;
#pragma pack(push, 1)
struct FTimeDateSourceStackVolume {
    TArray<UTimeSourceVolume*> TimeSources; // 0x0
}; // Size: 0x10
#pragma pack(pop)
