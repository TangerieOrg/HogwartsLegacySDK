#pragma once
#include <cstdint>
#include "ERichCurveInterpMode.hpp"
#include "ERichCurveTangentMode.hpp"
#pragma pack(push, 1)
struct FAnimationRecordingSettings {
    bool bRecordInWorldSpace; // 0x0
    bool bRemoveRootAnimation; // 0x1
    bool bAutoSaveAsset; // 0x2
    char pad_3[0x1];
    float SampleRate; // 0x4
    float Length; // 0x8
    ERichCurveInterpMode InterpMode; // 0xc
    ERichCurveTangentMode TangentMode; // 0xd
    char pad_e[0x1];
    bool bRecordTransforms; // 0xf
    bool bRecordCurves; // 0x10
    char pad_11[0x3];
}; // Size: 0x14
#pragma pack(pop)
