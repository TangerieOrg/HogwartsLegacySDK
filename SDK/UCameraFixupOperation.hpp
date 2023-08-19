#pragma once
#include <cstdint>
#include "UObject.hpp"
#pragma pack(push, 1)
class UCameraFixupOperation : public UObject {
public:
    bool Enabled; // 0x28
    char pad_29[0x3];
    float IgnorePreviousStateTime; // 0x2c
    static UCameraFixupOperation* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
