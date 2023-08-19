#pragma once
#include <cstdint>
#include "FLinearColor.hpp"
#include "USetParameterValue.hpp"
#pragma pack(push, 1)
class USetVectorParameterValue : public USetParameterValue {
public:
    FLinearColor m_Vector; // 0x30
    static USetVectorParameterValue* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
