#include "UAmbientGhost_AnimInstance.hpp"
#include "UAnimInstance.hpp"
#include "UFunction.hpp"
UAmbientGhost_AnimInstance* UAmbientGhost_AnimInstance::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AmbientGhost_AnimInstance");
    return (UAmbientGhost_AnimInstance*)res;
}
void UAmbientGhost_AnimInstance::WaveCompleted() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Phoenix.AmbientGhost_AnimInstance.WaveCompleted"));
    struct Params_WaveCompleted {
    }; // Size: 0x0
    Params_WaveCompleted params{};
    ProcessEvent(func, &params);
}
