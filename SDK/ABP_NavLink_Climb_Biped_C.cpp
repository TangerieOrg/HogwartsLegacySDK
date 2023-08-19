#include "ABP_NavLink_Climb_Biped_C.hpp"
#include "ALinkStripActor.hpp"
ABP_NavLink_Climb_Biped_C* ABP_NavLink_Climb_Biped_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/Navigation/BP_NavLink_Climb_Biped.BP_NavLink_Climb_Biped_C");
    return (ABP_NavLink_Climb_Biped_C*)res;
}
