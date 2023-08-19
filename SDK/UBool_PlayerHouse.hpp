#pragma once
#include <cstdint>
#include "EBool_PlayerHouse.hpp"
#include "UBoolProvider.hpp"
#pragma pack(push, 1)
class UBool_PlayerHouse : public UBoolProvider {
public:
    EBool_PlayerHouse PlayerHouse; // 0x28
    char pad_2c[0x4];
    static UBool_PlayerHouse* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
