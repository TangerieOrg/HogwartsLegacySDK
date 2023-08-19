#pragma once
#include <cstdint>
#include "FFastTravelTestEntry.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class UFastTravelTestSettings : public UObject {
public:
    TArray<FFastTravelTestEntry> FastTravelTests; // 0x28
    static UFastTravelTestSettings* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
