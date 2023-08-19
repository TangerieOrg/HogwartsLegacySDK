#include "UBlueprintAsyncActionBase.hpp"
#include "UCurtainSubsystem.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "URaiseCurtainAction.hpp"
URaiseCurtainAction* URaiseCurtainAction::StaticClass() {
    static auto res = find_uobject("Class /Script/UtilitiesRuntime.RaiseCurtainAction");
    return (URaiseCurtainAction*)res;
}
URaiseCurtainAction* URaiseCurtainAction::RaiseCurtain(UObject* WhosAsking) {
    static auto func = (UFunction*)(find_uobject("Function /Script/UtilitiesRuntime.RaiseCurtainAction.RaiseCurtain"));
    struct Params_RaiseCurtain {
        UObject* WhosAsking; // 0x0
        URaiseCurtainAction* ReturnValue; // 0x8
    }; // Size: 0x10
    Params_RaiseCurtain params{};
    params.WhosAsking = (UObject*)WhosAsking;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (URaiseCurtainAction*)params.ReturnValue;
}
void URaiseCurtainAction::OnCurtainRaised() {
    static auto func = (UFunction*)(find_uobject("Function /Script/UtilitiesRuntime.RaiseCurtainAction.OnCurtainRaised"));
    struct Params_OnCurtainRaised {
    }; // Size: 0x0
    Params_OnCurtainRaised params{};
    ProcessEvent(func, &params);
}
