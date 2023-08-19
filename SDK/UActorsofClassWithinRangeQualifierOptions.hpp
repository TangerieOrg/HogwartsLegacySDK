#pragma once
#include <cstdint>
#include "UQualifierOptions.hpp"
class UClass;
#pragma pack(push, 1)
class UActorsofClassWithinRangeQualifierOptions : public UQualifierOptions {
public:
    float Range; // 0x28
    char pad_2c[0x4];
    UClass* ActorType; // 0x30
    static UActorsofClassWithinRangeQualifierOptions* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
