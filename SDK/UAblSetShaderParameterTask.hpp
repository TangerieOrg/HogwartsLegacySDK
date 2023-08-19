#pragma once
#include <cstdint>
#include "FAlphaBlend.hpp"
#include "UAblAbilityTask.hpp"
class UAblSetParameterValue;
#pragma pack(push, 1)
class UAblSetShaderParameterTask : public UAblAbilityTask {
public:
    FName m_ParameterName; // 0x70
    UAblSetParameterValue* m_value; // 0x78
    FAlphaBlend m_BlendIn; // 0x80
    bool m_RestoreValueOnEnd; // 0xb0
    char pad_b1[0x7];
    FAlphaBlend m_BlendOut; // 0xb8
    static UAblSetShaderParameterTask* StaticClass();
}; // Size: 0xe8
#pragma pack(pop)
