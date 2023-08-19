#include "UAblAbilityTaskScratchPad.hpp"
#include "UAblNPC_DilateTaskScratchPad.hpp"
UAblNPC_DilateTaskScratchPad* UAblNPC_DilateTaskScratchPad::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblNPC_DilateTaskScratchPad");
    return (UAblNPC_DilateTaskScratchPad*)res;
}
