#pragma once
#include <cstdint>
#include "UBTTask_SetBlackboardValue.hpp"
#pragma pack(push, 1)
class UBTTask_SetBlackboardFloat : public UBTTask_SetBlackboardValue {
public:
    float Value; // 0x98
    char pad_9c[0x4];
    static UBTTask_SetBlackboardFloat* StaticClass();
}; // Size: 0xa0
#pragma pack(pop)
