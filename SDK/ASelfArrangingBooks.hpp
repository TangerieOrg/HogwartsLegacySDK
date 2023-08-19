#pragma once
#include <cstdint>
#include "AActor.hpp"
#include "FRotator.hpp"
class USplineComponent;
class UStaticMeshComponent;
class UTimelineComponent;
class UCurveFloat;
#pragma pack(push, 1)
class ASelfArrangingBooks : public AActor {
public:
    TArray<USplineComponent*> SplineArray; // 0x248
    TArray<UStaticMeshComponent*> RandomSMCs; // 0x258
    int32_t RandomSelection; // 0x268
    bool bCanPlay; // 0x26c
    bool bPlayReverse; // 0x26d
    char pad_26e[0x2];
    int32_t NumberOfBooks; // 0x270
    int32_t NumberOfPaths; // 0x274
    float ScaleOfProps; // 0x278
    float spacing; // 0x27c
    float DistanceInbetweenProps; // 0x280
    FRotator RotationOfProps; // 0x284
    UTimelineComponent* TM_Spline; // 0x290
    UCurveFloat* PathCurve; // 0x298
    UCurveFloat* Rot1Curve; // 0x2a0
    UCurveFloat* Rot2Curve; // 0x2a8
    UCurveFloat* Rot3Curve; // 0x2b0
    UCurveFloat* Rot4Curve; // 0x2b8
    static ASelfArrangingBooks* StaticClass();
    void UpdateBookTransform(int32_t idx, float Path, float Rot);
    void OnTimelineUpdate(float Value);
    void OnTimelineFinished();
}; // Size: 0x2c0
#pragma pack(pop)
