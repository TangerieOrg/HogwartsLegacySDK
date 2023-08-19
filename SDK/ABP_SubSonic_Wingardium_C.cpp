#include "ABP_SubSonic_Wingardium_C.hpp"
#include "AMunitionType_SubsonicSpell.hpp"
ABP_SubSonic_Wingardium_C* ABP_SubSonic_Wingardium_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/Munitions/BP_SubSonic_Wingardium.BP_SubSonic_Wingardium_C");
    return (ABP_SubSonic_Wingardium_C*)res;
}
