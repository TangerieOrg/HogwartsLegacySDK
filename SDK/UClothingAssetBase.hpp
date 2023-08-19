#pragma once
#include <cstdint>
#include "FGuid.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class UClothingAssetBase : public UObject {
public:
    FString ImportedFilePath; // 0x28
    FGuid AssetGuid; // 0x38
    static UClothingAssetBase* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
