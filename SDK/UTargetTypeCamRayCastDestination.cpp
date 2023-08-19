#include "ETargetID\Type.hpp"
#include "UFunction.hpp"
#include "UTargetTracker.hpp"
#include "UTargetTypeBase.hpp"
#include "UTargetTypeCamRayCastDestination.hpp"
UTargetTypeCamRayCastDestination* UTargetTypeCamRayCastDestination::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.TargetTypeCamRayCastDestination");
    return (UTargetTypeCamRayCastDestination*)res;
}
UTargetTypeBase* UTargetTypeCamRayCastDestination::AddTarget_CamRayCastDestination(UTargetTracker* TargetTracker, ETargetID::Type InTargetID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TargetTypeCamRayCastDestination.AddTarget_CamRayCastDestination"));
    struct Params_AddTarget_CamRayCastDestination {
        UTargetTracker* TargetTracker; // 0x0
        ETargetID::Type InTargetID; // 0x8
        char pad_9[0x7];
        UTargetTypeBase* ReturnValue; // 0x10
    }; // Size: 0x18
    Params_AddTarget_CamRayCastDestination params{};
    params.TargetTracker = (UTargetTracker*)TargetTracker;
    params.InTargetID = (ETargetID::Type)InTargetID;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UTargetTypeBase*)params.ReturnValue;
}
