#pragma once
#include <cstdint>
#include "UGameLogicBoolBase.hpp"
#pragma pack(push, 1)
class UGameLogicVar_Bool : public UGameLogicBoolBase {
public:
    static UGameLogicVar_Bool* StaticClass();
    void SetCachedValue(bool bValue);
}; // Size: 0x40
#pragma pack(pop)
