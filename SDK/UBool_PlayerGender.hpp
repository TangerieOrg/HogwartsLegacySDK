#pragma once
#include <cstdint>
#include "ESexType.hpp"
#include "UBoolProvider.hpp"
#pragma pack(push, 1)
class UBool_PlayerGender : public UBoolProvider {
public:
    ESexType PlayerGender; // 0x28
    char pad_29[0x7];
    static UBool_PlayerGender* StaticClass();
}; // Size: 0x30
#pragma pack(pop)
