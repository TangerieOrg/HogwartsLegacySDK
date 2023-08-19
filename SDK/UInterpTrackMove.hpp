#pragma once
#include <cstdint>
#include "EInterpTrackMoveRotMode.hpp"
#include "FInterpCurveVector.hpp"
#include "FInterpLookupTrack.hpp"
#include "UInterpTrack.hpp"
#pragma pack(push, 1)
class UInterpTrackMove : public UInterpTrack {
public:
    FInterpCurveVector PosTrack; // 0x70
    FInterpCurveVector EulerTrack; // 0x88
    FInterpLookupTrack LookupTrack; // 0xa0
    FName LookAtGroupName; // 0xb0
    float LinCurveTension; // 0xb8
    float AngCurveTension; // 0xbc
    uint8_t bUseQuatInterpolation : 1; // 0xc0
    uint8_t bShowArrowAtKeys : 1; // 0xc0
    uint8_t bDisableMovement : 1; // 0xc0
    uint8_t bShowTranslationOnCurveEd : 1; // 0xc0
    uint8_t bShowRotationOnCurveEd : 1; // 0xc0
    uint8_t bHide3DTrack : 1; // 0xc0
    uint8_t pad_bitfield_c0_6 : 2;
    char pad_c1[0x3];
    EInterpTrackMoveRotMode RotMode; // 0xc4
    char pad_c5[0x3];
    static UInterpTrackMove* StaticClass();
}; // Size: 0xc8
#pragma pack(pop)
