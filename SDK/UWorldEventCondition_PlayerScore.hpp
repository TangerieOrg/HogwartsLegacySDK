#pragma once
#include <cstdint>
#include "UWorldEventCondition.hpp"
#pragma pack(push, 1)
class UWorldEventCondition_PlayerScore : public UWorldEventCondition {
public:
    int32_t MinPlayerScore; // 0x38
    int32_t MaxPlayerScore; // 0x3c
    static UWorldEventCondition_PlayerScore* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
