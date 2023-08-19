#pragma once
#include <cstdint>
#include "FBaseArchitectAsset_SoftDependencyContainer.hpp"
#include "FGameplayTag.hpp"
#include "UDataAsset.hpp"
#pragma pack(push, 1)
class UBaseArchitectAsset : public UDataAsset {
public:
    TArray<UBaseArchitectAsset*> HardDependencies; // 0x30
    TArray<FBaseArchitectAsset_SoftDependencyContainer> SoftDependencies; // 0x40
    TArray<FGameplayTag> DefaultKeyOrder; // 0x50
    char pad_60[0x70];
    static UBaseArchitectAsset* StaticClass();
}; // Size: 0xd0
#pragma pack(pop)
