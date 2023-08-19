#pragma once
#include <cstdint>
#include "UBTDecorator.hpp"
#pragma pack(push, 1)
class UBTDecorator_TimeLimit : public UBTDecorator {
public:
    float TimeLimit; // 0x68
    char pad_6c[0x4];
    static UBTDecorator_TimeLimit* StaticClass();
}; // Size: 0x70
#pragma pack(pop)
