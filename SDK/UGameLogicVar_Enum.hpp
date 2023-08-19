#pragma once
#include <cstdint>
#include "UGameLogicBase.hpp"
#pragma pack(push, 1)
class UGameLogicVar_Enum : public UGameLogicBase {
public:
    char pad_28[0x18];
    static UGameLogicVar_Enum* StaticClass();
    void SetCachedValue(uint8_t Value);
    uint8_t GetCachedValue();
}; // Size: 0x40
#pragma pack(pop)
