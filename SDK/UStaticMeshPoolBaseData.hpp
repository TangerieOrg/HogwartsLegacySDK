#pragma once
#include <cstdint>
#include "FConditionalStaticMeshPool.hpp"
#include "UDataAsset.hpp"
#pragma pack(push, 1)
class UStaticMeshPoolBaseData : public UDataAsset {
public:
    TArray<FConditionalStaticMeshPool> ConditionalStaticMeshPoolGroup; // 0x30
    static UStaticMeshPoolBaseData* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
