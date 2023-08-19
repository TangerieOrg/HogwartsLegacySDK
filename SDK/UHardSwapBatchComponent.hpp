#pragma once
#include <cstdint>
#include "EHardSwapBatchComponentState.hpp"
#include "FActorToHardSwapList.hpp"
#include "FHardSwapBatchComponentSettings.hpp"
#include "FLinearColor.hpp"
#include "FMaterialPermuterHardSwapBase.hpp"
#include "FMaterialSwapSharedMIDCache.hpp"
#include "UActorComponent.hpp"
class UMaterialPermuterLibrary;
class AActor;
class UTexture;
#pragma pack(push, 1)
class UHardSwapBatchComponent : public UActorComponent {
public:
    char pad_c8[0x58];
    UMaterialPermuterLibrary* Library; // 0x120
    FMaterialPermuterHardSwapBase HardSwap; // 0x128
    FHardSwapBatchComponentSettings Settings; // 0x180
    char pad_18c[0x4];
    FMaterialSwapSharedMIDCache MIDCache; // 0x190
    char pad_1e0[0x10];
    EHardSwapBatchComponentState State; // 0x1f0
    char pad_1f1[0x7];
    FActorToHardSwapList ActorsToSwap; // 0x1f8
    static UHardSwapBatchComponent* StaticClass();
    void SetTextureParameter(FName Name, UTexture* Value);
    void SetScalarParameter(FName Name, float Value);
    void SetColorParameter(FName Name, FLinearColor Value);
    void GetActorsToSwap(TArray<AActor*>& ActorsToSwapList);
}; // Size: 0x210
#pragma pack(pop)
