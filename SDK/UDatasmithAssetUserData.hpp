#pragma once
#include <cstdint>
#include "UAssetUserData.hpp"
#pragma pack(push, 1)
class UDatasmithAssetUserData : public UAssetUserData {
public:
    char pad_28[0x50];
    static UDatasmithAssetUserData* StaticClass();
}; // Size: 0x78
#pragma pack(pop)
