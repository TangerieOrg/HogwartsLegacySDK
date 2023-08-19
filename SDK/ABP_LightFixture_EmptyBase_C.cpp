#include "ABP_LightFixture_EmptyBase_C.hpp"
#include "ABP_LightFixture_Master_C.hpp"
ABP_LightFixture_EmptyBase_C* ABP_LightFixture_EmptyBase_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Environment/Hogwarts/Blueprints/LightFixtures/BP_LightFixture_EmptyBase.BP_LightFixture_EmptyBase_C");
    return (ABP_LightFixture_EmptyBase_C*)res;
}
