#include "ABP_SkinFX_ApparateGoblin_C.hpp"
#include "ABP_SkinFX_Apparate_C.hpp"
ABP_SkinFX_ApparateGoblin_C* ABP_SkinFX_ApparateGoblin_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/VFX/SkinFX/BP_SkinFX_ApparateGoblin.BP_SkinFX_ApparateGoblin_C");
    return (ABP_SkinFX_ApparateGoblin_C*)res;
}
