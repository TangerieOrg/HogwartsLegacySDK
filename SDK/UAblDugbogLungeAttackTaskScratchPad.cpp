#include "FVector.hpp"
#include "UAblAbilityTaskScratchPad.hpp"
#include "UAblDugbogLungeAttackTaskScratchPad.hpp"
UAblDugbogLungeAttackTaskScratchPad* UAblDugbogLungeAttackTaskScratchPad::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblDugbogLungeAttackTaskScratchPad");
    return (UAblDugbogLungeAttackTaskScratchPad*)res;
}
