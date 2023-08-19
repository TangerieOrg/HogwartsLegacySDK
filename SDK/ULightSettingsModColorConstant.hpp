#pragma once
#include <cstdint>
#include "ELightRigCurveLinearColorType.hpp"
#include "FLinearColor.hpp"
#include "ULightSettingsModColorBase.hpp"
#pragma pack(push, 1)
class ULightSettingsModColorConstant : public ULightSettingsModColorBase {
public:
    FLinearColor Color; // 0x30
    ELightRigCurveLinearColorType ColorType; // 0x40
    char pad_41[0x7];
    static ULightSettingsModColorConstant* StaticClass();
}; // Size: 0x48
#pragma pack(pop)
