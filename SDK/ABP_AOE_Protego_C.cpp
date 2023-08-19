#include "ABP_AOE_Protego_C.hpp"
#include "AMunitionType_AOE_MultiFX.hpp"
#include "USceneComponent.hpp"
ABP_AOE_Protego_C* ABP_AOE_Protego_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/Munitions/BP_AOE_Protego.BP_AOE_Protego_C");
    return (ABP_AOE_Protego_C*)res;
}
