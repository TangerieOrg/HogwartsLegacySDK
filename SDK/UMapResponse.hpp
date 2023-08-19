#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class UMapResponse : public UObject {
public:
    bool Handled; // 0x28
    char pad_29[0x7];
    static UMapResponse* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
