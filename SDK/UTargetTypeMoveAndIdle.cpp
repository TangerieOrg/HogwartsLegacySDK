#include "ETargetID\Type.hpp"
#include "UFunction.hpp"
#include "UTargetTracker.hpp"
#include "UTargetTypeBase.hpp"
#include "UTargetTypeMoveAndIdle.hpp"
UTargetTypeMoveAndIdle* UTargetTypeMoveAndIdle::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.TargetTypeMoveAndIdle");
    return (UTargetTypeMoveAndIdle*)res;
}
UTargetTypeBase* UTargetTypeMoveAndIdle::AddTarget_MoveAndIdle(UTargetTracker* TargetTracker, ETargetID::Type InTargetID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TargetTypeMoveAndIdle.AddTarget_MoveAndIdle"));
    struct Params_AddTarget_MoveAndIdle {
        UTargetTracker* TargetTracker; // 0x0
        ETargetID::Type InTargetID; // 0x8
        char pad_9[0x7];
        UTargetTypeBase* ReturnValue; // 0x10
    }; // Size: 0x18
    Params_AddTarget_MoveAndIdle params{};
    params.TargetTracker = (UTargetTracker*)TargetTracker;
    params.InTargetID = (ETargetID::Type)InTargetID;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UTargetTypeBase*)params.ReturnValue;
}
