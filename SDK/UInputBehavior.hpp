#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class UInputBehavior : public UObject {
public:
    char pad_28[0x8];
    static UInputBehavior* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
