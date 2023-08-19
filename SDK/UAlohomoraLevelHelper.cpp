#include "EAlohomoraLevel.hpp"
#include "UAlohomoraLevelHelper.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
void UAlohomoraLevelHelper::SwitchAlohomoraLevel(EAlohomoraLevel& AlohomoraLevel) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AlohomoraLevelHelper.SwitchAlohomoraLevel"));
    struct Params_SwitchAlohomoraLevel {
        EAlohomoraLevel AlohomoraLevel; // 0x0
    }; // Size: 0x1
    Params_SwitchAlohomoraLevel params{};
    params.AlohomoraLevel = (EAlohomoraLevel)AlohomoraLevel;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    AlohomoraLevel = params.AlohomoraLevel;
}
UAlohomoraLevelHelper* UAlohomoraLevelHelper::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AlohomoraLevelHelper");
    return (UAlohomoraLevelHelper*)res;
}
void UAlohomoraLevelHelper::SetAlohomoraLevel(EAlohomoraLevel AlohomoraLevel) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AlohomoraLevelHelper.SetAlohomoraLevel"));
    struct Params_SetAlohomoraLevel {
        EAlohomoraLevel AlohomoraLevel; // 0x0
    }; // Size: 0x1
    Params_SetAlohomoraLevel params{};
    params.AlohomoraLevel = (EAlohomoraLevel)AlohomoraLevel;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
}
bool UAlohomoraLevelHelper::IsAlohomoraLevel(EAlohomoraLevel AlohomoraLevel) {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AlohomoraLevelHelper.IsAlohomoraLevel"));
    struct Params_IsAlohomoraLevel {
        EAlohomoraLevel AlohomoraLevel; // 0x0
        bool ReturnValue; // 0x1
    }; // Size: 0x2
    Params_IsAlohomoraLevel params{};
    params.AlohomoraLevel = (EAlohomoraLevel)AlohomoraLevel;
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
EAlohomoraLevel UAlohomoraLevelHelper::GetAlohomoraLevel() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AlohomoraLevelHelper.GetAlohomoraLevel"));
    struct Params_GetAlohomoraLevel {
        EAlohomoraLevel ReturnValue; // 0x0
    }; // Size: 0x1
    Params_GetAlohomoraLevel params{};
    ((UClass*)StaticClass())->ClassDefaultObject->ProcessEvent(func, &params);
    return (EAlohomoraLevel)params.ReturnValue;
}
