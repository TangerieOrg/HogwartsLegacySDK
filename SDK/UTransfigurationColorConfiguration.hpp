#pragma once
#include <cstdint>
#include "UDataAsset.hpp"
class UMaterialInterface;
#pragma pack(push, 1)
class UTransfigurationColorConfiguration : public UDataAsset {
public:
    char pad_30[0x50];
    UMaterialInterface* TintMaster; // 0x80
    UMaterialInterface* TransitionMaster; // 0x88
    UMaterialInterface* TintMasterAlpha; // 0x90
    UMaterialInterface* TransitionMasterAlpha; // 0x98
    UMaterialInterface* TintMasterEmissive; // 0xa0
    UMaterialInterface* TransitionMasterEmissive; // 0xa8
    static UTransfigurationColorConfiguration* StaticClass();
}; // Size: 0xb0
#pragma pack(pop)
