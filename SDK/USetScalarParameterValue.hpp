#pragma once
#include <cstdint>
#include "USetParameterValue.hpp"
#pragma pack(push, 1)
class USetScalarParameterValue : public USetParameterValue {
public:
    float m_Scalar; // 0x30
    char pad_34[0x4];
    static USetScalarParameterValue* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
