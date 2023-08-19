#pragma once
#include <cstdint>
#include "FBlackboardKeySelector.hpp"
#include "UQualifierOptions.hpp"
#pragma pack(push, 1)
class UGroupCoordinatedTagLocationsQualifierOptions : public UQualifierOptions {
public:
    FName TagID; // 0x28
    float SearchRadius; // 0x30
    char pad_34[0x4];
    FBlackboardKeySelector SearchAreaCentreKey; // 0x38
    static UGroupCoordinatedTagLocationsQualifierOptions* StaticClass();
}; // Size: 0x60
#pragma pack(pop)
