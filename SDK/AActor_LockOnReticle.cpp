#include "AActor.hpp"
#include "AActor_LockOnReticle.hpp"
#include "ABiped_PlayerController.hpp"
#include "ELockOnReticleType.hpp"
#include "UAkAudioEvent.hpp"
#include "UClass.hpp"
#include "UFunction.hpp"
void AActor_LockOnReticle::StickX(float AxisVal) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Actor_LockOnReticle.StickX"));
    struct Params_StickX {
        float AxisVal; // 0x0
    }; // Size: 0x4
    Params_StickX params{};
    params.AxisVal = (float)AxisVal;
    ProcessEvent(func, &params);
}
AActor_LockOnReticle* AActor_LockOnReticle::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Actor_LockOnReticle");
    return (AActor_LockOnReticle*)res;
}
void AActor_LockOnReticle::StickY(float AxisVal) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Actor_LockOnReticle.StickY"));
    struct Params_StickY {
        float AxisVal; // 0x0
    }; // Size: 0x4
    Params_StickY params{};
    params.AxisVal = (float)AxisVal;
    ProcessEvent(func, &params);
}
bool AActor_LockOnReticle::IsLockedOn() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Actor_LockOnReticle.IsLockedOn"));
    struct Params_IsLockedOn {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsLockedOn params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
ELockOnReticleType AActor_LockOnReticle::GetLockedOnType() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.Actor_LockOnReticle.GetLockedOnType"));
    struct Params_GetLockedOnType {
        ELockOnReticleType ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetLockedOnType params{};
    ProcessEvent(func, &params);
    return (ELockOnReticleType)params.ReturnValue;
}
