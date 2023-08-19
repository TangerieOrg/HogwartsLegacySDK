#pragma once
#include <cstdint>
#include "EMaterialPermuterLoadingBundleState.hpp"
#include "EMaterialPermuterLoadingPriority.hpp"
#include "FMaterialPermuterKey.hpp"
#include "FTimespan.hpp"
#include "UActorComponent.hpp"
class UMaterialInterface;
class UObject;
class AActor;
struct FMasterMaterialAssetSet;
#pragma pack(push, 1)
class UMaterialPermuterLoadingBundle : public UActorComponent {
public:
    char pad_c8[0x50];
    TArray<UMaterialInterface*> LoadedAssets; // 0x118
    TArray<void*> MissingAssets; // 0x128
    char pad_138[0x50];
    EMaterialPermuterLoadingPriority Priority; // 0x188
    EMaterialPermuterLoadingBundleState State; // 0x189
    char pad_18a[0x6];
    FTimespan StartTime; // 0x190
    int32_t TimeWarnings; // 0x198
    float LastPercentageBroadcast; // 0x19c
    static UMaterialPermuterLoadingBundle* StaticClass();
    void ValidBundle(bool& bValid);
    static AActor* GetWorldBundleOwner(UObject* WorldContextObject);
    void GetPercentageLoaded(float& Loaded);
    void FullyLoaded(bool& bIsFullyLoaded);
    static UMaterialPermuterLoadingBundle* CreateMaterialSetBundleForOwnerOnly(AActor* Owner, EMaterialPermuterLoadingPriority Priority, bool bAttachedChildren, bool bComponentChildren);
    static UMaterialPermuterLoadingBundle* CreateMaterialSetBundle(AActor* Owner, FMasterMaterialAssetSet& MaterialAssetSet, EMaterialPermuterLoadingPriority Priority);
    static UMaterialPermuterLoadingBundle* CreateKeysMaterialSetBundle(AActor* Owner, TArray<FMaterialPermuterKey> Keys, FMasterMaterialAssetSet& MaterialAssetSet, EMaterialPermuterLoadingPriority Priority);
    static UMaterialPermuterLoadingBundle* CreateKeysBundleForOwnerOnly(AActor* Owner, TArray<FMaterialPermuterKey> Keys, EMaterialPermuterLoadingPriority Priority, bool bAttachedChildren, bool bComponentChildren);
    static UMaterialPermuterLoadingBundle* CreateKeysBundle(AActor* Owner, TArray<FMaterialPermuterKey> Keys, EMaterialPermuterLoadingPriority Priority);
    static UMaterialPermuterLoadingBundle* CreateKeyMaterialSetBundle(AActor* Owner, FMaterialPermuterKey Key, FMasterMaterialAssetSet& MaterialAssetSet, EMaterialPermuterLoadingPriority Priority);
    static UMaterialPermuterLoadingBundle* CreateKeyBundleForOwnerOnly(AActor* Owner, FMaterialPermuterKey Key, EMaterialPermuterLoadingPriority Priority, bool bAttachedChildren, bool bComponentChildren);
    static UMaterialPermuterLoadingBundle* CreateKeyBundle(AActor* Owner, FMaterialPermuterKey Key, EMaterialPermuterLoadingPriority Priority);
}; // Size: 0x1a0
#pragma pack(pop)
