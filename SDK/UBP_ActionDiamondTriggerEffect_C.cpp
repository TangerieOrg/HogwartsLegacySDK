#include "UBP_ActionDiamondTriggerEffect_C.hpp"
#include "UTriggerEffect.hpp"
UBP_ActionDiamondTriggerEffect_C* UBP_ActionDiamondTriggerEffect_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/ToolSet/Spells/TriggerEffects/BP_ActionDiamondTriggerEffect.BP_ActionDiamondTriggerEffect_C");
    return (UBP_ActionDiamondTriggerEffect_C*)res;
}
