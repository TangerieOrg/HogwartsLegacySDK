#pragma once
#include <cstdint>
#include "FVector.hpp"
#include "UObject.hpp"
class AFullScreenWeatherDecalActor;
#pragma pack(push, 1)
class UWeatherDecalTracker : public UObject {
public:
    char pad_28[0x8];
    AFullScreenWeatherDecalActor* DecalActor; // 0x30
    FVector BasePosition; // 0x38
    float ZOffset; // 0x44
    float SleepUntil; // 0x48
    char pad_4c[0x4];
    static UWeatherDecalTracker* StaticClass();
}; // Size: 0x50
#pragma pack(pop)
