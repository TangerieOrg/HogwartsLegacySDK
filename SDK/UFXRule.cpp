#include "UFXRule.hpp"
#include "UFunction.hpp"
#include "UObject.hpp"
UFXRule* UFXRule::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.FXRule");
    return (UFXRule*)res;
}
bool UFXRule::IsMatch() {
    static auto func = (UFunction*)(find_uobject("Function /Script/SceneRig.FXRule.IsMatch"));
    struct Params_IsMatch {
        bool ReturnValue; // 0x0
    }; // Size: 0x1
    Params_IsMatch params{};
    ProcessEvent(func, &params);
    return (bool)params.ReturnValue;
}
