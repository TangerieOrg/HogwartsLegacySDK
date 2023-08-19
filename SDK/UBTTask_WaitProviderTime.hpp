#pragma once
#include <cstdint>
#include "FAIDataProviderFloatValue.hpp"
#include "UBTTask_Wait.hpp"
#pragma pack(push, 1)
class UBTTask_WaitProviderTime : public UBTTask_Wait {
public:
    FAIDataProviderFloatValue ParameterizedWaitTime; // 0x78
    float Deviation; // 0xb0
    char pad_b4[0x4];
    static UBTTask_WaitProviderTime* StaticClass();
}; // Size: 0xb8
#pragma pack(pop)
