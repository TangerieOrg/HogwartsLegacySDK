#include "ABP_SkinFX_StoneSkinUpgrade_C.hpp"
#include "ABP_SkinFX_StoneSkin_C.hpp"
ABP_SkinFX_StoneSkinUpgrade_C* ABP_SkinFX_StoneSkinUpgrade_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/VFX/SkinFX/BP_SkinFX_StoneSkinUpgrade.BP_SkinFX_StoneSkinUpgrade_C");
    return (ABP_SkinFX_StoneSkinUpgrade_C*)res;
}
