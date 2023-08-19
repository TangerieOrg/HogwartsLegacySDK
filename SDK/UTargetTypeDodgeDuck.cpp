#include "ETargetID\Type.hpp"
#include "FVector.hpp"
#include "UFunction.hpp"
#include "UTargetTracker.hpp"
#include "UTargetTypeActor.hpp"
#include "UTargetTypeBase.hpp"
#include "UTargetTypeDodgeDuck.hpp"
UTargetTypeDodgeDuck* UTargetTypeDodgeDuck::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.TargetTypeDodgeDuck");
    return (UTargetTypeDodgeDuck*)res;
}
UTargetTypeBase* UTargetTypeDodgeDuck::AddTarget_DodgeDuck(UTargetTracker* TargetTracker, ETargetID::Type InTargetID, bool bUseCameraDirectionAlways) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TargetTypeDodgeDuck.AddTarget_DodgeDuck"));
    struct Params_AddTarget_DodgeDuck {
        UTargetTracker* TargetTracker; // 0x0
        ETargetID::Type InTargetID; // 0x8
        bool bUseCameraDirectionAlways; // 0x9
        char pad_a[0x6];
        UTargetTypeBase* ReturnValue; // 0x10
    }; // Size: 0x18
    Params_AddTarget_DodgeDuck params{};
    params.TargetTracker = (UTargetTracker*)TargetTracker;
    params.InTargetID = (ETargetID::Type)InTargetID;
    params.bUseCameraDirectionAlways = (bool)bUseCameraDirectionAlways;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UTargetTypeBase*)params.ReturnValue;
}
