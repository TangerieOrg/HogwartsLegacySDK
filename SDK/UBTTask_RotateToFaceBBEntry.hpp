#pragma once
#include <cstdint>
#include "UBTTask_BlackboardBase.hpp"
#pragma pack(push, 1)
class UBTTask_RotateToFaceBBEntry : public UBTTask_BlackboardBase {
public:
    float Precision; // 0x98
    char pad_9c[0x4];
    static UBTTask_RotateToFaceBBEntry* StaticClass();
}; // Size: 0xa0
#pragma pack(pop)
