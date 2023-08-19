#include "ABP_HM_Lantern_D_C.hpp"
#include "ABP_LightFixture_Master_C.hpp"
ABP_HM_Lantern_D_C* ABP_HM_Lantern_D_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Environment/Hogsmeade/Blueprints/LightingFixtures/BP_HM_Lantern_D.BP_HM_Lantern_D_C");
    return (ABP_HM_Lantern_D_C*)res;
}
