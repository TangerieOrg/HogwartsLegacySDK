#include "ETargetType\Type.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "UTargetTypeBase.hpp"
void UTargetTypeBase::SetExpirationTime(float InExpirationTime) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.TargetTypeBase.SetExpirationTime"));
    struct Params_SetExpirationTime {
        float InExpirationTime; // 0x0
    }; // Size: 0x4
    Params_SetExpirationTime params{};
    params.InExpirationTime = (float)InExpirationTime;
    ProcessEvent(func, &params);
}
UTargetTypeBase* UTargetTypeBase::StaticClass() {
    static auto res = find_uobject("Class /Script/Ambulatory.TargetTypeBase");
    return (UTargetTypeBase*)res;
}
float UTargetTypeBase::GetComputedPriority() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.TargetTypeBase.GetComputedPriority"));
    struct Params_GetComputedPriority {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetComputedPriority params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
void UTargetTypeBase::SetComputedPriority(float InPriority) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.TargetTypeBase.SetComputedPriority"));
    struct Params_SetComputedPriority {
        float InPriority; // 0x0
    }; // Size: 0x4
    Params_SetComputedPriority params{};
    params.InPriority = (float)InPriority;
    ProcessEvent(func, &params);
}
ETargetType::Type UTargetTypeBase::GetTargetType() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.TargetTypeBase.GetTargetType"));
    struct Params_GetTargetType {
        ETargetType::Type ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetTargetType params{};
    ProcessEvent(func, &params);
    return (ETargetType::Type)params.ReturnValue;
}
float UTargetTypeBase::GetExpirationTime() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Ambulatory.TargetTypeBase.GetExpirationTime"));
    struct Params_GetExpirationTime {
        float ReturnValue; // 0x0
    }; // Size: 0x4
    Params_GetExpirationTime params{};
    ProcessEvent(func, &params);
    return (float)params.ReturnValue;
}
