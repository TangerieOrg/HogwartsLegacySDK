#pragma once
#include <cstdint>
#include "UDataAsset.hpp"
#pragma pack(push, 1)
class UWorldEventCondition : public UDataAsset {
public:
    bool bNotValid; // 0x30
    char pad_31[0x7];
    static UWorldEventCondition* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
