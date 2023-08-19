#include "ABP_AOE_DWConfringoFumble_C.hpp"
#include "AMunitionType_AOE_MultiFX.hpp"
#include "USceneComponent.hpp"
ABP_AOE_DWConfringoFumble_C* ABP_AOE_DWConfringoFumble_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/Munitions/BP_AOE_DWConfringoFumble.BP_AOE_DWConfringoFumble_C");
    return (ABP_AOE_DWConfringoFumble_C*)res;
}
