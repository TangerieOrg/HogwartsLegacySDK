#pragma once
#include <cstdint>
#include "UBTDecorator.hpp"
#pragma pack(push, 1)
class UBTDecorator_JumpFallTimeout : public UBTDecorator {
public:
    float TimeLimit; // 0x68
    char pad_6c[0x4];
    static UBTDecorator_JumpFallTimeout* StaticClass();
}; // Size: 0x70
#pragma pack(pop)
