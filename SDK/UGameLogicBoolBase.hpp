#pragma once
#include <cstdint>
#include "UGameLogicBase.hpp"
#pragma pack(push, 1)
class UGameLogicBoolBase : public UGameLogicBase {
public:
    char pad_28[0x18];
    static UGameLogicBoolBase* StaticClass();
    bool GetCachedValue();
}; // Size: 0x40
#pragma pack(pop)
