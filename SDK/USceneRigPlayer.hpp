#pragma once
#include <cstdint>
#include "UTimeRigPlayer.hpp"
class USceneActionState_PlayFMV;
class USceneActionState_PlayBinkMedia;
class UUserWidget;
struct FTransform;
class UObject;
#pragma pack(push, 1)
class USceneRigPlayer : public UTimeRigPlayer {
public:
    char pad_288[0x38];
    USceneActionState_PlayFMV* OverridingFMV; // 0x2c0
    USceneActionState_PlayBinkMedia* OverridingBinkMedia; // 0x2c8
    UUserWidget* SkipWidget; // 0x2d0
    char pad_2d8[0x8];
    static USceneRigPlayer* StaticClass();
    bool UpdateTransformParameter(FString ParameterName, FTransform& InValue);
    bool UpdateStringParameter(FString ParameterName, FString InValue);
    bool UpdateObjectParameter(FString ParameterName, UObject* Object);
    bool UpdateIntParameter(FString ParameterName, int32_t InValue);
    bool UpdateFloatParameter(FString ParameterName, float InValue);
    bool UpdateBoolParameter(FString ParameterName, bool InValue);
    void ShowSkipUI(bool bShow);
    void ApplyParameterUpdatesImmediately();
}; // Size: 0x2e0
#pragma pack(pop)
