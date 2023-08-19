#include "ABP_BanditCamp_BreakableFloor_C.hpp"
#include "ABP_Breakable_Persistent_C.hpp"
ABP_BanditCamp_BreakableFloor_C* ABP_BanditCamp_BreakableFloor_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/Blueprints/BanditCamps/BP_BanditCamp_BreakableFloor.BP_BanditCamp_BreakableFloor_C");
    return (ABP_BanditCamp_BreakableFloor_C*)res;
}
