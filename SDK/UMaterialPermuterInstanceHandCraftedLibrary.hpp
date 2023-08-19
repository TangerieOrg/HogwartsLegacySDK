#pragma once
#include <cstdint>
#include "UDataAsset.hpp"
#pragma pack(push, 1)
class UMaterialPermuterInstanceHandCraftedLibrary : public UDataAsset {
public:
    char pad_30[0xa0];
    static UMaterialPermuterInstanceHandCraftedLibrary* StaticClass();
    void Build();
}; // Size: 0xd0
#pragma pack(pop)
