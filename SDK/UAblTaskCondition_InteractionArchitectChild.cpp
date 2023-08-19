#include "EInteractionProject.hpp"
#include "UAblTaskCondition.hpp"
#include "UAblTaskCondition_InteractionArchitectChild.hpp"
#include "UInteractionArchitectAsset.hpp"
UAblTaskCondition_InteractionArchitectChild* UAblTaskCondition_InteractionArchitectChild::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblTaskCondition_InteractionArchitectChild");
    return (UAblTaskCondition_InteractionArchitectChild*)res;
}
