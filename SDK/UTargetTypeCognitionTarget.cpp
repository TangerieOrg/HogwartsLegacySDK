#include "AActor.hpp"
#include "ETargetID\Type.hpp"
#include "UClass.hpp"
#include "UFunction.hpp"
#include "UTargetTracker.hpp"
#include "UTargetTypeBase.hpp"
#include "UTargetTypeCognitionTarget.hpp"
#include "UTargetTypeLocation.hpp"
UTargetTypeCognitionTarget* UTargetTypeCognitionTarget::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.TargetTypeCognitionTarget");
    return (UTargetTypeCognitionTarget*)res;
}
UTargetTypeBase* UTargetTypeCognitionTarget::AddTarget_CognitionTarget(UTargetTracker* TargetTracker, ETargetID::Type InTargetID, AActor* InTargetActor, UClass* InSense, bool bLookAt) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.TargetTypeCognitionTarget.AddTarget_CognitionTarget"));
    struct Params_AddTarget_CognitionTarget {
        UTargetTracker* TargetTracker; // 0x0
        ETargetID::Type InTargetID; // 0x8
        char pad_9[0x7];
        AActor* InTargetActor; // 0x10
        UClass* InSense; // 0x18
        bool bLookAt; // 0x20
        char pad_21[0x7];
        UTargetTypeBase* ReturnValue; // 0x28
    }; // Size: 0x30
    Params_AddTarget_CognitionTarget params{};
    params.TargetTracker = (UTargetTracker*)TargetTracker;
    params.InTargetID = (ETargetID::Type)InTargetID;
    params.InTargetActor = (AActor*)InTargetActor;
    params.InSense = (UClass*)InSense;
    params.bLookAt = (bool)bLookAt;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UTargetTypeBase*)params.ReturnValue;
}
