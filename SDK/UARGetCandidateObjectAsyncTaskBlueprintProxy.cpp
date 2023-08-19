#include "FVector.hpp"
#include "UARBaseAsyncTaskBlueprintProxy.hpp"
#include "UARGetCandidateObjectAsyncTaskBlueprintProxy.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
UARGetCandidateObjectAsyncTaskBlueprintProxy* UARGetCandidateObjectAsyncTaskBlueprintProxy::StaticClass() {
    static auto res = find_uobject("Class /Script/AugmentedReality.ARGetCandidateObjectAsyncTaskBlueprintProxy");
    return (UARGetCandidateObjectAsyncTaskBlueprintProxy*)res;
}
UARGetCandidateObjectAsyncTaskBlueprintProxy* UARGetCandidateObjectAsyncTaskBlueprintProxy::ARGetCandidateObject(UObject* WorldContextObject, FVector Location, FVector Extent) {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARGetCandidateObjectAsyncTaskBlueprintProxy.ARGetCandidateObject"));
    struct Params_ARGetCandidateObject {
        UObject* WorldContextObject; // 0x0
        FVector Location; // 0x8
        FVector Extent; // 0x14
        UARGetCandidateObjectAsyncTaskBlueprintProxy* ReturnValue; // 0x20
    }; // Size: 0x28
    Params_ARGetCandidateObject params{};
    params.WorldContextObject = (UObject*)WorldContextObject;
    params.Location = (FVector)Location;
    params.Extent = (FVector)Extent;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UARGetCandidateObjectAsyncTaskBlueprintProxy*)params.ReturnValue;
}
