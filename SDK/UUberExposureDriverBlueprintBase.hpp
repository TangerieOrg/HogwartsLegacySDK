#pragma once
#include <cstdint>
#include "UUberExposureDriver.hpp"
class UWorld;
class AActor;
#pragma pack(push, 1)
class UUberExposureDriverBlueprintBase : public UUberExposureDriver {
public:
    static UUberExposureDriverBlueprintBase* StaticClass();
    float UberExposureDriverGetValue(UWorld* World, AActor* Owner);
}; // Size: 0x28
#pragma pack(pop)
