#pragma once
#include <cstdint>
#include "FLiveMaterialsLoadedObjects.hpp"
#include "FLiveMaterialsPendingLoads.hpp"
#include "FMaterialPermuterLoadingBundleList.hpp"
#include "FMaterialPermuterLoadingTriggers.hpp"
#include "FMaterialPermuterMaterialAssetIndex.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class UMaterialPermuterLiveMaterials : public UObject {
public:
    char pad_28[0x8];
    FMaterialPermuterLoadingTriggers Triggers; // 0x30
    FMaterialPermuterLoadingBundleList Bundles; // 0x80
    FMaterialPermuterMaterialAssetIndex Index; // 0xb8
    FLiveMaterialsLoadedObjects LoadedObjects; // 0xf0
    FLiveMaterialsPendingLoads PendingLoads; // 0x1e8
    TArray<void*> Missing; // 0x238
    TArray<void*> HasBegunPlayWorlds; // 0x248
    static UMaterialPermuterLiveMaterials* StaticClass();
}; // Size: 0x258
#pragma pack(pop)
