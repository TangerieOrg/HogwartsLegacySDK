#include "AActor.hpp"
#include "ETargetID\Type.hpp"
#include "UFunction.hpp"
#include "UTargetTracker.hpp"
#include "UTargetTypeBase.hpp"
#include "UTargetTypeClosestPointOnCollision.hpp"
#include "UTargetTypeLocation.hpp"
UTargetTypeClosestPointOnCollision* UTargetTypeClosestPointOnCollision::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.TargetTypeClosestPointOnCollision");
    return (UTargetTypeClosestPointOnCollision*)res;
}
UTargetTypeBase* UTargetTypeClosestPointOnCollision::AddTarget_ClosestPointOnCollision(UTargetTracker* TargetTracker, ETargetID::Type InTargetID, AActor* InTargetActor) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TargetTypeClosestPointOnCollision.AddTarget_ClosestPointOnCollision"));
    struct Params_AddTarget_ClosestPointOnCollision {
        UTargetTracker* TargetTracker; // 0x0
        ETargetID::Type InTargetID; // 0x8
        char pad_9[0x7];
        AActor* InTargetActor; // 0x10
        UTargetTypeBase* ReturnValue; // 0x18
    }; // Size: 0x20
    Params_AddTarget_ClosestPointOnCollision params{};
    params.TargetTracker = (UTargetTracker*)TargetTracker;
    params.InTargetID = (ETargetID::Type)InTargetID;
    params.InTargetActor = (AActor*)InTargetActor;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UTargetTypeBase*)params.ReturnValue;
}
