#include "AARActor.hpp"
#include "AActor.hpp"
#include "FGuid.hpp"
#include "UARComponent.hpp"
#include "UClass.hpp"
#include "UFunction.hpp"
UARComponent* AARActor::AddARComponent(UClass* InComponentClass, FGuid& NativeID) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARActor.AddARComponent"));
    struct Params_AddARComponent {
        UClass* InComponentClass; // 0x0
        FGuid NativeID; // 0x8
        UARComponent* ReturnValue; // 0x18
    }; // Size: 0x20
    Params_AddARComponent params{};
    params.InComponentClass = (UClass*)InComponentClass;
    params.NativeID = (FGuid)NativeID;
    ProcessEvent(func, &params);
    NativeID = params.NativeID;
    return (UARComponent*)params.ReturnValue;
}
AARActor* AARActor::StaticClass() {
    static auto res = find_uobject("Class /Script/AugmentedReality.ARActor");
    return (AARActor*)res;
}
