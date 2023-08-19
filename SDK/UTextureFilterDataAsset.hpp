#pragma once
#include <cstdint>
#include "UDataAsset.hpp"
#pragma pack(push, 1)
class UTextureFilterDataAsset : public UDataAsset {
public:
    char pad_30[0x50];
    static UTextureFilterDataAsset* StaticClass();
}; // Size: 0x80
#pragma pack(pop)
