#include "AActor.hpp"
#include "FMasterMaterialAssetSet.hpp"
#include "FMasterMaterialSet.hpp"
#include "FMaterialPermuterGroupProperty.hpp"
#include "FMaterialPermuterKey.hpp"
#include "FMaterialPermuterPermutationProperty.hpp"
#include "FMaterialSwapRules.hpp"
#include "UBlueprintFunctionLibrary.hpp"
#include "UFunction.hpp"
#include "UMasterMaterialSetBlueprintLibrary.hpp"
#include "UMaterialInterface.hpp"
#include "UMeshComponent.hpp"
void UMasterMaterialSetBlueprintLibrary::AppendActorToMasterMaterialSetWithRules(FMasterMaterialSet& MaterialMasterSet, AActor* Actor, FMaterialSwapRules Rules) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MasterMaterialSetBlueprintLibrary.AppendActorToMasterMaterialSetWithRules"));
    struct Params_AppendActorToMasterMaterialSetWithRules {
        FMasterMaterialSet MaterialMasterSet; // 0x0
        AActor* Actor; // 0x110
        FMaterialSwapRules Rules; // 0x118
    }; // Size: 0x1f8
    Params_AppendActorToMasterMaterialSetWithRules params{};
    params.MaterialMasterSet = (FMasterMaterialSet)MaterialMasterSet;
    params.Actor = (AActor*)Actor;
    params.Rules = (FMaterialSwapRules)Rules;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    MaterialMasterSet = params.MaterialMasterSet;
}
UMasterMaterialSetBlueprintLibrary* UMasterMaterialSetBlueprintLibrary::StaticClass() {
    static auto res = find_uobject("Class /Script/MaterialPermuter.MasterMaterialSetBlueprintLibrary");
    return (UMasterMaterialSetBlueprintLibrary*)res;
}
void UMasterMaterialSetBlueprintLibrary::RemoveFromMasterMaterialSet(FMasterMaterialSet& MaterialMasterSet, UMaterialInterface* Material) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MasterMaterialSetBlueprintLibrary.RemoveFromMasterMaterialSet"));
    struct Params_RemoveFromMasterMaterialSet {
        FMasterMaterialSet MaterialMasterSet; // 0x0
        UMaterialInterface* Material; // 0x110
    }; // Size: 0x118
    Params_RemoveFromMasterMaterialSet params{};
    params.MaterialMasterSet = (FMasterMaterialSet)MaterialMasterSet;
    params.Material = (UMaterialInterface*)Material;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    MaterialMasterSet = params.MaterialMasterSet;
}
FMasterMaterialSet UMasterMaterialSetBlueprintLibrary::MakeMeshMasterMaterialSet(UMeshComponent* Mesh) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MasterMaterialSetBlueprintLibrary.MakeMeshMasterMaterialSet"));
    struct Params_MakeMeshMasterMaterialSet {
        UMeshComponent* Mesh; // 0x0
        FMasterMaterialSet ReturnValue; // 0x8
    }; // Size: 0x118
    Params_MakeMeshMasterMaterialSet params{};
    params.Mesh = (UMeshComponent*)Mesh;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FMasterMaterialSet)params.ReturnValue;
}
void UMasterMaterialSetBlueprintLibrary::MasterMaterialSetToAssets(FMasterMaterialSet& MaterialSet, TArray<void*>& MasterMaterialAssets) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MasterMaterialSetBlueprintLibrary.MasterMaterialSetToAssets"));
    struct Params_MasterMaterialSetToAssets {
        FMasterMaterialSet MaterialSet; // 0x0
        TArray<void*> MasterMaterialAssets; // 0x110
    }; // Size: 0x120
    Params_MasterMaterialSetToAssets params{};
    params.MaterialSet = (FMasterMaterialSet)MaterialSet;
    params.MasterMaterialAssets = (TArray<void*>)MasterMaterialAssets;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    MaterialSet = params.MaterialSet;
    MasterMaterialAssets = params.MasterMaterialAssets;
}
void UMasterMaterialSetBlueprintLibrary::MasterMaterialSetNum(FMasterMaterialSet& MaterialMasterSet, int32_t& NumMaterials) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MasterMaterialSetBlueprintLibrary.MasterMaterialSetNum"));
    struct Params_MasterMaterialSetNum {
        FMasterMaterialSet MaterialMasterSet; // 0x0
        int32_t NumMaterials; // 0x110
    }; // Size: 0x114
    Params_MasterMaterialSetNum params{};
    params.MaterialMasterSet = (FMasterMaterialSet)MaterialMasterSet;
    params.NumMaterials = (int32_t)NumMaterials;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    MaterialMasterSet = params.MaterialMasterSet;
    NumMaterials = params.NumMaterials;
}
void UMasterMaterialSetBlueprintLibrary::KeyGetGroup(FMaterialPermuterKey Key, FName& Group) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MasterMaterialSetBlueprintLibrary.KeyGetGroup"));
    struct Params_KeyGetGroup {
        FMaterialPermuterKey Key; // 0x0
        FName Group; // 0x10
    }; // Size: 0x18
    Params_KeyGetGroup params{};
    params.Key = (FMaterialPermuterKey)Key;
    params.Group = (FName)Group;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Group = params.Group;
}
void UMasterMaterialSetBlueprintLibrary::MasterMaterialSetIsEmpty(FMasterMaterialSet& MaterialMasterSet, bool& bIsEmpty) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MasterMaterialSetBlueprintLibrary.MasterMaterialSetIsEmpty"));
    struct Params_MasterMaterialSetIsEmpty {
        FMasterMaterialSet MaterialMasterSet; // 0x0
        bool bIsEmpty; // 0x110
    }; // Size: 0x111
    Params_MasterMaterialSetIsEmpty params{};
    params.MaterialMasterSet = (FMasterMaterialSet)MaterialMasterSet;
    params.bIsEmpty = (bool)bIsEmpty;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    MaterialMasterSet = params.MaterialMasterSet;
    bIsEmpty = params.bIsEmpty;
}
FName UMasterMaterialSetBlueprintLibrary::GetMaterialPermuterKeyName(FMaterialPermuterKey Key) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MasterMaterialSetBlueprintLibrary.GetMaterialPermuterKeyName"));
    struct Params_GetMaterialPermuterKeyName {
        FMaterialPermuterKey Key; // 0x0
        FName ReturnValue; // 0x10
    }; // Size: 0x18
    Params_GetMaterialPermuterKeyName params{};
    params.Key = (FMaterialPermuterKey)Key;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
void UMasterMaterialSetBlueprintLibrary::MasterMaterialSetContains(FMasterMaterialSet& MaterialMasterSet, UMaterialInterface* Material) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MasterMaterialSetBlueprintLibrary.MasterMaterialSetContains"));
    struct Params_MasterMaterialSetContains {
        FMasterMaterialSet MaterialMasterSet; // 0x0
        UMaterialInterface* Material; // 0x110
    }; // Size: 0x118
    Params_MasterMaterialSetContains params{};
    params.MaterialMasterSet = (FMasterMaterialSet)MaterialMasterSet;
    params.Material = (UMaterialInterface*)Material;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    MaterialMasterSet = params.MaterialMasterSet;
}
FMasterMaterialSet UMasterMaterialSetBlueprintLibrary::MakeActorsRulesMasterMaterialSet(TArray<AActor*> Actors, FMaterialSwapRules Rules) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MasterMaterialSetBlueprintLibrary.MakeActorsRulesMasterMaterialSet"));
    struct Params_MakeActorsRulesMasterMaterialSet {
        TArray<AActor*> Actors; // 0x0
        FMaterialSwapRules Rules; // 0x10
        FMasterMaterialSet ReturnValue; // 0xf0
    }; // Size: 0x200
    Params_MakeActorsRulesMasterMaterialSet params{};
    params.Actors = (TArray<AActor*>)Actors;
    params.Rules = (FMaterialSwapRules)Rules;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FMasterMaterialSet)params.ReturnValue;
}
FMaterialPermuterKey UMasterMaterialSetBlueprintLibrary::MakePermutationPropertyKey(FMaterialPermuterPermutationProperty PermutationProperty) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MasterMaterialSetBlueprintLibrary.MakePermutationPropertyKey"));
    struct Params_MakePermutationPropertyKey {
        FMaterialPermuterPermutationProperty PermutationProperty; // 0x0
        FMaterialPermuterKey ReturnValue; // 0x10
    }; // Size: 0x20
    Params_MakePermutationPropertyKey params{};
    params.PermutationProperty = (FMaterialPermuterPermutationProperty)PermutationProperty;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FMaterialPermuterKey)params.ReturnValue;
}
FMasterMaterialSet UMasterMaterialSetBlueprintLibrary::MakeMeshesMasterMaterialSet(TArray<UMeshComponent*> Meshes) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MasterMaterialSetBlueprintLibrary.MakeMeshesMasterMaterialSet"));
    struct Params_MakeMeshesMasterMaterialSet {
        TArray<UMeshComponent*> Meshes; // 0x0
        FMasterMaterialSet ReturnValue; // 0x10
    }; // Size: 0x120
    Params_MakeMeshesMasterMaterialSet params{};
    params.Meshes = (TArray<UMeshComponent*>)Meshes;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FMasterMaterialSet)params.ReturnValue;
}
FMasterMaterialAssetSet UMasterMaterialSetBlueprintLibrary::CreateMasterMaterialAssetSet(TArray<void*> MaterialAssets) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MasterMaterialSetBlueprintLibrary.CreateMasterMaterialAssetSet"));
    struct Params_CreateMasterMaterialAssetSet {
        TArray<void*> MaterialAssets; // 0x0
        FMasterMaterialAssetSet ReturnValue; // 0x10
    }; // Size: 0x520
    Params_CreateMasterMaterialAssetSet params{};
    params.MaterialAssets = (TArray<void*>)MaterialAssets;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FMasterMaterialAssetSet)params.ReturnValue;
}
FMaterialPermuterKey UMasterMaterialSetBlueprintLibrary::MakeMaterialPermuterKey(FName KeyHash) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MasterMaterialSetBlueprintLibrary.MakeMaterialPermuterKey"));
    struct Params_MakeMaterialPermuterKey {
        FName KeyHash; // 0x0
        FMaterialPermuterKey ReturnValue; // 0x8
    }; // Size: 0x18
    Params_MakeMaterialPermuterKey params{};
    params.KeyHash = (FName)KeyHash;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FMaterialPermuterKey)params.ReturnValue;
}
FMasterMaterialSet UMasterMaterialSetBlueprintLibrary::MakeMasterMaterialSet(TArray<UMaterialInterface*> Materials) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MasterMaterialSetBlueprintLibrary.MakeMasterMaterialSet"));
    struct Params_MakeMasterMaterialSet {
        TArray<UMaterialInterface*> Materials; // 0x0
        FMasterMaterialSet ReturnValue; // 0x10
    }; // Size: 0x120
    Params_MakeMasterMaterialSet params{};
    params.Materials = (TArray<UMaterialInterface*>)Materials;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FMasterMaterialSet)params.ReturnValue;
}
FMasterMaterialAssetSet UMasterMaterialSetBlueprintLibrary::MakeMasterMaterialAssetSet(FMasterMaterialSet& MaterialMasterSet) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MasterMaterialSetBlueprintLibrary.MakeMasterMaterialAssetSet"));
    struct Params_MakeMasterMaterialAssetSet {
        FMasterMaterialSet MaterialMasterSet; // 0x0
        FMasterMaterialAssetSet ReturnValue; // 0x110
    }; // Size: 0x620
    Params_MakeMasterMaterialAssetSet params{};
    params.MaterialMasterSet = (FMasterMaterialSet)MaterialMasterSet;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    MaterialMasterSet = params.MaterialMasterSet;
    return (FMasterMaterialAssetSet)params.ReturnValue;
}
void UMasterMaterialSetBlueprintLibrary::MakeKey(FMaterialPermuterKey& Key, FName Group, FName SubType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MasterMaterialSetBlueprintLibrary.MakeKey"));
    struct Params_MakeKey {
        FMaterialPermuterKey Key; // 0x0
        FName Group; // 0x10
        FName SubType; // 0x18
    }; // Size: 0x20
    Params_MakeKey params{};
    params.Key = (FMaterialPermuterKey)Key;
    params.Group = (FName)Group;
    params.SubType = (FName)SubType;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Key = params.Key;
}
FMaterialPermuterKey UMasterMaterialSetBlueprintLibrary::MakeGroupPropertyKey(FMaterialPermuterGroupProperty GroupProperty) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MasterMaterialSetBlueprintLibrary.MakeGroupPropertyKey"));
    struct Params_MakeGroupPropertyKey {
        FMaterialPermuterGroupProperty GroupProperty; // 0x0
        FMaterialPermuterKey ReturnValue; // 0x10
    }; // Size: 0x20
    Params_MakeGroupPropertyKey params{};
    params.GroupProperty = (FMaterialPermuterGroupProperty)GroupProperty;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FMaterialPermuterKey)params.ReturnValue;
}
void UMasterMaterialSetBlueprintLibrary::CombineMasterMaterialSets(FMasterMaterialSet& A, FMasterMaterialSet& B, FMasterMaterialSet& Combined) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MasterMaterialSetBlueprintLibrary.CombineMasterMaterialSets"));
    struct Params_CombineMasterMaterialSets {
        FMasterMaterialSet A; // 0x0
        FMasterMaterialSet B; // 0x110
        FMasterMaterialSet Combined; // 0x220
    }; // Size: 0x330
    Params_CombineMasterMaterialSets params{};
    params.A = (FMasterMaterialSet)A;
    params.B = (FMasterMaterialSet)B;
    params.Combined = (FMasterMaterialSet)Combined;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    A = params.A;
    B = params.B;
    Combined = params.Combined;
}
FMasterMaterialSet UMasterMaterialSetBlueprintLibrary::MakeActorsMasterMaterialSet(TArray<AActor*> Actors, bool bAttachedChildren, bool bComponentChildren) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MasterMaterialSetBlueprintLibrary.MakeActorsMasterMaterialSet"));
    struct Params_MakeActorsMasterMaterialSet {
        TArray<AActor*> Actors; // 0x0
        bool bAttachedChildren; // 0x10
        bool bComponentChildren; // 0x11
        char pad_12[0x6];
        FMasterMaterialSet ReturnValue; // 0x18
    }; // Size: 0x128
    Params_MakeActorsMasterMaterialSet params{};
    params.Actors = (TArray<AActor*>)Actors;
    params.bAttachedChildren = (bool)bAttachedChildren;
    params.bComponentChildren = (bool)bComponentChildren;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FMasterMaterialSet)params.ReturnValue;
}
void UMasterMaterialSetBlueprintLibrary::AppendActorToMasterMaterialSet(FMasterMaterialSet& MaterialMasterSet, AActor* Actor, bool bAttachedChildren, bool bComponentChildren) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MasterMaterialSetBlueprintLibrary.AppendActorToMasterMaterialSet"));
    struct Params_AppendActorToMasterMaterialSet {
        FMasterMaterialSet MaterialMasterSet; // 0x0
        AActor* Actor; // 0x110
        bool bAttachedChildren; // 0x118
        bool bComponentChildren; // 0x119
    }; // Size: 0x11a
    Params_AppendActorToMasterMaterialSet params{};
    params.MaterialMasterSet = (FMasterMaterialSet)MaterialMasterSet;
    params.Actor = (AActor*)Actor;
    params.bAttachedChildren = (bool)bAttachedChildren;
    params.bComponentChildren = (bool)bComponentChildren;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    MaterialMasterSet = params.MaterialMasterSet;
}
FMasterMaterialSet UMasterMaterialSetBlueprintLibrary::MakeActorRulesMasterMaterialSet(AActor* Actor, FMaterialSwapRules Rules) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MasterMaterialSetBlueprintLibrary.MakeActorRulesMasterMaterialSet"));
    struct Params_MakeActorRulesMasterMaterialSet {
        AActor* Actor; // 0x0
        FMaterialSwapRules Rules; // 0x8
        FMasterMaterialSet ReturnValue; // 0xe8
    }; // Size: 0x1f8
    Params_MakeActorRulesMasterMaterialSet params{};
    params.Actor = (AActor*)Actor;
    params.Rules = (FMaterialSwapRules)Rules;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FMasterMaterialSet)params.ReturnValue;
}
FMasterMaterialSet UMasterMaterialSetBlueprintLibrary::MakeActorMasterMaterialSet(AActor* Actor, bool bAttachedChildren, bool bComponentChildren) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MasterMaterialSetBlueprintLibrary.MakeActorMasterMaterialSet"));
    struct Params_MakeActorMasterMaterialSet {
        AActor* Actor; // 0x0
        bool bAttachedChildren; // 0x8
        bool bComponentChildren; // 0x9
        char pad_a[0x6];
        FMasterMaterialSet ReturnValue; // 0x10
    }; // Size: 0x120
    Params_MakeActorMasterMaterialSet params{};
    params.Actor = (AActor*)Actor;
    params.bAttachedChildren = (bool)bAttachedChildren;
    params.bComponentChildren = (bool)bComponentChildren;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FMasterMaterialSet)params.ReturnValue;
}
void UMasterMaterialSetBlueprintLibrary::KeyIsValid(FMaterialPermuterKey Key, bool& bIsValid) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MasterMaterialSetBlueprintLibrary.KeyIsValid"));
    struct Params_KeyIsValid {
        FMaterialPermuterKey Key; // 0x0
        bool bIsValid; // 0x10
    }; // Size: 0x11
    Params_KeyIsValid params{};
    params.Key = (FMaterialPermuterKey)Key;
    params.bIsValid = (bool)bIsValid;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    bIsValid = params.bIsValid;
}
void UMasterMaterialSetBlueprintLibrary::AppendActorsToMasterMaterialSet(FMasterMaterialSet& MaterialMasterSet, TArray<AActor*> Actors, bool bAttachedChildren, bool bComponentChildren) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MasterMaterialSetBlueprintLibrary.AppendActorsToMasterMaterialSet"));
    struct Params_AppendActorsToMasterMaterialSet {
        FMasterMaterialSet MaterialMasterSet; // 0x0
        TArray<AActor*> Actors; // 0x110
        bool bAttachedChildren; // 0x120
        bool bComponentChildren; // 0x121
    }; // Size: 0x122
    Params_AppendActorsToMasterMaterialSet params{};
    params.MaterialMasterSet = (FMasterMaterialSet)MaterialMasterSet;
    params.Actors = (TArray<AActor*>)Actors;
    params.bAttachedChildren = (bool)bAttachedChildren;
    params.bComponentChildren = (bool)bComponentChildren;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    MaterialMasterSet = params.MaterialMasterSet;
}
void UMasterMaterialSetBlueprintLibrary::KeyHasSubType(FMaterialPermuterKey Key, bool& bHasSubType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MasterMaterialSetBlueprintLibrary.KeyHasSubType"));
    struct Params_KeyHasSubType {
        FMaterialPermuterKey Key; // 0x0
        bool bHasSubType; // 0x10
    }; // Size: 0x11
    Params_KeyHasSubType params{};
    params.Key = (FMaterialPermuterKey)Key;
    params.bHasSubType = (bool)bHasSubType;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    bHasSubType = params.bHasSubType;
}
void UMasterMaterialSetBlueprintLibrary::KeyGetSubType(FMaterialPermuterKey Key, FName& SubType) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MasterMaterialSetBlueprintLibrary.KeyGetSubType"));
    struct Params_KeyGetSubType {
        FMaterialPermuterKey Key; // 0x0
        FName SubType; // 0x10
    }; // Size: 0x18
    Params_KeyGetSubType params{};
    params.Key = (FMaterialPermuterKey)Key;
    params.SubType = (FName)SubType;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    SubType = params.SubType;
}
FName UMasterMaterialSetBlueprintLibrary::GetPermutationPropertyName(FMaterialPermuterPermutationProperty PermutationProperty) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MasterMaterialSetBlueprintLibrary.GetPermutationPropertyName"));
    struct Params_GetPermutationPropertyName {
        FMaterialPermuterPermutationProperty PermutationProperty; // 0x0
        FName ReturnValue; // 0x10
    }; // Size: 0x18
    Params_GetPermutationPropertyName params{};
    params.PermutationProperty = (FMaterialPermuterPermutationProperty)PermutationProperty;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
FName UMasterMaterialSetBlueprintLibrary::GetGroupPropertyName(FMaterialPermuterGroupProperty GroupProperty) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MasterMaterialSetBlueprintLibrary.GetGroupPropertyName"));
    struct Params_GetGroupPropertyName {
        FMaterialPermuterGroupProperty GroupProperty; // 0x0
        FName ReturnValue; // 0x10
    }; // Size: 0x18
    Params_GetGroupPropertyName params{};
    params.GroupProperty = (FMaterialPermuterGroupProperty)GroupProperty;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
void UMasterMaterialSetBlueprintLibrary::AppendMasterMaterialSet(FMasterMaterialSet& MaterialMasterSet, FMasterMaterialSet& Add) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MasterMaterialSetBlueprintLibrary.AppendMasterMaterialSet"));
    struct Params_AppendMasterMaterialSet {
        FMasterMaterialSet MaterialMasterSet; // 0x0
        FMasterMaterialSet Add; // 0x110
    }; // Size: 0x220
    Params_AppendMasterMaterialSet params{};
    params.MaterialMasterSet = (FMasterMaterialSet)MaterialMasterSet;
    params.Add = (FMasterMaterialSet)Add;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    MaterialMasterSet = params.MaterialMasterSet;
    Add = params.Add;
}
void UMasterMaterialSetBlueprintLibrary::AppendActorsToMasterMaterialSetWithRules(FMasterMaterialSet& MaterialMasterSet, TArray<AActor*> Actors, FMaterialSwapRules Rules) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MasterMaterialSetBlueprintLibrary.AppendActorsToMasterMaterialSetWithRules"));
    struct Params_AppendActorsToMasterMaterialSetWithRules {
        FMasterMaterialSet MaterialMasterSet; // 0x0
        TArray<AActor*> Actors; // 0x110
        FMaterialSwapRules Rules; // 0x120
    }; // Size: 0x200
    Params_AppendActorsToMasterMaterialSetWithRules params{};
    params.MaterialMasterSet = (FMasterMaterialSet)MaterialMasterSet;
    params.Actors = (TArray<AActor*>)Actors;
    params.Rules = (FMaterialSwapRules)Rules;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    MaterialMasterSet = params.MaterialMasterSet;
}
void UMasterMaterialSetBlueprintLibrary::AddToMasterMaterialSet(FMasterMaterialSet& MaterialMasterSet, UMaterialInterface* Material) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MasterMaterialSetBlueprintLibrary.AddToMasterMaterialSet"));
    struct Params_AddToMasterMaterialSet {
        FMasterMaterialSet MaterialMasterSet; // 0x0
        UMaterialInterface* Material; // 0x110
    }; // Size: 0x118
    Params_AddToMasterMaterialSet params{};
    params.MaterialMasterSet = (FMasterMaterialSet)MaterialMasterSet;
    params.Material = (UMaterialInterface*)Material;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    MaterialMasterSet = params.MaterialMasterSet;
}
