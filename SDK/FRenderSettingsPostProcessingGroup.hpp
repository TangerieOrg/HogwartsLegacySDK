#pragma once
#include <cstdint>
#include "FRenderSettingsPPAmbientName.hpp"
#include "FRenderSettingsPPBloomName.hpp"
#include "FRenderSettingsPPColorGradingName.hpp"
#include "FRenderSettingsPPDepthOfFieldName.hpp"
#include "FRenderSettingsPPExposureName.hpp"
#include "FRenderSettingsPPFilmName.hpp"
#include "FRenderSettingsPPLensFXName.hpp"
#include "FRenderSettingsPPMotionBlurName.hpp"
#include "FRenderSettingsPPProbesName.hpp"
#include "FRenderSettingsPPScreenSpaceReflectionsName.hpp"
#pragma pack(push, 1)
struct FRenderSettingsPostProcessingGroup {
    uint8_t bOverride_Exposure : 1; // 0x0
    uint8_t bOverride_ColorGrading : 1; // 0x0
    uint8_t bOverride_Film : 1; // 0x0
    uint8_t bOverride_LensFX : 1; // 0x0
    uint8_t bOverride_Bloom : 1; // 0x0
    uint8_t bOverride_MotionBlur : 1; // 0x0
    uint8_t bOverride_DepthOfField : 1; // 0x0
    uint8_t bOverride_Ambient : 1; // 0x0
    uint8_t bOverride_ScreenSpaceReflections : 1; // 0x1
    uint8_t bOverride_Probes : 1; // 0x1
    uint8_t pad_bitfield_1_2 : 6;
    char pad_2[0x2];
    FName Name; // 0x4
    FRenderSettingsPPExposureName Exposure; // 0xc
    FRenderSettingsPPColorGradingName ColorGrading; // 0x14
    FRenderSettingsPPFilmName Film; // 0x1c
    FRenderSettingsPPLensFXName LensFX; // 0x24
    FRenderSettingsPPBloomName Bloom; // 0x2c
    FRenderSettingsPPMotionBlurName MotionBlur; // 0x34
    FRenderSettingsPPDepthOfFieldName DepthOfField; // 0x3c
    FRenderSettingsPPAmbientName Ambient; // 0x44
    FRenderSettingsPPScreenSpaceReflectionsName ScreenSpaceReflections; // 0x4c
    FRenderSettingsPPProbesName Probes; // 0x54
}; // Size: 0x5c
#pragma pack(pop)
