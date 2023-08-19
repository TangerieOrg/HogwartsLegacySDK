#pragma once
#include <cstdint>
#include "UDataAsset.hpp"
#pragma pack(push, 1)
class UPrimaryDataAsset : public UDataAsset {
public:
    static UPrimaryDataAsset* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
