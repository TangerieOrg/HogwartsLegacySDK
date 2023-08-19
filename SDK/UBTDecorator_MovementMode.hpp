#pragma once
#include <cstdint>
#include "UBTDecorator.hpp"
#pragma pack(push, 1)
class UBTDecorator_MovementMode : public UBTDecorator {
public:
    char pad_68[0x50];
    static UBTDecorator_MovementMode* StaticClass();
}; // Size: 0xb8
#pragma pack(pop)
