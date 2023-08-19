#pragma once
#include <cstdint>
#include "UObject.hpp"
class UAkMediaAssetData;
#pragma pack(push, 1)
class UAkMediaAsset : public UObject {
public:
    uint32_t ID; // 0x28
    char pad_2c[0x4];
    FString MediaName; // 0x30
    bool AutoLoad; // 0x40
    char pad_41[0x7];
    TArray<UObject*> UserData; // 0x48
    FString Language; // 0x58
    UAkMediaAssetData* CurrentMediaAssetData; // 0x68
    char pad_70[0x8];
    static UAkMediaAsset* StaticClass();
}; // Size: 0x78
#pragma pack(pop)
