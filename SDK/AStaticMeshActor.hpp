#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "EComponentMobility\Type.hpp"
#include "ENavDataGatheringMode.hpp"
class UStaticMeshComponent;
#pragma pack(push, 1)
class AStaticMeshActor : public AActor {
public:
    UStaticMeshComponent* StaticMeshComponent; // 0x248
    bool bStaticMeshReplicateMovement; // 0x250
    ENavDataGatheringMode NavigationGeometryGatheringMode; // 0x251
    char pad_252[0x6];
    static AStaticMeshActor* StaticClass();
    void SetMobility(EComponentMobility::Type InMobility);
}; // Size: 0x258
#pragma pack(pop)
