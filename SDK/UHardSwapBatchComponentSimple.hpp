#pragma once
#include <cstdint>
#include "FHardSwapBatchComponentSettings.hpp"
#include "FMaterialPermuterHardSwapSimple.hpp"
#include "UHardSwapBatchComponent.hpp"
class AActor;
#pragma pack(push, 1)
class UHardSwapBatchComponentSimple : public UHardSwapBatchComponent {
public:
    FMaterialPermuterHardSwapSimple HardSwapSimple; // 0x210
    static UHardSwapBatchComponentSimple* StaticClass();
    static void CreateHardSwapBatchComponent(AActor* Owner, FMaterialPermuterHardSwapSimple HardSwapSetup, TArray<AActor*> Actors, FHardSwapBatchComponentSettings BatchSettings, UHardSwapBatchComponentSimple*& HardSwapBatchComponent);
}; // Size: 0x270
#pragma pack(pop)
