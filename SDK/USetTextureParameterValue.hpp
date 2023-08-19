#pragma once
#include <cstdint>
#include "USetParameterValue.hpp"
class UTexture;
#pragma pack(push, 1)
class USetTextureParameterValue : public USetParameterValue {
public:
    UTexture* m_Texture; // 0x30
    static USetTextureParameterValue* StaticClass();
}; // Size: 0x38
#pragma pack(pop)
