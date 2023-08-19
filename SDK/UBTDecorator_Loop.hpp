#pragma once
#include <cstdint>
#include "UBTDecorator.hpp"
#pragma pack(push, 1)
class UBTDecorator_Loop : public UBTDecorator {
public:
    int32_t NumLoops; // 0x68
    bool bInfiniteLoop; // 0x6c
    char pad_6d[0x3];
    float InfiniteLoopTimeoutTime; // 0x70
    char pad_74[0x4];
    static UBTDecorator_Loop* StaticClass();
}; // Size: 0x78
#pragma pack(pop)
