#include "UAblAbilityTaskScratchPad.hpp"
#include "UFunction.hpp"
#include "UablInputContextTaskScratchPad.hpp"
UablInputContextTaskScratchPad* UablInputContextTaskScratchPad::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ablInputContextTaskScratchPad");
    return (UablInputContextTaskScratchPad*)res;
}
void UablInputContextTaskScratchPad::LeafNodeSwitched() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.ablInputContextTaskScratchPad.LeafNodeSwitched"));
    struct Params_LeafNodeSwitched {
    }; // Size: 0x0
    Params_LeafNodeSwitched params{};
    ProcessEvent(func, &params);
}
