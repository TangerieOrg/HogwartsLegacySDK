#pragma once
#include <cstdint>
#include "EEasingFunction.hpp"
#include "ETransformProperty.hpp"
#include "FLinearColor.hpp"
#include "FVector2D.hpp"
#include "UObject.hpp"
class UCurveFloat;
#pragma pack(push, 1)
class UTween : public UObject {
public:
    UCurveFloat* EasingCurve; // 0x28
    char pad_30[0x28];
    static UTween* StaticClass();
    UTween* TweenVector2DPropertyToEnd(UObject* ObjectIn, FName PropertyNameIn, FVector2D EndIn, float Duration, EEasingFunction EasingFunctionIn);
    UTween* TweenVector2DPropertyFromStartToEnd(UObject* ObjectIn, FName PropertyNameIn, FVector2D StartIn, FVector2D EndIn, float Duration, EEasingFunction EasingFunctionIn);
    UTween* TweenTransformPropertyToEnd(UObject* ObjectIn, ETransformProperty TransformProperty, FVector2D EndIn, float Duration, EEasingFunction EasingFunctionIn);
    UTween* TweenTransformPropertyFromStartToEnd(UObject* ObjectIn, ETransformProperty TransformProperty, FVector2D StartIn, FVector2D EndIn, float Duration, EEasingFunction EasingFunctionIn);
    UTween* TweenIntPropertyToEnd(UObject* ObjectIn, FName ProertyNameIn, int32_t EndIn, float Duration, EEasingFunction EasingFunctionIn);
    UTween* TweenIntPropertyFromStartToEnd(UObject* ObjectIn, FName ProertyNameIn, int32_t StartIn, int32_t EndIn, float Duration, EEasingFunction EasingFunctionIn);
    UTween* TweenFloatPropertyToEnd(UObject* ObjectIn, FName ProertyNameIn, float EndIn, float Duration, EEasingFunction EasingFunctionIn);
    UTween* TweenFloatPropertyFromStartToEnd(UObject* ObjectIn, FName ProertyNameIn, float StartIn, float EndIn, float Duration, EEasingFunction EasingFunctionIn);
    UTween* TweenColorPropertyToEnd(UObject* ObjectIn, FName PropertyNameIn, FLinearColor EndIn, float Duration, EEasingFunction EasingFunctionIn);
    UTween* TweenColorPropertyFromStartToEnd(UObject* ObjectIn, FName PropertyNameIn, FLinearColor StartIn, FLinearColor EndIn, float Duration, EEasingFunction EasingFunctionIn);
    UTween* Play();
    bool IsPlaying();
    static UTween* ConstructTween();
}; // Size: 0x58
#pragma pack(pop)
