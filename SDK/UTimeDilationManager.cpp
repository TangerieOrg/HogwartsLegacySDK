#include "AActor.hpp"
#include "UCurveFloat.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "UTimeDilationManager.hpp"
UTimeDilationManager* UTimeDilationManager::StaticClass() {
    static auto res = find_uobject("Class /Script/FXUtil.TimeDilationManager");
    return (UTimeDilationManager*)res;
}
void UTimeDilationManager::StartActorCounterDilation(AActor* Actor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/FXUtil.TimeDilationManager.StartActorCounterDilation"));
    struct Params_StartActorCounterDilation {
        AActor* Actor; // 0x0
    }; // Size: 0x8
    Params_StartActorCounterDilation params{};
    params.Actor = (AActor*)Actor;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UTimeDilationManager::StartWorldTimeDilation(UObject* WorldContextObject, float Dilation, UObject* Provider, float EaseInDuration) {
    static auto func = (UFunction*)(find_uobject("Function /Script/FXUtil.TimeDilationManager.StartWorldTimeDilation"));
    struct Params_StartWorldTimeDilation {
        UObject* WorldContextObject; // 0x0
        float Dilation; // 0x8
        char pad_c[0x4];
        UObject* Provider; // 0x10
        float EaseInDuration; // 0x18
    }; // Size: 0x1c
    Params_StartWorldTimeDilation params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Dilation = (float)Dilation;
    params.Provider = (UObject*)Provider;
    params.EaseInDuration = (float)EaseInDuration;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UTimeDilationManager::StartActorTimeDilation(AActor* Actor, float Dilation, UObject* Provider, float EaseInDuration) {
    static auto func = (UFunction*)(find_uobject("Function /Script/FXUtil.TimeDilationManager.StartActorTimeDilation"));
    struct Params_StartActorTimeDilation {
        AActor* Actor; // 0x0
        float Dilation; // 0x8
        char pad_c[0x4];
        UObject* Provider; // 0x10
        float EaseInDuration; // 0x18
    }; // Size: 0x1c
    Params_StartActorTimeDilation params{};
    params.Actor = (AActor*)Actor;
    params.Dilation = (float)Dilation;
    params.Provider = (UObject*)Provider;
    params.EaseInDuration = (float)EaseInDuration;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UTimeDilationManager::PlayWorldTimeDilationEffect(UObject* WorldContextObject, UCurveFloat* TimeDilationCurve) {
    static auto func = (UFunction*)(find_uobject("Function /Script/FXUtil.TimeDilationManager.PlayWorldTimeDilationEffect"));
    struct Params_PlayWorldTimeDilationEffect {
        UObject* WorldContextObject; // 0x0
        UCurveFloat* TimeDilationCurve; // 0x8
    }; // Size: 0x10
    Params_PlayWorldTimeDilationEffect params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.TimeDilationCurve = (UCurveFloat*)TimeDilationCurve;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UTimeDilationManager::StartActorTimeAcceleration(AActor* Actor, float AccelerationDilation, float AcceleratedDuration, UObject* Provider) {
    static auto func = (UFunction*)(find_uobject("Function /Script/FXUtil.TimeDilationManager.StartActorTimeAcceleration"));
    struct Params_StartActorTimeAcceleration {
        AActor* Actor; // 0x0
        float AccelerationDilation; // 0x8
        float AcceleratedDuration; // 0xc
        UObject* Provider; // 0x10
    }; // Size: 0x18
    Params_StartActorTimeAcceleration params{};
    params.Actor = (AActor*)Actor;
    params.AccelerationDilation = (float)AccelerationDilation;
    params.AcceleratedDuration = (float)AcceleratedDuration;
    params.Provider = (UObject*)Provider;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UTimeDilationManager::PlayActorTimeDilationEffect(AActor* Actor, UCurveFloat* TimeDilationCurve) {
    static auto func = (UFunction*)(find_uobject("Function /Script/FXUtil.TimeDilationManager.PlayActorTimeDilationEffect"));
    struct Params_PlayActorTimeDilationEffect {
        AActor* Actor; // 0x0
        UCurveFloat* TimeDilationCurve; // 0x8
    }; // Size: 0x10
    Params_PlayActorTimeDilationEffect params{};
    params.Actor = (AActor*)Actor;
    params.TimeDilationCurve = (UCurveFloat*)TimeDilationCurve;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UTimeDilationManager::FinishWorldTimeDilation(UObject* Provider, float EaseOutDuration) {
    static auto func = (UFunction*)(find_uobject("Function /Script/FXUtil.TimeDilationManager.FinishWorldTimeDilation"));
    struct Params_FinishWorldTimeDilation {
        UObject* Provider; // 0x0
        float EaseOutDuration; // 0x8
    }; // Size: 0xc
    Params_FinishWorldTimeDilation params{};
    params.Provider = (UObject*)Provider;
    params.EaseOutDuration = (float)EaseOutDuration;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UTimeDilationManager::FinishActorTimeDilation(UObject* Provider, float EaseOutDuration) {
    static auto func = (UFunction*)(find_uobject("Function /Script/FXUtil.TimeDilationManager.FinishActorTimeDilation"));
    struct Params_FinishActorTimeDilation {
        UObject* Provider; // 0x0
        float EaseOutDuration; // 0x8
    }; // Size: 0xc
    Params_FinishActorTimeDilation params{};
    params.Provider = (UObject*)Provider;
    params.EaseOutDuration = (float)EaseOutDuration;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
void UTimeDilationManager::FinishActorCounterDilation(AActor* Actor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/FXUtil.TimeDilationManager.FinishActorCounterDilation"));
    struct Params_FinishActorCounterDilation {
        AActor* Actor; // 0x0
    }; // Size: 0x8
    Params_FinishActorCounterDilation params{};
    params.Actor = (AActor*)Actor;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
