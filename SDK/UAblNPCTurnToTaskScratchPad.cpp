#include "AActor.hpp"
#include "FAlphaBlend.hpp"
#include "FRotator.hpp"
#include "UAblAbilityTaskScratchPad.hpp"
#include "UAblNPCTurnToTaskScratchPad.hpp"
UAblNPCTurnToTaskScratchPad* UAblNPCTurnToTaskScratchPad::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblNPCTurnToTaskScratchPad");
    return (UAblNPCTurnToTaskScratchPad*)res;
}
