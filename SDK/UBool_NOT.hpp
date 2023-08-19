#pragma once
#include <cstdint>
#include "UBoolProvider.hpp"
#pragma pack(push, 1)
class UBool_NOT : public UBoolProvider {
public:
    UBoolProvider* Child; // 0x28
    static UBool_NOT* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
