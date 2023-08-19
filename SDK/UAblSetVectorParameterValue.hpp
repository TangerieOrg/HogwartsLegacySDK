#pragma once
#include <cstdint>
#include "FLinearColor.hpp"
#include "UAblSetParameterValue.hpp"
#pragma pack(push, 1)
class UAblSetVectorParameterValue : public UAblSetParameterValue {
public:
    FLinearColor m_Vector; // 0x30
    static UAblSetVectorParameterValue* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
