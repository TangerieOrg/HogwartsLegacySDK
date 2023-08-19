#pragma once
#include <cstdint>
#include "FGameplayTagContainer.hpp"
#include "UAblPlayMultiFxAssetBaseTask.hpp"
class UAblObjectArchitectTagChooser;
#pragma pack(push, 1)
class UAblPlayObjectArchitectMultiFxAssetTask : public UAblPlayMultiFxAssetBaseTask {
public:
    FGameplayTagContainer BaseObjectArchitectTags; // 0xa0
    TArray<UAblObjectArchitectTagChooser*> TagChoosers; // 0xc0
    static UAblPlayObjectArchitectMultiFxAssetTask* StaticClass();
}; // Size: 0xd0
#pragma pack(pop)
