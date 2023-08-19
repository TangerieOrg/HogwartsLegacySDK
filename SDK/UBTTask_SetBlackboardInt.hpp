#pragma once
#include <cstdint>
#include "UBTTask_SetBlackboardValue.hpp"
#pragma pack(push, 1)
class UBTTask_SetBlackboardInt : public UBTTask_SetBlackboardValue {
public:
    int32_t Value; // 0x98
    char pad_9c[0x4];
    static UBTTask_SetBlackboardInt* StaticClass();
}; // Size: 0xa0
#pragma pack(pop)
