#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class UAssetUserData : public UObject {
public:
    static UAssetUserData* StaticClass();
}; // Size: 0x28
#pragma pack(pop)
