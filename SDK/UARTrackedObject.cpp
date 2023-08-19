#include "UARCandidateObject.hpp"
#include "UARTrackedGeometry.hpp"
#include "UARTrackedObject.hpp"
#include "UFunction.hpp"
UARCandidateObject* UARTrackedObject::GetDetectedObject() {
    static auto func = (UFunction*)(find_uobject("Function /Script/AugmentedReality.ARTrackedObject.GetDetectedObject"));
    struct Params_GetDetectedObject {
        UARCandidateObject* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetDetectedObject params{};
    ProcessEvent(func, &params);
    return (UARCandidateObject*)params.ReturnValue;
}
UARTrackedObject* UARTrackedObject::StaticClass() {
    static auto res = find_uobject("Class /Script/AugmentedReality.ARTrackedObject");
    return (UARTrackedObject*)res;
}
