#pragma once
#include <cstdint>
#include "UInterface.hpp"
class UBlackboardData;
#pragma pack(push, 1)
class UBlackboardAssetProvider : public UInterface {
public:
    static UBlackboardAssetProvider* StaticClass();
    UBlackboardData* GetBlackboardAsset();
}; // Size: 0x28
#pragma pack(pop)
