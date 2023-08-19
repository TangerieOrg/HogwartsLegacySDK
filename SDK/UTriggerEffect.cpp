#include "TriggerModeEnum.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
#include "UTriggerEffect.hpp"
UTriggerEffect* UTriggerEffect::StaticClass() {
    static auto res = find_uobject("Class /Script/Toolset.TriggerEffect");
    return (UTriggerEffect*)res;
}
void UTriggerEffect::MarkForUpdate() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Toolset.TriggerEffect.MarkForUpdate"));
    struct Params_MarkForUpdate {
    }; // Size: 0x0
    Params_MarkForUpdate params{};
    ProcessEvent(func, &params);
}
