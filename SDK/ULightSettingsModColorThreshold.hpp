#pragma once
#include <cstdint>
#include "ELightRigCurveLinearColorType.hpp"
#include "FLinearColor.hpp"
#include "ULightSettingsModColorBase.hpp"
class ULightSettingsModThreshold;
#pragma pack(push, 1)
class ULightSettingsModColorThreshold : public ULightSettingsModColorBase {
public:
    ULightSettingsModThreshold* Threshold; // 0x30
    FLinearColor ColorAbove; // 0x38
    FLinearColor ColorBelow; // 0x48
    ELightRigCurveLinearColorType ColorType; // 0x58
    char pad_59[0x7];
    static ULightSettingsModColorThreshold* StaticClass();
}; // Size: 0x60
#pragma pack(pop)
