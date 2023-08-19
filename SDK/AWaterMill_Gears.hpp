#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "FVector.hpp"
class UStaticMeshComponent;
#pragma pack(push, 1)
class AWaterMill_Gears : public AActor {
public:
    char pad_248[0x8];
    static AWaterMill_Gears* StaticClass();
    void UpdateWaterWheelMaterialValues();
    float GetSpeedControl();
    void GetRotationRates(TArray<FVector>& Array);
    void GetGearComponents(TArray<UStaticMeshComponent*>& Array);
}; // Size: 0x250
#pragma pack(pop)
