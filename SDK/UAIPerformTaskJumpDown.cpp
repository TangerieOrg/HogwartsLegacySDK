#include "UAIPerformTaskBase.hpp"
#include "UAIPerformTaskJumpDown.hpp"
#include "UClass.hpp"
#include "UFunction.hpp"
UAIPerformTaskJumpDown* UAIPerformTaskJumpDown::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AIPerformTaskJumpDown");
    return (UAIPerformTaskJumpDown*)res;
}
void UAIPerformTaskJumpDown::JumpFinished() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AIPerformTaskJumpDown.JumpFinished"));
    struct Params_JumpFinished {
    }; // Size: 0x0
    Params_JumpFinished params{};
    ProcessEvent(func, &params);
}
