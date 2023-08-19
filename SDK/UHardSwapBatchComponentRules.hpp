#pragma once
#include <cstdint>
#include "FHardSwapBatchComponentSettings.hpp"
#include "FMaterialPermuterHardSwapRules.hpp"
#include "UHardSwapBatchComponent.hpp"
class AActor;
#pragma pack(push, 1)
class UHardSwapBatchComponentRules : public UHardSwapBatchComponent {
public:
    FMaterialPermuterHardSwapRules HardSwapRules; // 0x210
    static UHardSwapBatchComponentRules* StaticClass();
    static void CreateHardSwapBatchComponentWithRules(AActor* Owner, FMaterialPermuterHardSwapRules HardSwapSetup, TArray<AActor*> Actors, FHardSwapBatchComponentSettings BatchSettings, UHardSwapBatchComponentRules*& HardSwapBatchComponent);
}; // Size: 0x348
#pragma pack(pop)
