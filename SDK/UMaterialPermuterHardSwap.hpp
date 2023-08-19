#pragma once
#include <cstdint>
#include "FLinearColor.hpp"
#include "FMaterialPermuterHardSwapRules.hpp"
#include "FMaterialPermuterHardSwapSimple.hpp"
#include "UBlueprintFunctionLibrary.hpp"
class AActor;
struct FMaterialSwapSharedMIDCache;
class UMaterialInstanceDynamic;
#pragma pack(push, 1)
class UMaterialPermuterHardSwap : public UBlueprintFunctionLibrary {
public:
    static UMaterialPermuterHardSwap* StaticClass();
    static void SwapFromdHardSwapCacheWithRules(AActor* Actor, FMaterialPermuterHardSwapRules Swap, FMaterialSwapSharedMIDCache& HardSwapCache, int32_t& MaterialsSwapped);
    static void SwapFromdHardSwapCache(AActor* Actor, FMaterialPermuterHardSwapSimple Swap, FMaterialSwapSharedMIDCache& HardSwapCache, int32_t& MaterialsSwapped);
    static void SwapActorsFromdHardSwapCacheWithRules(TArray<AActor*> Actors, FMaterialPermuterHardSwapRules Swap, FMaterialSwapSharedMIDCache& HardSwapCache, int32_t& MaterialsSwapped);
    static void SwapActorsFromdHardSwapCache(TArray<AActor*> Actors, FMaterialPermuterHardSwapSimple Swap, FMaterialSwapSharedMIDCache& HardSwapCache, int32_t& MaterialsSwapped);
    static void SetMIDArrayVectorParameter(TArray<UMaterialInstanceDynamic*> MaterialInstanceDynamics, FName Parameter, FLinearColor Value);
    static void SetMIDArrayScalarParameter(TArray<UMaterialInstanceDynamic*> MaterialInstanceDynamics, FName Parameter, float Value);
    static void HardSwapCacheToMaterials(FMaterialSwapSharedMIDCache& HardSwapCache, TArray<UMaterialInstanceDynamic*>& MaterialInstanceDynamics);
    static void HardSwapActorWithRulesNoMIDs(AActor* Actor, FMaterialPermuterHardSwapRules Swap, int32_t& MaterialsSwapped, bool bForceLoadMaterials);
    static void HardSwapActorWithRules(AActor* Actor, FMaterialPermuterHardSwapRules Swap, int32_t& MaterialsSwapped, TArray<UMaterialInstanceDynamic*>& MaterialInstanceDynamics, bool bForceLoadMaterials);
    static void HardSwapActorsWithRules(TArray<AActor*> Actors, FMaterialPermuterHardSwapRules Swap, int32_t& MaterialsSwapped, TArray<UMaterialInstanceDynamic*>& MaterialInstanceDynamics, bool bForceLoadMaterials);
    static void HardSwapActors(TArray<AActor*> Actors, FMaterialPermuterHardSwapSimple Swap, int32_t& MaterialsSwapped, TArray<UMaterialInstanceDynamic*>& MaterialInstanceDynamics, bool bForceLoadMaterials);
    static void HardSwapActorNoMIDs(AActor* Actor, FMaterialPermuterHardSwapSimple Swap, int32_t& MaterialsSwapped, bool bForceLoadMaterials);
    static void HardSwapActor(AActor* Actor, FMaterialPermuterHardSwapSimple Swap, int32_t& MaterialsSwapped, TArray<UMaterialInstanceDynamic*>& MaterialInstanceDynamics, bool bForceLoadMaterials);
    static void BuildHardSwapCacheWithRules(AActor* Actor, FMaterialPermuterHardSwapRules Swap, FMaterialSwapSharedMIDCache& HardSwapCache, bool bForceLoadMaterials);
    static void BuildHardSwapCacheForActorsWithRules(TArray<AActor*> Actors, FMaterialPermuterHardSwapRules Swap, FMaterialSwapSharedMIDCache& HardSwapCache, bool bForceLoadMaterials);
    static void BuildHardSwapCacheForActors(TArray<AActor*> Actors, FMaterialPermuterHardSwapSimple Swap, FMaterialSwapSharedMIDCache& HardSwapCache, bool bForceLoadMaterials);
    static void BuildHardSwapCache(AActor* Actor, FMaterialPermuterHardSwapSimple Swap, FMaterialSwapSharedMIDCache& HardSwapCache, bool bForceLoadMaterials);
}; // Size: 0x28
#pragma pack(pop)
