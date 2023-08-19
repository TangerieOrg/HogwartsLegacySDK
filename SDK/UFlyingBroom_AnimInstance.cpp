#include "UAnimInstance.hpp"
#include "UFlyingBroom_AnimInstance.hpp"
#include "UFunction.hpp"
UFlyingBroom_AnimInstance* UFlyingBroom_AnimInstance::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FlyingBroom_AnimInstance");
    return (UFlyingBroom_AnimInstance*)res;
}
void UFlyingBroom_AnimInstance::AnimNotify_ThrowQuaffleFinished() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FlyingBroom_AnimInstance.AnimNotify_ThrowQuaffleFinished"));
    struct Params_AnimNotify_ThrowQuaffleFinished {
    }; // Size: 0x0
    Params_AnimNotify_ThrowQuaffleFinished params{};
    ProcessEvent(func, &params);
}
void UFlyingBroom_AnimInstance::AnimNotify_CollisionResponseEnded() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FlyingBroom_AnimInstance.AnimNotify_CollisionResponseEnded"));
    struct Params_AnimNotify_CollisionResponseEnded {
    }; // Size: 0x0
    Params_AnimNotify_CollisionResponseEnded params{};
    ProcessEvent(func, &params);
}
void UFlyingBroom_AnimInstance::AnimNotify_BarrelRollExited() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.FlyingBroom_AnimInstance.AnimNotify_BarrelRollExited"));
    struct Params_AnimNotify_BarrelRollExited {
    }; // Size: 0x0
    Params_AnimNotify_BarrelRollExited params{};
    ProcessEvent(func, &params);
}
