#pragma once
#include <cstdint>
#include "FLinearColor.hpp"
#pragma pack(push, 1)
struct FSTR_GroundFog {
    float FogDensity_13_9F572E574294C113AB09E1AA793A27A6; // 0x0
    float MainNoiseDensity_46_286515C54DE7E8E7A27CBE99529E2241; // 0x4
    float MainNoiseSoftness_47_14163E8A44683AA2CEE7028738FB81B1; // 0x8
    float MainNoiseTiling_48_2B324196446EBD88C07B78A38BD202E0; // 0xc
    float CloseNoiseAmount_45_CBD08FFC40AE6F49A18ED39F3D0019AA; // 0x10
    float CloseNoiseTiling_44_BC42B6D1495C811B134310B55ABBA837; // 0x14
    float DistortFogAmount_49_5CECBE1A44E23168BFE2029BA5C592A9; // 0x18
    float MinimumFogDensity_27_B3F398B049D19778CD63D0B455156A2E; // 0x1c
    FLinearColor FogColor_34_625156C848EB1B4A0ECEF2AFAB0014D1; // 0x20
    float ShadowStrength_55_91CE9BAD4BB96A70C697D59CCE3FF4F9; // 0x30
    float ShadowHeight_59_0C9F7E994FD8E7CAE5FFEBA0408CF193; // 0x34
    float VerticalNoiseMovement_52_580D44CD482AF2447ED60F8A94ABCAE0; // 0x38
    float NearcameraFalloff_57_73F3063F433BE2B929F559B647733F2B; // 0x3c
    float HazeDensity_62_806CB26E4C6802B188861EBCAF9EA9DA; // 0x40
    float CloseDensity_64_9654E9EF4AD7366674EB25A46C1C63DB; // 0x44
    float CloseShadowDensity_66_EC9A50C244557B95F40AA8BF9548CFC0; // 0x48
}; // Size: 0x4c
#pragma pack(pop)