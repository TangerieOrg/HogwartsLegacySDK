#include "UFunction.hpp"
#include "UInputToGameLogic.hpp"
#include "UObject.hpp"
UInputToGameLogic* UInputToGameLogic::StaticClass() {
    static auto res = find_uobject("Class /Script/ControlMapper.InputToGameLogic");
    return (UInputToGameLogic*)res;
}
void UInputToGameLogic::InputFlushed() {
    static auto func = (UFunction*)(find_uobject("Function /Script/ControlMapper.InputToGameLogic.InputFlushed"));
    struct Params_InputFlushed {
    }; // Size: 0x0
    Params_InputFlushed params{};
    ProcessEvent(func, &params);
}
