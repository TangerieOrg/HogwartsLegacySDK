#include "FBipedStateData.hpp"
#include "FDbSingleColumnInfo.hpp"
#include "UBaseStateComponent.hpp"
#include "UBipedStateComponent.hpp"
#include "UFunction.hpp"
UBipedStateComponent* UBipedStateComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.BipedStateComponent");
    return (UBipedStateComponent*)res;
}
void UBipedStateComponent::SetTeamName(FName InTeamName) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.BipedStateComponent.SetTeamName"));
    struct Params_SetTeamName {
        FName InTeamName; // 0x0
    }; // Size: 0x8
    Params_SetTeamName params{};
    params.InTeamName = (FName)InTeamName;
    ProcessEvent(func, &params);
}
FName UBipedStateComponent::GetTeamName() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.BipedStateComponent.GetTeamName"));
    struct Params_GetTeamName {
        FName ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetTeamName params{};
    ProcessEvent(func, &params);
    return (FName)params.ReturnValue;
}
