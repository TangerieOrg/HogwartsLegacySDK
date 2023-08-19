#pragma once
#include <cstdint>
#include "AFastTravelPort.hpp"
#include "FBTCustomAction.hpp"
class USplineComponent;
class UClass;
#pragma pack(push, 1)
class ARailTravelStatue : public AFastTravelPort {
public:
    USplineComponent* SplineComponent; // 0x258
    UClass* SpawnActorClass; // 0x260
    float StartSpeed; // 0x268
    bool bUseActualSpeedAsStartSpeed; // 0x26c
    char pad_26d[0x3];
    float Acceleration; // 0x270
    float MinSpeed; // 0x274
    float MaxSpeed; // 0x278
    float RotationSpeed; // 0x27c
    float MaxOffsetRadius; // 0x280
    float SplineZOffset; // 0x284
    float SuckToSplineSpeed; // 0x288
    float YawSpeed; // 0x28c
    FBTCustomAction SendActionAtEndOfSpline; // 0x290
    bool bDebug; // 0x29c
    char pad_29d[0x3];
    float TravelDirection; // 0x2a0
    char pad_2a4[0x1c];
    static ARailTravelStatue* StaticClass();
    void InitializeForTravel(USplineComponent* InSplineComponent, float InTravelDirection);
}; // Size: 0x2c0
#pragma pack(pop)
