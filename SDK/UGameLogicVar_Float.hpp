#pragma once
#include <cstdint>
#include "UGameLogicBase.hpp"
#pragma pack(push, 1)
class UGameLogicVar_Float : public UGameLogicBase {
public:
    char pad_28[0x18];
    static UGameLogicVar_Float* StaticClass();
    void Subtract(float Delta);
    void SetCachedValue(float Value);
    void Multiply(float Factor);
    float GetCachedValue();
    void Divide(float Factor);
    void Add(float Delta);
}; // Size: 0x40
#pragma pack(pop)
