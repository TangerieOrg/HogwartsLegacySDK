#pragma once
#include <cstdint>
class UTimeSource;
#pragma pack(push, 1)
struct FTimeDateSourceStack {
    TArray<UTimeSource*> TimeSources; // 0x0
}; // Size: 0x10
#pragma pack(pop)
