#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "EComponentMobility\Type.hpp"
#include "ENavDataGatheringMode.hpp"
class USplineComponent;
class UInstancedStaticMeshComponent;
#pragma pack(push, 1)
class AGlassWaller : public AActor {
public:
    USplineComponent* SplineComponent; // 0x248
    UInstancedStaticMeshComponent* InstancedStaticMeshComponent; // 0x250
    ENavDataGatheringMode NavigationGeometryGatheringMode; // 0x258
    bool bDisableWhenPlayerMounted; // 0x259
    char pad_25a[0x26];
    static AGlassWaller* StaticClass();
    bool WithEditor();
    void SetMobility(EComponentMobility::Type InMobility);
}; // Size: 0x280
#pragma pack(pop)
