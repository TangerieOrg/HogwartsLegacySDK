#pragma once
#include <cstdint>
#include "FCameraFilmbackSettings.hpp"
#include "FCameraFocusSettings.hpp"
#include "FCameraLensSettings.hpp"
#include "FPostProcessSettings.hpp"
#include "UObject.hpp"
#pragma pack(push, 1)
class USequenceCameraShakeCameraStandIn : public UObject {
public:
    char pad_28[0x8];
    float FieldOfView; // 0x30
    uint8_t bConstrainAspectRatio : 1; // 0x34
    uint8_t pad_bitfield_34_1 : 7;
    char pad_35[0x3];
    float AspectRatio; // 0x38
    char pad_3c[0x4];
    FPostProcessSettings PostProcessSettings; // 0x40
    float PostProcessBlendWeight; // 0x630
    FCameraFilmbackSettings Filmback; // 0x634
    FCameraLensSettings LensSettings; // 0x640
    FCameraFocusSettings FocusSettings; // 0x658
    float CurrentFocalLength; // 0x6b0
    float CurrentAperture; // 0x6b4
    float CurrentFocusDistance; // 0x6b8
    char pad_6bc[0x44];
    static USequenceCameraShakeCameraStandIn* StaticClass();
}; // Size: 0x700
#pragma pack(pop)
