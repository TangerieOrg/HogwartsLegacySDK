#pragma once
#include <cstdint>
#include "UGameLogicBase.hpp"
#pragma pack(push, 1)
class UGameLogicVar_Int32 : public UGameLogicBase {
public:
    char pad_28[0x18];
    static UGameLogicVar_Int32* StaticClass();
    void Subtract(int32_t Delta);
    void SetCachedValue(int32_t Value);
    void Multiply(int32_t Factor);
    int32_t GetCachedValue();
    void Divide(int32_t Denominator);
    void Add(int32_t Delta);
}; // Size: 0x40
#pragma pack(pop)
