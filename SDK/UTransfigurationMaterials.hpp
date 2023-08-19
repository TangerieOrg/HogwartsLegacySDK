#pragma once
#include <cstdint>
#include "UDataAsset.hpp"
class UMaterialInterface;
#pragma pack(push, 1)
class UTransfigurationMaterials : public UDataAsset {
public:
    UMaterialInterface* VFXFlipbookMaster; // 0x30
    static UTransfigurationMaterials* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
