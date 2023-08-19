#include "EEasingFunction.hpp"
#include "ETransformProperty.hpp"
#include "FLinearColor.hpp"
#include "FVector2D.hpp"
#include "UCurveFloat.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "UTween.hpp"
UTween* UTween::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Tween");
    return (UTween*)res;
}
UTween* UTween::TweenVector2DPropertyFromStartToEnd(UObject* ObjectIn, FName PropertyNameIn, FVector2D StartIn, FVector2D EndIn, float Duration, EEasingFunction EasingFunctionIn) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Tween.TweenVector2DPropertyFromStartToEnd"));
    struct Params_TweenVector2DPropertyFromStartToEnd {
        UObject* ObjectIn; // 0x0
        FName PropertyNameIn; // 0x8
        FVector2D StartIn; // 0x10
        FVector2D EndIn; // 0x18
        float Duration; // 0x20
        EEasingFunction EasingFunctionIn; // 0x24
        char pad_25[0x3];
        UTween* ReturnValue; // 0x28
    }; // Size: 0x30
    Params_TweenVector2DPropertyFromStartToEnd params{};
    params.ObjectIn = (UObject*)ObjectIn;
    params.PropertyNameIn = (FName)PropertyNameIn;
    params.StartIn = (FVector2D)StartIn;
    params.EndIn = (FVector2D)EndIn;
    params.Duration = (float)Duration;
    params.EasingFunctionIn = (EEasingFunction)EasingFunctionIn;
    ProcessEvent(func, &params);
    return (UTween*)params.ReturnValue;
}
UTween* UTween::TweenVector2DPropertyToEnd(UObject* ObjectIn, FName PropertyNameIn, FVector2D EndIn, float Duration, EEasingFunction EasingFunctionIn) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Tween.TweenVector2DPropertyToEnd"));
    struct Params_TweenVector2DPropertyToEnd {
        UObject* ObjectIn; // 0x0
        FName PropertyNameIn; // 0x8
        FVector2D EndIn; // 0x10
        float Duration; // 0x18
        EEasingFunction EasingFunctionIn; // 0x1c
        char pad_1d[0x3];
        UTween* ReturnValue; // 0x20
    }; // Size: 0x28
    Params_TweenVector2DPropertyToEnd params{};
    params.ObjectIn = (UObject*)ObjectIn;
    params.PropertyNameIn = (FName)PropertyNameIn;
    params.EndIn = (FVector2D)EndIn;
    params.Duration = (float)Duration;
    params.EasingFunctionIn = (EEasingFunction)EasingFunctionIn;
    ProcessEvent(func, &params);
    return (UTween*)params.ReturnValue;
}
UTween* UTween::TweenTransformPropertyFromStartToEnd(UObject* ObjectIn, ETransformProperty TransformProperty, FVector2D StartIn, FVector2D EndIn, float Duration, EEasingFunction EasingFunctionIn) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Tween.TweenTransformPropertyFromStartToEnd"));
    struct Params_TweenTransformPropertyFromStartToEnd {
        UObject* ObjectIn; // 0x0
        ETransformProperty TransformProperty; // 0x8
        char pad_9[0x3];
        FVector2D StartIn; // 0xc
        FVector2D EndIn; // 0x14
        float Duration; // 0x1c
        EEasingFunction EasingFunctionIn; // 0x20
        char pad_21[0x7];
        UTween* ReturnValue; // 0x28
    }; // Size: 0x30
    Params_TweenTransformPropertyFromStartToEnd params{};
    params.ObjectIn = (UObject*)ObjectIn;
    params.TransformProperty = (ETransformProperty)TransformProperty;
    params.StartIn = (FVector2D)StartIn;
    params.EndIn = (FVector2D)EndIn;
    params.Duration = (float)Duration;
    params.EasingFunctionIn = (EEasingFunction)EasingFunctionIn;
    ProcessEvent(func, &params);
    return (UTween*)params.ReturnValue;
}
UTween* UTween::TweenTransformPropertyToEnd(UObject* ObjectIn, ETransformProperty TransformProperty, FVector2D EndIn, float Duration, EEasingFunction EasingFunctionIn) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Tween.TweenTransformPropertyToEnd"));
    struct Params_TweenTransformPropertyToEnd {
        UObject* ObjectIn; // 0x0
        ETransformProperty TransformProperty; // 0x8
        char pad_9[0x3];
        FVector2D EndIn; // 0xc
        float Duration; // 0x14
        EEasingFunction EasingFunctionIn; // 0x18
        char pad_19[0x7];
        UTween* ReturnValue; // 0x20
    }; // Size: 0x28
    Params_TweenTransformPropertyToEnd params{};
    params.ObjectIn = (UObject*)ObjectIn;
    params.TransformProperty = (ETransformProperty)TransformProperty;
    params.EndIn = (FVector2D)EndIn;
    params.Duration = (float)Duration;
    params.EasingFunctionIn = (EEasingFunction)EasingFunctionIn;
    ProcessEvent(func, &params);
    return (UTween*)params.ReturnValue;
}
UTween* UTween::TweenIntPropertyToEnd(UObject* ObjectIn, FName ProertyNameIn, int32_t EndIn, float Duration, EEasingFunction EasingFunctionIn) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Tween.TweenIntPropertyToEnd"));
    struct Params_TweenIntPropertyToEnd {
        UObject* ObjectIn; // 0x0
        FName ProertyNameIn; // 0x8
        int32_t EndIn; // 0x10
        float Duration; // 0x14
        EEasingFunction EasingFunctionIn; // 0x18
        char pad_19[0x7];
        UTween* ReturnValue; // 0x20
    }; // Size: 0x28
    Params_TweenIntPropertyToEnd params{};
    params.ObjectIn = (UObject*)ObjectIn;
    params.ProertyNameIn = (FName)ProertyNameIn;
    params.EndIn = (int32_t)EndIn;
    params.Duration = (float)Duration;
    params.EasingFunctionIn = (EEasingFunction)EasingFunctionIn;
    ProcessEvent(func, &params);
    return (UTween*)params.ReturnValue;
}
UTween* UTween::Play() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Tween.Play"));
    struct Params_Play {
        UTween* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_Play params{};
    ProcessEvent(func, &params);
    return (UTween*)params.ReturnValue;
}
UTween* UTween::TweenIntPropertyFromStartToEnd(UObject* ObjectIn, FName ProertyNameIn, int32_t StartIn, int32_t EndIn, float Duration, EEasingFunction EasingFunctionIn) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Tween.TweenIntPropertyFromStartToEnd"));
    struct Params_TweenIntPropertyFromStartToEnd {
        UObject* ObjectIn; // 0x0
        FName ProertyNameIn; // 0x8
        int32_t StartIn; // 0x10
        int32_t EndIn; // 0x14
        float Duration; // 0x18
        EEasingFunction EasingFunctionIn; // 0x1c
        char pad_1d[0x3];
        UTween* ReturnValue; // 0x20
    }; // Size: 0x28
    Params_TweenIntPropertyFromStartToEnd params{};
    params.ObjectIn = (UObject*)ObjectIn;
    params.ProertyNameIn = (FName)ProertyNameIn;
    params.StartIn = (int32_t)StartIn;
    params.EndIn = (int32_t)EndIn;
    params.Duration = (float)Duration;
    params.EasingFunctionIn = (EEasingFunction)EasingFunctionIn;
    ProcessEvent(func, &params);
    return (UTween*)params.ReturnValue;
}
UTween* UTween::TweenFloatPropertyToEnd(UObject* ObjectIn, FName ProertyNameIn, float EndIn, float Duration, EEasingFunction EasingFunctionIn) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Tween.TweenFloatPropertyToEnd"));
    struct Params_TweenFloatPropertyToEnd {
        UObject* ObjectIn; // 0x0
        FName ProertyNameIn; // 0x8
        float EndIn; // 0x10
        float Duration; // 0x14
        EEasingFunction EasingFunctionIn; // 0x18
        char pad_19[0x7];
        UTween* ReturnValue; // 0x20
    }; // Size: 0x28
    Params_TweenFloatPropertyToEnd params{};
    params.ObjectIn = (UObject*)ObjectIn;
    params.ProertyNameIn = (FName)ProertyNameIn;
    params.EndIn = (float)EndIn;
    params.Duration = (float)Duration;
    params.EasingFunctionIn = (EEasingFunction)EasingFunctionIn;
    ProcessEvent(func, &params);
    return (UTween*)params.ReturnValue;
}
UTween* UTween::TweenFloatPropertyFromStartToEnd(UObject* ObjectIn, FName ProertyNameIn, float StartIn, float EndIn, float Duration, EEasingFunction EasingFunctionIn) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Tween.TweenFloatPropertyFromStartToEnd"));
    struct Params_TweenFloatPropertyFromStartToEnd {
        UObject* ObjectIn; // 0x0
        FName ProertyNameIn; // 0x8
        float StartIn; // 0x10
        float EndIn; // 0x14
        float Duration; // 0x18
        EEasingFunction EasingFunctionIn; // 0x1c
        char pad_1d[0x3];
        UTween* ReturnValue; // 0x20
    }; // Size: 0x28
    Params_TweenFloatPropertyFromStartToEnd params{};
    params.ObjectIn = (UObject*)ObjectIn;
    params.ProertyNameIn = (FName)ProertyNameIn;
    params.StartIn = (float)StartIn;
    params.EndIn = (float)EndIn;
    params.Duration = (float)Duration;
    params.EasingFunctionIn = (EEasingFunction)EasingFunctionIn;
    ProcessEvent(func, &params);
    return (UTween*)params.ReturnValue;
}
UTween* UTween::TweenColorPropertyToEnd(UObject* ObjectIn, FName PropertyNameIn, FLinearColor EndIn, float Duration, EEasingFunction EasingFunctionIn) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Tween.TweenColorPropertyToEnd"));
    struct Params_TweenColorPropertyToEnd {
        UObject* ObjectIn; // 0x0
        FName PropertyNameIn; // 0x8
        FLinearColor EndIn; // 0x10
        float Duration; // 0x20
        EEasingFunction EasingFunctionIn; // 0x24
        char pad_25[0x3];
        UTween* ReturnValue; // 0x28
    }; // Size: 0x30
    Params_TweenColorPropertyToEnd params{};
    params.ObjectIn = (UObject*)ObjectIn;
    params.PropertyNameIn = (FName)PropertyNameIn;
    params.EndIn = (FLinearColor)EndIn;
    params.Duration = (float)Duration;
    params.EasingFunctionIn = (EEasingFunction)EasingFunctionIn;
    ProcessEvent(func, &params);
    return (UTween*)params.ReturnValue;
}
UTween* UTween::TweenColorPropertyFromStartToEnd(UObject* ObjectIn, FName PropertyNameIn, FLinearColor StartIn, FLinearColor EndIn, float Duration, EEasingFunction EasingFunctionIn) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Tween.TweenColorPropertyFromStartToEnd"));
    struct Params_TweenColorPropertyFromStartToEnd {
        UObject* ObjectIn; // 0x0
        FName PropertyNameIn; // 0x8
        FLinearColor StartIn; // 0x10
        FLinearColor EndIn; // 0x20
        float Duration; // 0x30
        EEasingFunction EasingFunctionIn; // 0x34
        char pad_35[0x3];
        UTween* ReturnValue; // 0x38
    }; // Size: 0x40
    Params_TweenColorPropertyFromStartToEnd params{};
    params.ObjectIn = (UObject*)ObjectIn;
    params.PropertyNameIn = (FName)PropertyNameIn;
    params.StartIn = (FLinearColor)StartIn;
    params.EndIn = (FLinearColor)EndIn;
    params.Duration = (float)Duration;
    params.EasingFunctionIn = (EEasingFunction)EasingFunctionIn;
    ProcessEvent(func, &params);
    return (UTween*)params.ReturnValue;
}
bool UTween::IsPlaying() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Tween.IsPlaying"));
    struct Params_IsPlaying {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsPlaying params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
UTween* UTween::ConstructTween() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Tween.ConstructTween"));
    struct Params_ConstructTween {
        UTween* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_ConstructTween params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UTween*)params.ReturnValue;
}
