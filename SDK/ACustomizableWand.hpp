#pragma once
#include <cstdint>
#include "AActor.hpp"
class USkeletalMesh;
class UTexture;
#pragma pack(push, 1)
class ACustomizableWand : public AActor {
public:
    static ACustomizableWand* StaticClass();
    void OnLODsLoaded();
    void ForceCurrentWandLODsToBeResident(USkeletalMesh* WandMesh, UTexture* WandD, UTexture* WandN, UTexture* WandMRO, UTexture* Handled, UTexture* HandleN, UTexture* HandleMRO);
    void AsyncLoadTexture();
}; // Size: 0x248
#pragma pack(pop)
