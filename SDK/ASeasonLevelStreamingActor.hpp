#pragma once
#include <cstdint>
#include "AActor.hpp"
class ULevelStreamingDynamic;
#pragma pack(push, 1)
class ASeasonLevelStreamingActor : public AActor {
public:
    FString SummerLevelName; // 0x248
    FString FallLevelName; // 0x258
    FString WinterLevelName; // 0x268
    FString SpringLevelName; // 0x278
    ULevelStreamingDynamic* SeasonLevel; // 0x288
    static ASeasonLevelStreamingActor* StaticClass();
}; // Size: 0x290
#pragma pack(pop)
