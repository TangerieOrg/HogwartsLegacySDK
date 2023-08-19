#include "APlayerCameraManager.hpp"
#include "UCameraShakeBase.hpp"
#include "UCameraShakePattern.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
UCameraShakeBase* UCameraShakeBase::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.CameraShakeBase");
    return (UCameraShakeBase*)res;
}
void UCameraShakeBase::SetRootShakePattern(UCameraShakePattern* InPattern) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.CameraShakeBase.SetRootShakePattern"));
    struct Params_SetRootShakePattern {
        UCameraShakePattern* InPattern; // 0x0
    }; // Size: 0x8
    Params_SetRootShakePattern params{};
    params.InPattern = (UCameraShakePattern*)InPattern;
    ProcessEvent(func, &params);
}
UCameraShakePattern* UCameraShakeBase::GetRootShakePattern() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Engine.CameraShakeBase.GetRootShakePattern"));
    struct Params_GetRootShakePattern {
        UCameraShakePattern* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetRootShakePattern params{};
    ProcessEvent(func, &params);
    return (UCameraShakePattern*)params.ReturnValue;
}
