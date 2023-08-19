#pragma once
#include <cstdint>
#include "FVector.hpp"
#include "UAblStartPositionGetter.hpp"
#pragma pack(push, 1)
class UAblStartPositionGetter_FootMatch : public UAblStartPositionGetter {
public:
    FVector FootPositionWeight; // 0x28
    FVector FootVelocityWeight; // 0x34
    float MinStartTime; // 0x40
    float MaxStartTime; // 0x44
    float SourceTimeOffset; // 0x48
    char pad_4c[0x4];
    static UAblStartPositionGetter_FootMatch* StaticClass();
}; // Size: 0x50
#pragma pack(pop)
