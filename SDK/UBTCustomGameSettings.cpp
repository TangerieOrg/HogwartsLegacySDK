#include "UBTCustomGameSettings.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
UBTCustomGameSettings* UBTCustomGameSettings::StaticClass() {
    static auto res = find_uobject("Class /Script/BTCustomRuntime.BTCustomGameSettings");
    return (UBTCustomGameSettings*)res;
}
UBTCustomGameSettings* UBTCustomGameSettings::GetInputSettings() {
    static auto func = (UFunction*)(find_uobject("Function /Script/BTCustomRuntime.BTCustomGameSettings.GetInputSettings"));
    struct Params_GetInputSettings {
        UBTCustomGameSettings* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetInputSettings params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (UBTCustomGameSettings*)params.ReturnValue;
}
void UBTCustomGameSettings::GetActionNames(TArray<FName>& ActionNames) {
    static auto func = (UFunction*)(find_uobject("Function /Script/BTCustomRuntime.BTCustomGameSettings.GetActionNames"));
    struct Params_GetActionNames {
        TArray<FName> ActionNames; // 0x0
    }; // Size: 0x10
    Params_GetActionNames params{};
    params.ActionNames = (TArray<FName>)ActionNames;
    ProcessEvent(func, &params);
    ActionNames = params.ActionNames;
}
