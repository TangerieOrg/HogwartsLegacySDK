#include "FLedgeAssistTaskEntry.hpp"
#include "FRotator.hpp"
#include "FVector.hpp"
#include "UAblAbilityTaskScratchPad.hpp"
#include "UablLedgeAssistTaskScratchPad.hpp"
UablLedgeAssistTaskScratchPad* UablLedgeAssistTaskScratchPad::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ablLedgeAssistTaskScratchPad");
    return (UablLedgeAssistTaskScratchPad*)res;
}
