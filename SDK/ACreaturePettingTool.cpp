#include "ACreatureInteractionTool.hpp"
#include "ACreaturePettingTool.hpp"
#include "UFunction.hpp"
ACreaturePettingTool* ACreaturePettingTool::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.CreaturePettingTool");
    return (ACreaturePettingTool*)res;
}
void ACreaturePettingTool::RemoveAimAtTarget() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreaturePettingTool.RemoveAimAtTarget"));
    struct Params_RemoveAimAtTarget {
    }; // Size: 0x0
    Params_RemoveAimAtTarget params{};
    ProcessEvent(func, &params);
}
void ACreaturePettingTool::AddAimAtTarget() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.CreaturePettingTool.AddAimAtTarget"));
    struct Params_AddAimAtTarget {
    }; // Size: 0x0
    Params_AddAimAtTarget params{};
    ProcessEvent(func, &params);
}
