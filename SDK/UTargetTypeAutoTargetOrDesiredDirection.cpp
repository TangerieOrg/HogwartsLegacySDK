#include "ETargetID\Type.hpp"
#include "UFunction.hpp"
#include "UTargetTracker.hpp"
#include "UTargetTypeActor.hpp"
#include "UTargetTypeAutoTargetOrDesiredDirection.hpp"
#include "UTargetTypeBase.hpp"
UTargetTypeAutoTargetOrDesiredDirection* UTargetTypeAutoTargetOrDesiredDirection::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.TargetTypeAutoTargetOrDesiredDirection");
    return (UTargetTypeAutoTargetOrDesiredDirection*)res;
}
UTargetTypeBase* UTargetTypeAutoTargetOrDesiredDirection::AddTarget_AutoTargetOrDesiredDirection(UTargetTracker* TargetTracker, ETargetID::Type InTargetID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TargetTypeAutoTargetOrDesiredDirection.AddTarget_AutoTargetOrDesiredDirection"));
    struct Params_AddTarget_AutoTargetOrDesiredDirection {
        UTargetTracker* TargetTracker; // 0x0
        ETargetID::Type InTargetID; // 0x8
        char pad_9[0x7];
        UTargetTypeBase* ReturnValue; // 0x10
    }; // Size: 0x18
    Params_AddTarget_AutoTargetOrDesiredDirection params{};
    params.TargetTracker = (UTargetTracker*)TargetTracker;
    params.InTargetID = (ETargetID::Type)InTargetID;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UTargetTypeBase*)params.ReturnValue;
}
