#pragma once
#include <cstdint>
#include "UNameProvider.hpp"
#pragma pack(push, 1)
class UName_Direct : public UNameProvider {
public:
    FName Value; // 0x28
    static UName_Direct* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
