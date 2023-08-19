#include "FAlphaBlend.hpp"
#include "FTurnAssistTaskEntry.hpp"
#include "FVector.hpp"
#include "UAblAbilityTaskScratchPad.hpp"
#include "UablTurnAssistTaskScratchPad.hpp"
UablTurnAssistTaskScratchPad* UablTurnAssistTaskScratchPad::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ablTurnAssistTaskScratchPad");
    return (UablTurnAssistTaskScratchPad*)res;
}
