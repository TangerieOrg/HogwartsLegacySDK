#include "FDateTimeInput.hpp"
#include "UFunction.hpp"
#include "UTimeSourceFromDateTime.hpp"
#include "UTimeSourceLocal.hpp"
UTimeSourceFromDateTime* UTimeSourceFromDateTime::StaticClass() {
    static auto res = find_uobject("Class /Script/DayNight.TimeSourceFromDateTime");
    return (UTimeSourceFromDateTime*)res;
}
void UTimeSourceFromDateTime::EditorForceUpdate() {
    static auto func = (UFunction*)(find_uobject("Function /Script/DayNight.TimeSourceFromDateTime.EditorForceUpdate"));
    struct Params_EditorForceUpdate {
    }; // Size: 0x0
    Params_EditorForceUpdate params{};
    ProcessEvent(func, &params);
}
