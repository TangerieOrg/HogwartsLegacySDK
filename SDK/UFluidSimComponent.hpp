#pragma once
#include <cstdint>
#include "FFluidSimParams.hpp"
#include "FVector.hpp"
#include "USceneComponent.hpp"
class UTexture2D;
class UCurveLinearColor;
#pragma pack(push, 1)
class UFluidSimComponent : public USceneComponent {
public:
    char pad_220[0x80];
    UTexture2D* ColorMap; // 0x2a0
    char pad_2a8[0x18];
    static UFluidSimComponent* StaticClass();
    void SetVorticityTrails(float VorticityTrailsIn);
    void SetVorticity(float VorticityIn);
    void SetVolumeScale(FVector VolumeScaleIn);
    void SetVolumeMotion(bool VolumeMotionIn);
    void SetVelocityDissipation(float VelocityDissipationIn);
    void SetTimeStep(float TimeStepIn);
    void SetSourceDissipation(float SourceDissipationIn);
    void SetMotionVectorStrength(float MotionVectorStrengthIn);
    void SetFadeEdges(bool FadeEdgesIn);
    void SetEnabled(bool EnabledIn);
    void SetDrawDebugBounds(bool DrawDebugBoundsIn);
    void SetDensity(float DensityIn);
    void SetComputeDimensions(FVector ComputeDimensionsIn);
    void SetColorIntensity(float ColorIntensityIn);
    void SetColorCurveScale(float ColorCurveScaleIn);
    void SetColorCurve(UCurveLinearColor* ColorCurveIn);
    void SetBuoyancyGravity(FVector BuoyancyGravityIn);
    float GetVorticityTrails();
    float GetVorticity();
    FVector GetVolumeScale();
    bool GetVolumeMotion();
    float GetVelocityDissipation();
    float GetTimeStep();
    float GetMotionVectorStrength();
    bool GetFadeEdges();
    bool GetEnabled();
    bool GetDrawDebugBounds();
    float GetDensity();
    FVector GetComputeDimensions();
    float GetColorIntensity();
    float GetColorCurveScale();
    UCurveLinearColor* GetColorCurve();
    FVector GetBuoyancyGravity();
}; // Size: 0x2c0
#pragma pack(pop)
