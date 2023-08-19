#pragma once
#include <cstdint>
#include "UBTTask_SetBlackboardValue.hpp"
#pragma pack(push, 1)
class UBTTask_SetBlackboardBool : public UBTTask_SetBlackboardValue {
public:
    bool Value; // 0x98
    char pad_99[0x7];
    static UBTTask_SetBlackboardBool* StaticClass();
}; // Size: 0xa0
#pragma pack(pop)
