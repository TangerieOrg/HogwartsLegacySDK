#pragma once
#include <cstdint>
#include "UAblSetParameterValue.hpp"
class UTexture;
#pragma pack(push, 1)
class UAblSetTextureParameterValue : public UAblSetParameterValue {
public:
    UTexture* m_Texture; // 0x30
    static UAblSetTextureParameterValue* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
