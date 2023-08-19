#pragma once
#include <cstdint>
#include "UBoolProvider.hpp"
#pragma pack(push, 1)
class UBool_Direct : public UBoolProvider {
public:
    bool Value; // 0x28
    char pad_29[0x7];
    static UBool_Direct* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
