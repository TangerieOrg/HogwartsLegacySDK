#pragma once
#include <cstdint>
#include "FMasterMaterialAssetSet.hpp"
#include "FMasterMaterialSet.hpp"
#include "FMaterialPermuterGroupProperty.hpp"
#include "FMaterialPermuterKey.hpp"
#include "FMaterialPermuterPermutationProperty.hpp"
#include "FMaterialSwapRules.hpp"
#include "UBlueprintFunctionLibrary.hpp"
class UMaterialInterface;
class UMeshComponent;
class AActor;
#pragma pack(push, 1)
class UMasterMaterialSetBlueprintLibrary : public UBlueprintFunctionLibrary {
public:
    static UMasterMaterialSetBlueprintLibrary* StaticClass();
    static void RemoveFromMasterMaterialSet(FMasterMaterialSet& MaterialMasterSet, UMaterialInterface* Material);
    static void MasterMaterialSetToAssets(FMasterMaterialSet& MaterialSet, TArray<void*>& MasterMaterialAssets);
    static void MasterMaterialSetNum(FMasterMaterialSet& MaterialMasterSet, int32_t& NumMaterials);
    static void MasterMaterialSetIsEmpty(FMasterMaterialSet& MaterialMasterSet, bool& bIsEmpty);
    static void MasterMaterialSetContains(FMasterMaterialSet& MaterialMasterSet, UMaterialInterface* Material);
    static FMaterialPermuterKey MakePermutationPropertyKey(FMaterialPermuterPermutationProperty PermutationProperty);
    static FMasterMaterialSet MakeMeshMasterMaterialSet(UMeshComponent* Mesh);
    static FMasterMaterialSet MakeMeshesMasterMaterialSet(TArray<UMeshComponent*> Meshes);
    static FMaterialPermuterKey MakeMaterialPermuterKey(FName KeyHash);
    static FMasterMaterialSet MakeMasterMaterialSet(TArray<UMaterialInterface*> Materials);
    static FMasterMaterialAssetSet MakeMasterMaterialAssetSet(FMasterMaterialSet& MaterialMasterSet);
    static void MakeKey(FMaterialPermuterKey& Key, FName Group, FName SubType);
    static FMaterialPermuterKey MakeGroupPropertyKey(FMaterialPermuterGroupProperty GroupProperty);
    static FMasterMaterialSet MakeActorsRulesMasterMaterialSet(TArray<AActor*> Actors, FMaterialSwapRules Rules);
    static FMasterMaterialSet MakeActorsMasterMaterialSet(TArray<AActor*> Actors, bool bAttachedChildren, bool bComponentChildren);
    static FMasterMaterialSet MakeActorRulesMasterMaterialSet(AActor* Actor, FMaterialSwapRules Rules);
    static FMasterMaterialSet MakeActorMasterMaterialSet(AActor* Actor, bool bAttachedChildren, bool bComponentChildren);
    static void KeyIsValid(FMaterialPermuterKey Key, bool& bIsValid);
    static void KeyHasSubType(FMaterialPermuterKey Key, bool& bHasSubType);
    static void KeyGetSubType(FMaterialPermuterKey Key, FName& SubType);
    static void KeyGetGroup(FMaterialPermuterKey Key, FName& Group);
    static FName GetPermutationPropertyName(FMaterialPermuterPermutationProperty PermutationProperty);
    static FName GetMaterialPermuterKeyName(FMaterialPermuterKey Key);
    static FName GetGroupPropertyName(FMaterialPermuterGroupProperty GroupProperty);
    static FMasterMaterialAssetSet CreateMasterMaterialAssetSet(TArray<void*> MaterialAssets);
    static void CombineMasterMaterialSets(FMasterMaterialSet& A, FMasterMaterialSet& B, FMasterMaterialSet& Combined);
    static void AppendMasterMaterialSet(FMasterMaterialSet& MaterialMasterSet, FMasterMaterialSet& Add);
    static void AppendActorToMasterMaterialSetWithRules(FMasterMaterialSet& MaterialMasterSet, AActor* Actor, FMaterialSwapRules Rules);
    static void AppendActorToMasterMaterialSet(FMasterMaterialSet& MaterialMasterSet, AActor* Actor, bool bAttachedChildren, bool bComponentChildren);
    static void AppendActorsToMasterMaterialSetWithRules(FMasterMaterialSet& MaterialMasterSet, TArray<AActor*> Actors, FMaterialSwapRules Rules);
    static void AppendActorsToMasterMaterialSet(FMasterMaterialSet& MaterialMasterSet, TArray<AActor*> Actors, bool bAttachedChildren, bool bComponentChildren);
    static void AddToMasterMaterialSet(FMasterMaterialSet& MaterialMasterSet, UMaterialInterface* Material);
}; // Size: 0x28
#pragma pack(pop)
