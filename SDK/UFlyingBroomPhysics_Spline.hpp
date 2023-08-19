#pragma once
#include <cstdint>
#include "ECustomInterpType\Type.hpp"
#include "UFlyingBroomPhysics.hpp"
#pragma pack(push, 1)
class UFlyingBroomPhysics_Spline : public UFlyingBroomPhysics {
public:
    float SplineTravelMaxSpeed; // 0x38
    float SplineTravelMinSpeed; // 0x3c
    float SplineTravelTurboSpeed; // 0x40
    float MaxHorizontalOffset; // 0x44
    float HorizontalOffsetSpeed; // 0x48
    float BarrelRollOffset; // 0x4c
    float MaxVerticalOffsetUp; // 0x50
    float MaxVerticalOffsetDown; // 0x54
    float VerticalOffsetSpeed; // 0x58
    float MaxYaw; // 0x5c
    float YawInterpSpeed; // 0x60
    ECustomInterpType::Type YawInterpType; // 0x64
    char pad_65[0x3];
    float AnimYawInterpSpeed; // 0x68
    ECustomInterpType::Type AnimYawInterpType; // 0x6c
    char pad_6d[0x3];
    float MaxPitch; // 0x70
    float PitchInterpSpeed; // 0x74
    ECustomInterpType::Type PitchInterpType; // 0x78
    char pad_79[0x3];
    float SplineForwardInterpSpeed; // 0x7c
    ECustomInterpType::Type SplineForwardInterpType; // 0x80
    char pad_81[0x3];
    float SplineOffsetInterpSpeed; // 0x84
    ECustomInterpType::Type SplineOffsetInterpType; // 0x88
    char pad_89[0x3];
    float OrientToSplineSpeed; // 0x8c
    float MaxAnimPitch; // 0x90
    float MaxAnimYaw; // 0x94
    float EnemyCriticalMinDistanceOffset; // 0x98
    float EnemyMinDistanceOffset; // 0x9c
    float EnemyMaxDistanceOffset; // 0xa0
    float EnemyCriticalMaxDistanceOffset; // 0xa4
    float CameraInterpSpeed; // 0xa8
    ECustomInterpType::Type CameraInterpType; // 0xac
    char pad_ad[0x3];
    static UFlyingBroomPhysics_Spline* StaticClass();
}; // Size: 0xb0
#pragma pack(pop)
