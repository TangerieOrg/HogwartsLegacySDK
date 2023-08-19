#pragma once
#include <cstdint>
#include "UAblSetParameterValue.hpp"
#pragma pack(push, 1)
class UAblSetScalarParameterValue : public UAblSetParameterValue {
public:
    float m_Scalar; // 0x30
    char pad_34[0x4];
    static UAblSetScalarParameterValue* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
