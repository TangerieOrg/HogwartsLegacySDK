#include "FDataTableRowHandle.hpp"
#include "UFunction.hpp"
#include "UTimeSourceFromScenario.hpp"
#include "UTimeSourceLocal.hpp"
UTimeSourceFromScenario* UTimeSourceFromScenario::StaticClass() {
    static auto res = find_uobject("Class /Script/DayNight.TimeSourceFromScenario");
    return (UTimeSourceFromScenario*)res;
}
void UTimeSourceFromScenario::EditorForceUpdate() {
    static auto func = (UFunction*)(find_uobject("Function /Script/DayNight.TimeSourceFromScenario.EditorForceUpdate"));
    struct Params_EditorForceUpdate {
    }; // Size: 0x0
    Params_EditorForceUpdate params{};
    ProcessEvent(func, &params);
}
