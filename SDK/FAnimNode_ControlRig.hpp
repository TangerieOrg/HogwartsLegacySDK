#pragma once
#include <cstdint>
#include "EAnimAlphaInputType.hpp"
#include "FAnimNode_ControlRigBase.hpp"
#include "FInputAlphaBoolBlend.hpp"
#include "FInputScaleBias.hpp"
#include "FInputScaleBiasClamp.hpp"
class UClass;
class UControlRig;
#pragma pack(push, 1)
struct FAnimNode_ControlRig : public FAnimNode_ControlRigBase {
    UClass* ControlRigClass; // 0x170
    UControlRig* ControlRig; // 0x178
    float Alpha; // 0x180
    EAnimAlphaInputType AlphaInputType; // 0x184
    uint8_t bAlphaBoolEnabled : 1; // 0x185
    uint8_t bSetRefPoseFromSkeleton : 1; // 0x185
    uint8_t pad_bitfield_185_2 : 6;
    char pad_186[0x2];
    FInputScaleBias AlphaScaleBias; // 0x188
    FInputAlphaBoolBlend AlphaBoolBlend; // 0x190
    FName AlphaCurveName; // 0x1d8
    FInputScaleBiasClamp AlphaScaleBiasClamp; // 0x1e0
    char pad_210[0x150];
    int32_t LODThreshold; // 0x360
    char pad_364[0x4];
}; // Size: 0x368
#pragma pack(pop)
