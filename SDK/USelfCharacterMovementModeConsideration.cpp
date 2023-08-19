#include "EMovementMode.hpp"
#include "UQualifierConsideration.hpp"
#include "USelfCharacterMovementModeConsideration.hpp"
USelfCharacterMovementModeConsideration* USelfCharacterMovementModeConsideration::StaticClass() {
    static auto res = find_uobject("Class /Script/BTUtilityAI.SelfCharacterMovementModeConsideration");
    return (USelfCharacterMovementModeConsideration*)res;
}
