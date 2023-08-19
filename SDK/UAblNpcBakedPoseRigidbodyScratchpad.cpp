#include "UAblAbilityTaskScratchPad.hpp"
#include "UAblNpcBakedPoseRigidbodyScratchpad.hpp"
#include "UFunction.hpp"
UAblNpcBakedPoseRigidbodyScratchpad* UAblNpcBakedPoseRigidbodyScratchpad::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblNpcBakedPoseRigidbodyScratchpad");
    return (UAblNpcBakedPoseRigidbodyScratchpad*)res;
}
void UAblNpcBakedPoseRigidbodyScratchpad::OnBakedRigidBodyAttachedEvent() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AblNpcBakedPoseRigidbodyScratchpad.OnBakedRigidBodyAttachedEvent"));
    struct Params_OnBakedRigidBodyAttachedEvent {
    }; // Size: 0x0
    Params_OnBakedRigidBodyAttachedEvent params{};
    ProcessEvent(func, &params);
}
