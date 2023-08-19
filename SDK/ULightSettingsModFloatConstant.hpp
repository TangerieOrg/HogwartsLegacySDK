#pragma once
#include <cstdint>
#include "ULightSettingsModFloatBase.hpp"
#pragma pack(push, 1)
class ULightSettingsModFloatConstant : public ULightSettingsModFloatBase {
public:
    float Value; // 0x38
    char pad_3c[0x4];
    static ULightSettingsModFloatConstant* StaticClass();
}; // Size: 0x40
#pragma pack(pop)
