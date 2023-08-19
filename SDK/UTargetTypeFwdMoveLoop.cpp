#include "ETargetID\Type.hpp"
#include "UFunction.hpp"
#include "UTargetTracker.hpp"
#include "UTargetTypeBase.hpp"
#include "UTargetTypeFwdMoveLoop.hpp"
UTargetTypeFwdMoveLoop* UTargetTypeFwdMoveLoop::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.TargetTypeFwdMoveLoop");
    return (UTargetTypeFwdMoveLoop*)res;
}
UTargetTypeBase* UTargetTypeFwdMoveLoop::AddTarget_FwdMoveLoop(UTargetTracker* TargetTracker, ETargetID::Type InTargetID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TargetTypeFwdMoveLoop.AddTarget_FwdMoveLoop"));
    struct Params_AddTarget_FwdMoveLoop {
        UTargetTracker* TargetTracker; // 0x0
        ETargetID::Type InTargetID; // 0x8
        char pad_9[0x7];
        UTargetTypeBase* ReturnValue; // 0x10
    }; // Size: 0x18
    Params_AddTarget_FwdMoveLoop params{};
    params.TargetTracker = (UTargetTracker*)TargetTracker;
    params.InTargetID = (ETargetID::Type)InTargetID;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UTargetTypeBase*)params.ReturnValue;
}
