#include "ABP_HM_Lantern_A_C.hpp"
#include "ABP_LightFixture_Master_C.hpp"
ABP_HM_Lantern_A_C* ABP_HM_Lantern_A_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Environment/Hogsmeade/Blueprints/LightingFixtures/BP_HM_Lantern_A.BP_HM_Lantern_A_C");
    return (ABP_HM_Lantern_A_C*)res;
}
