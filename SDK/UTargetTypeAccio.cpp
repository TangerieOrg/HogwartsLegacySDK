#include "AActor.hpp"
#include "ETargetID\Type.hpp"
#include "UFunction.hpp"
#include "UTargetTracker.hpp"
#include "UTargetTypeAccio.hpp"
#include "UTargetTypeActor.hpp"
#include "UTargetTypeBase.hpp"
UTargetTypeAccio* UTargetTypeAccio::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.TargetTypeAccio");
    return (UTargetTypeAccio*)res;
}
UTargetTypeBase* UTargetTypeAccio::AddTarget_Accio(UTargetTracker* TargetTracker, AActor* InTargetActor, ETargetID::Type InTargetID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TargetTypeAccio.AddTarget_Accio"));
    struct Params_AddTarget_Accio {
        UTargetTracker* TargetTracker; // 0x0
        AActor* InTargetActor; // 0x8
        ETargetID::Type InTargetID; // 0x10
        char pad_11[0x7];
        UTargetTypeBase* ReturnValue; // 0x18
    }; // Size: 0x20
    Params_AddTarget_Accio params{};
    params.TargetTracker = (UTargetTracker*)TargetTracker;
    params.InTargetActor = (AActor*)InTargetActor;
    params.InTargetID = (ETargetID::Type)InTargetID;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UTargetTypeBase*)params.ReturnValue;
}
