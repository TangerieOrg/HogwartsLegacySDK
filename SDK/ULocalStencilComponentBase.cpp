#include "AActor.hpp"
#include "ELocalStencilMaterialMode.hpp"
#include "FBox.hpp"
#include "FLocalStencilEffect.hpp"
#include "UActorComponent.hpp"
#include "UFunction.hpp"
#include "ULocalStencilComponentBase.hpp"
#include "UStaticMesh.hpp"
ULocalStencilComponentBase* ULocalStencilComponentBase::StaticClass() {
    static auto res = find_uobject("Class /Script/StencilManager.LocalStencilComponentBase");
    return (ULocalStencilComponentBase*)res;
}
void ULocalStencilComponentBase::ActorLocalStencilEffectIsRunning(AActor* Actor, bool& bIsRunning, FLocalStencilEffect& RunningEffect) {
    static auto func = (UFunction*)(find_uobject("Function /Script/StencilManager.LocalStencilComponentBase.ActorLocalStencilEffectIsRunning"));
    struct Params_ActorLocalStencilEffectIsRunning {
        AActor* Actor; // 0x0
        bool bIsRunning; // 0x8
        char pad_9[0x7];
        FLocalStencilEffect RunningEffect; // 0x10
    }; // Size: 0x1e0
    Params_ActorLocalStencilEffectIsRunning params{};
    params.Actor = (AActor*)Actor;
    params.bIsRunning = (bool)bIsRunning;
    params.RunningEffect = (FLocalStencilEffect)RunningEffect;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    bIsRunning = params.bIsRunning;
    RunningEffect = params.RunningEffect;
}
bool ULocalStencilComponentBase::StartLocalStencilEffect(FLocalStencilEffect Effect) {
    static auto func = (UFunction*)(find_uobject("Function /Script/StencilManager.LocalStencilComponentBase.StartLocalStencilEffect"));
    struct Params_StartLocalStencilEffect {
        FLocalStencilEffect Effect; // 0x0
        bool ReturnValue; // 0x1d0
    }; // Size: 0x1d1
    Params_StartLocalStencilEffect params{};
    params.Effect = (FLocalStencilEffect)Effect;
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void ULocalStencilComponentBase::LocalStencilEffectIsRunning(bool& bIsRunning, FLocalStencilEffect& RunningEffect) {
    static auto func = (UFunction*)(find_uobject("Function /Script/StencilManager.LocalStencilComponentBase.LocalStencilEffectIsRunning"));
    struct Params_LocalStencilEffectIsRunning {
        bool bIsRunning; // 0x0
        char pad_1[0x7];
        FLocalStencilEffect RunningEffect; // 0x8
    }; // Size: 0x1d8
    Params_LocalStencilEffectIsRunning params{};
    params.bIsRunning = (bool)bIsRunning;
    params.RunningEffect = (FLocalStencilEffect)RunningEffect;
    ProcessEvent(func, &params);
    bIsRunning = params.bIsRunning;
    RunningEffect = params.RunningEffect;
}
bool ULocalStencilComponentBase::EndLocalStencilEffect() {
    static auto func = (UFunction*)(find_uobject("Function /Script/StencilManager.LocalStencilComponentBase.EndLocalStencilEffect"));
    struct Params_EndLocalStencilEffect {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_EndLocalStencilEffect params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
void ULocalStencilComponentBase::ActorStartLocalStencilEffect(AActor* Actor, FLocalStencilEffect Effect, bool& Success) {
    static auto func = (UFunction*)(find_uobject("Function /Script/StencilManager.LocalStencilComponentBase.ActorStartLocalStencilEffect"));
    struct Params_ActorStartLocalStencilEffect {
        AActor* Actor; // 0x0
        FLocalStencilEffect Effect; // 0x8
        bool Success; // 0x1d8
    }; // Size: 0x1d9
    Params_ActorStartLocalStencilEffect params{};
    params.Actor = (AActor*)Actor;
    params.Effect = (FLocalStencilEffect)Effect;
    params.Success = (bool)Success;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Success = params.Success;
}
void ULocalStencilComponentBase::ActorEndLocalStencilEffect(AActor* Actor, bool& Success) {
    static auto func = (UFunction*)(find_uobject("Function /Script/StencilManager.LocalStencilComponentBase.ActorEndLocalStencilEffect"));
    struct Params_ActorEndLocalStencilEffect {
        AActor* Actor; // 0x0
        bool Success; // 0x8
    }; // Size: 0x9
    Params_ActorEndLocalStencilEffect params{};
    params.Actor = (AActor*)Actor;
    params.Success = (bool)Success;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    Success = params.Success;
}
