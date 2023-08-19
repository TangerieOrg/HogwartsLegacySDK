#pragma once
#include <cstdint>
#include "FName_GameLogicRealm.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class UControlMapperSettings : public UObject {
public:
    FName_GameLogicRealm UsesRealm; // 0x28
    char pad_30[0xa0];
    static UControlMapperSettings* StaticClass();
}; // Size: 0xd0
#pragma pack(pop)
