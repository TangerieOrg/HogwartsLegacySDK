#pragma once
#include <cstdint>
#include "UDataAsset.hpp"
#pragma pack(push, 1)
class UBaseArchitectMonolithicAsset : public UDataAsset {
public:
    char pad_30[0xa0];
    static UBaseArchitectMonolithicAsset* StaticClass();
}; // Size: 0xd0
#pragma pack(pop)
