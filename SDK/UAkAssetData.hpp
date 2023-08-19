#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class UAkAssetData : public UObject {
public:
    uint32_t CachedHash; // 0x28
    char pad_2c[0x4];
    FString BankLanguage; // 0x30
    char pad_40[0x38];
    static UAkAssetData* StaticClass();
}; // Size: 0x78
#pragma pack(pop)
