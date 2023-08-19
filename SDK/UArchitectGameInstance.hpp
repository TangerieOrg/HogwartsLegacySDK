#pragma once
#include <cstdint>
#include "UGameInstance.hpp"
class UInteractionArchitectAsset;
class UObjectArchitectMonolithicAsset;
class UPreLoadArchitectMonolithicAsset;
#pragma pack(push, 1)
class UArchitectGameInstance : public UGameInstance {
public:
    char pad_1a8[0x20];
    TArray<UInteractionArchitectAsset*> HardInteractionArchitectAssets; // 0x1c8
    UObjectArchitectMonolithicAsset* MonolithicObjectArchitectAsset; // 0x1d8
    UPreLoadArchitectMonolithicAsset* PreloadMonolithicArchitectAsset; // 0x1e0
    char pad_1e8[0x48];
    static UArchitectGameInstance* StaticClass();
    static UArchitectGameInstance* GetArchitectGameInstance();
}; // Size: 0x230
#pragma pack(pop)
