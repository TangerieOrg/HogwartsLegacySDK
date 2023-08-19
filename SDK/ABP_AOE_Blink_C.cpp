#include "ABP_AOE_Blink_C.hpp"
#include "AMunitionType_AOE.hpp"
#include "USceneComponent.hpp"
ABP_AOE_Blink_C* ABP_AOE_Blink_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/Munitions/BP_AOE_Blink.BP_AOE_Blink_C");
    return (ABP_AOE_Blink_C*)res;
}
