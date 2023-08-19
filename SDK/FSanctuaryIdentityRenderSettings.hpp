#pragma once
#include <cstdint>
#include "FCharacterLightRigAdjustmentsName.hpp"
#include "FDistanceFogName.hpp"
#include "FRenderSettingsEmissiveAdaptationName.hpp"
#include "FRenderSettingsPPAmbientName.hpp"
#include "FRenderSettingsPPBloomName.hpp"
#include "FRenderSettingsPPColorGradingName.hpp"
#include "FRenderSettingsPPDepthOfFieldName.hpp"
#include "FRenderSettingsPPExposureName.hpp"
#include "FRenderSettingsPPFilmName.hpp"
#include "FRenderSettingsPPLensFXName.hpp"
#include "FRenderSettingsPPMotionBlurName.hpp"
#include "FRenderSettingsPPScreenSpaceReflectionsName.hpp"
#pragma pack(push, 1)
struct FSanctuaryIdentityRenderSettings {
    uint8_t bOverride_Exposure : 1; // 0x0
    uint8_t bOverride_ColorGrading : 1; // 0x0
    uint8_t bOverride_Film : 1; // 0x0
    uint8_t bOverride_LensFX : 1; // 0x0
    uint8_t bOverride_Bloom : 1; // 0x0
    uint8_t bOverride_MotionBlur : 1; // 0x0
    uint8_t bOverride_DepthOfField : 1; // 0x0
    uint8_t bOverride_Ambient : 1; // 0x0
    uint8_t bOverride_ScreenSpaceReflections : 1; // 0x1
    uint8_t bOverride_EmissiveAdaptation : 1; // 0x1
    uint8_t bOverride_ExposureTweak : 1; // 0x1
    uint8_t bOverride_DistanceFog : 1; // 0x1
    uint8_t bOverride_CharacterLightRigAdjustments : 1; // 0x1
    uint8_t pad_bitfield_1_5 : 3;
    char pad_2[0x2];
    FRenderSettingsPPExposureName Exposure; // 0x4
    FRenderSettingsPPColorGradingName ColorGrading; // 0xc
    FRenderSettingsPPFilmName Film; // 0x14
    FRenderSettingsPPLensFXName LensFX; // 0x1c
    FRenderSettingsPPBloomName Bloom; // 0x24
    FRenderSettingsPPMotionBlurName MotionBlur; // 0x2c
    FRenderSettingsPPDepthOfFieldName DepthOfField; // 0x34
    FRenderSettingsPPAmbientName Ambient; // 0x3c
    FRenderSettingsPPScreenSpaceReflectionsName ScreenSpaceReflections; // 0x44
    FRenderSettingsEmissiveAdaptationName EmissiveAdaptation; // 0x4c
    float ExposureTweak; // 0x54
    FDistanceFogName DistanceFog; // 0x58
    FCharacterLightRigAdjustmentsName CharacterLightRigAdjustments; // 0x60
}; // Size: 0x68
#pragma pack(pop)
