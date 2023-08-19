#include "ABP_AOE_FierySend_C.hpp"
#include "AMunitionType_AOE_MultiFX.hpp"
#include "USceneComponent.hpp"
ABP_AOE_FierySend_C* ABP_AOE_FierySend_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/Munitions/BP_AOE_FierySend.BP_AOE_FierySend_C");
    return (ABP_AOE_FierySend_C*)res;
}
