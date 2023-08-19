#pragma once
#include <cstdint>
#include "UDataAsset.hpp"
class UMultiFX2_Base;
#pragma pack(push, 1)
class UMultiFX2Asset : public UDataAsset {
public:
    TArray<UMultiFX2_Base*> FX2; // 0x30
    static UMultiFX2Asset* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
