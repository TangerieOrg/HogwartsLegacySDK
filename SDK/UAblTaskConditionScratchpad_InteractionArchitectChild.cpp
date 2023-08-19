#include "UAblTaskConditionScratchpad.hpp"
#include "UAblTaskConditionScratchpad_InteractionArchitectChild.hpp"
#include "UInteractionArchitectAsset.hpp"
UAblTaskConditionScratchpad_InteractionArchitectChild* UAblTaskConditionScratchpad_InteractionArchitectChild::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblTaskConditionScratchpad_InteractionArchitectChild");
    return (UAblTaskConditionScratchpad_InteractionArchitectChild*)res;
}
