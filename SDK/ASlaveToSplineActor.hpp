#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "FSlaveToSplineSlave.hpp"
class USplineComponent;
#pragma pack(push, 1)
class ASlaveToSplineActor : public AActor {
public:
    USplineComponent* FollowSpline; // 0x248
    TArray<FSlaveToSplineSlave> Slaves; // 0x250
    static ASlaveToSplineActor* StaticClass();
    void ResetAll();
}; // Size: 0x260
#pragma pack(pop)
