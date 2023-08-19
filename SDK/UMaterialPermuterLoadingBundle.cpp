#include "AActor.hpp"
#include "EMaterialPermuterLoadingBundleState.hpp"
#include "EMaterialPermuterLoadingPriority.hpp"
#include "FMasterMaterialAssetSet.hpp"
#include "FMaterialPermuterKey.hpp"
#include "FTimespan.hpp"
#include "UActorComponent.hpp"
#include "UFunction.hpp"
#include "UMaterialInterface.hpp"
#include "UMaterialPermuterLoadingBundle.hpp"
#include "UObject.hpp"
UMaterialPermuterLoadingBundle* UMaterialPermuterLoadingBundle::CreateKeyMaterialSetBundle(AActor* Owner, FMaterialPermuterKey Key, FMasterMaterialAssetSet& MaterialAssetSet, EMaterialPermuterLoadingPriority Priority) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MaterialPermuterLoadingBundle.CreateKeyMaterialSetBundle"));
    struct Params_CreateKeyMaterialSetBundle {
        AActor* Owner; // 0x0
        FMaterialPermuterKey Key; // 0x8
        FMasterMaterialAssetSet MaterialAssetSet; // 0x18
        EMaterialPermuterLoadingPriority Priority; // 0x528
        char pad_529[0x7];
        UMaterialPermuterLoadingBundle* ReturnValue; // 0x530
    }; // Size: 0x538
    Params_CreateKeyMaterialSetBundle params{};
    params.Owner = (AActor*)Owner;
    params.Key = (FMaterialPermuterKey)Key;
    params.MaterialAssetSet = (FMasterMaterialAssetSet)MaterialAssetSet;
    params.Priority = (EMaterialPermuterLoadingPriority)Priority;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    MaterialAssetSet = params.MaterialAssetSet;
    return (UMaterialPermuterLoadingBundle*)params.ReturnValue;
}
void UMaterialPermuterLoadingBundle::ValidBundle(bool& bValid) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MaterialPermuterLoadingBundle.ValidBundle"));
    struct Params_ValidBundle {
        bool bValid; // 0x0
    }; // Size: 0x1
    Params_ValidBundle params{};
    params.bValid = (bool)bValid;
    ProcessEvent(func, &params);
    bValid = params.bValid;
}
UMaterialPermuterLoadingBundle* UMaterialPermuterLoadingBundle::StaticClass() {
    static auto res = find_uobject("Class /Script/MaterialPermuter.MaterialPermuterLoadingBundle");
    return (UMaterialPermuterLoadingBundle*)res;
}
AActor* UMaterialPermuterLoadingBundle::GetWorldBundleOwner(UObject* WorldContextObject) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MaterialPermuterLoadingBundle.GetWorldBundleOwner"));
    struct Params_GetWorldBundleOwner {
        UObject* WorldContextObject; // 0x0
        AActor* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_GetWorldBundleOwner params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (AActor*)params.ReturnValue;
}
UMaterialPermuterLoadingBundle* UMaterialPermuterLoadingBundle::CreateMaterialSetBundleForOwnerOnly(AActor* Owner, EMaterialPermuterLoadingPriority Priority, bool bAttachedChildren, bool bComponentChildren) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MaterialPermuterLoadingBundle.CreateMaterialSetBundleForOwnerOnly"));
    struct Params_CreateMaterialSetBundleForOwnerOnly {
        AActor* Owner; // 0x0
        EMaterialPermuterLoadingPriority Priority; // 0x8
        bool bAttachedChildren; // 0x9
        bool bComponentChildren; // 0xa
        char pad_b[0x5];
        UMaterialPermuterLoadingBundle* ReturnValue; // 0x10
    }; // Size: 0x18
    Params_CreateMaterialSetBundleForOwnerOnly params{};
    params.Owner = (AActor*)Owner;
    params.Priority = (EMaterialPermuterLoadingPriority)Priority;
    params.bAttachedChildren = (bool)bAttachedChildren;
    params.bComponentChildren = (bool)bComponentChildren;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UMaterialPermuterLoadingBundle*)params.ReturnValue;
}
void UMaterialPermuterLoadingBundle::GetPercentageLoaded(float& Loaded) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MaterialPermuterLoadingBundle.GetPercentageLoaded"));
    struct Params_GetPercentageLoaded {
        float Loaded; // 0x0
    }; // Size: 0x4
    Params_GetPercentageLoaded params{};
    params.Loaded = (float)Loaded;
    ProcessEvent(func, &params);
    Loaded = params.Loaded;
}
void UMaterialPermuterLoadingBundle::FullyLoaded(bool& bIsFullyLoaded) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MaterialPermuterLoadingBundle.FullyLoaded"));
    struct Params_FullyLoaded {
        bool bIsFullyLoaded; // 0x0
    }; // Size: 0x1
    Params_FullyLoaded params{};
    params.bIsFullyLoaded = (bool)bIsFullyLoaded;
    ProcessEvent(func, &params);
    bIsFullyLoaded = params.bIsFullyLoaded;
}
UMaterialPermuterLoadingBundle* UMaterialPermuterLoadingBundle::CreateMaterialSetBundle(AActor* Owner, FMasterMaterialAssetSet& MaterialAssetSet, EMaterialPermuterLoadingPriority Priority) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MaterialPermuterLoadingBundle.CreateMaterialSetBundle"));
    struct Params_CreateMaterialSetBundle {
        AActor* Owner; // 0x0
        FMasterMaterialAssetSet MaterialAssetSet; // 0x8
        EMaterialPermuterLoadingPriority Priority; // 0x518
        char pad_519[0x7];
        UMaterialPermuterLoadingBundle* ReturnValue; // 0x520
    }; // Size: 0x528
    Params_CreateMaterialSetBundle params{};
    params.Owner = (AActor*)Owner;
    params.MaterialAssetSet = (FMasterMaterialAssetSet)MaterialAssetSet;
    params.Priority = (EMaterialPermuterLoadingPriority)Priority;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    MaterialAssetSet = params.MaterialAssetSet;
    return (UMaterialPermuterLoadingBundle*)params.ReturnValue;
}
UMaterialPermuterLoadingBundle* UMaterialPermuterLoadingBundle::CreateKeysMaterialSetBundle(AActor* Owner, TArray<FMaterialPermuterKey> Keys, FMasterMaterialAssetSet& MaterialAssetSet, EMaterialPermuterLoadingPriority Priority) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MaterialPermuterLoadingBundle.CreateKeysMaterialSetBundle"));
    struct Params_CreateKeysMaterialSetBundle {
        AActor* Owner; // 0x0
        TArray<FMaterialPermuterKey> Keys; // 0x8
        FMasterMaterialAssetSet MaterialAssetSet; // 0x18
        EMaterialPermuterLoadingPriority Priority; // 0x528
        char pad_529[0x7];
        UMaterialPermuterLoadingBundle* ReturnValue; // 0x530
    }; // Size: 0x538
    Params_CreateKeysMaterialSetBundle params{};
    params.Owner = (AActor*)Owner;
    params.Keys = (TArray<FMaterialPermuterKey>)Keys;
    params.MaterialAssetSet = (FMasterMaterialAssetSet)MaterialAssetSet;
    params.Priority = (EMaterialPermuterLoadingPriority)Priority;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    MaterialAssetSet = params.MaterialAssetSet;
    return (UMaterialPermuterLoadingBundle*)params.ReturnValue;
}
UMaterialPermuterLoadingBundle* UMaterialPermuterLoadingBundle::CreateKeysBundleForOwnerOnly(AActor* Owner, TArray<FMaterialPermuterKey> Keys, EMaterialPermuterLoadingPriority Priority, bool bAttachedChildren, bool bComponentChildren) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MaterialPermuterLoadingBundle.CreateKeysBundleForOwnerOnly"));
    struct Params_CreateKeysBundleForOwnerOnly {
        AActor* Owner; // 0x0
        TArray<FMaterialPermuterKey> Keys; // 0x8
        EMaterialPermuterLoadingPriority Priority; // 0x18
        bool bAttachedChildren; // 0x19
        bool bComponentChildren; // 0x1a
        char pad_1b[0x5];
        UMaterialPermuterLoadingBundle* ReturnValue; // 0x20
    }; // Size: 0x28
    Params_CreateKeysBundleForOwnerOnly params{};
    params.Owner = (AActor*)Owner;
    params.Keys = (TArray<FMaterialPermuterKey>)Keys;
    params.Priority = (EMaterialPermuterLoadingPriority)Priority;
    params.bAttachedChildren = (bool)bAttachedChildren;
    params.bComponentChildren = (bool)bComponentChildren;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UMaterialPermuterLoadingBundle*)params.ReturnValue;
}
UMaterialPermuterLoadingBundle* UMaterialPermuterLoadingBundle::CreateKeysBundle(AActor* Owner, TArray<FMaterialPermuterKey> Keys, EMaterialPermuterLoadingPriority Priority) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MaterialPermuterLoadingBundle.CreateKeysBundle"));
    struct Params_CreateKeysBundle {
        AActor* Owner; // 0x0
        TArray<FMaterialPermuterKey> Keys; // 0x8
        EMaterialPermuterLoadingPriority Priority; // 0x18
        char pad_19[0x7];
        UMaterialPermuterLoadingBundle* ReturnValue; // 0x20
    }; // Size: 0x28
    Params_CreateKeysBundle params{};
    params.Owner = (AActor*)Owner;
    params.Keys = (TArray<FMaterialPermuterKey>)Keys;
    params.Priority = (EMaterialPermuterLoadingPriority)Priority;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UMaterialPermuterLoadingBundle*)params.ReturnValue;
}
UMaterialPermuterLoadingBundle* UMaterialPermuterLoadingBundle::CreateKeyBundleForOwnerOnly(AActor* Owner, FMaterialPermuterKey Key, EMaterialPermuterLoadingPriority Priority, bool bAttachedChildren, bool bComponentChildren) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MaterialPermuterLoadingBundle.CreateKeyBundleForOwnerOnly"));
    struct Params_CreateKeyBundleForOwnerOnly {
        AActor* Owner; // 0x0
        FMaterialPermuterKey Key; // 0x8
        EMaterialPermuterLoadingPriority Priority; // 0x18
        bool bAttachedChildren; // 0x19
        bool bComponentChildren; // 0x1a
        char pad_1b[0x5];
        UMaterialPermuterLoadingBundle* ReturnValue; // 0x20
    }; // Size: 0x28
    Params_CreateKeyBundleForOwnerOnly params{};
    params.Owner = (AActor*)Owner;
    params.Key = (FMaterialPermuterKey)Key;
    params.Priority = (EMaterialPermuterLoadingPriority)Priority;
    params.bAttachedChildren = (bool)bAttachedChildren;
    params.bComponentChildren = (bool)bComponentChildren;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UMaterialPermuterLoadingBundle*)params.ReturnValue;
}
UMaterialPermuterLoadingBundle* UMaterialPermuterLoadingBundle::CreateKeyBundle(AActor* Owner, FMaterialPermuterKey Key, EMaterialPermuterLoadingPriority Priority) {
    static auto func = (UFunction*)(find_uobject("Function /Script/MaterialPermuter.MaterialPermuterLoadingBundle.CreateKeyBundle"));
    struct Params_CreateKeyBundle {
        AActor* Owner; // 0x0
        FMaterialPermuterKey Key; // 0x8
        EMaterialPermuterLoadingPriority Priority; // 0x18
        char pad_19[0x7];
        UMaterialPermuterLoadingBundle* ReturnValue; // 0x20
    }; // Size: 0x28
    Params_CreateKeyBundle params{};
    params.Owner = (AActor*)Owner;
    params.Key = (FMaterialPermuterKey)Key;
    params.Priority = (EMaterialPermuterLoadingPriority)Priority;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UMaterialPermuterLoadingBundle*)params.ReturnValue;
}
