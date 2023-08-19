#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "EMaterialPermuterLoadingPriority.hpp"
#include "FMaterialPermuterKeyProperty.hpp"
class UMaterialInterface;
class UMaterialPermuterLoadingBundle;
#pragma pack(push, 1)
class AMaterialPreLoadKeysActor : public AActor {
public:
    TArray<FMaterialPermuterKeyProperty> MaterialPermuterKeys; // 0x248
    EMaterialPermuterLoadingPriority Priority; // 0x258
    bool bStaticLoad; // 0x259
    char pad_25a[0x6];
    TArray<UMaterialInterface*> PreLoadedMaterials; // 0x260
    TArray<UMaterialInterface*> DynamicallyLoadedMaterials; // 0x270
    UMaterialPermuterLoadingBundle* LoadingBundle; // 0x280
    static AMaterialPreLoadKeysActor* StaticClass();
    void BuildPreLoads();
}; // Size: 0x288
#pragma pack(pop)
