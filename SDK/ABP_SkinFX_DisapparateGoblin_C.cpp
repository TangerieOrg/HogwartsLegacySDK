#include "ABP_SkinFX_DisapparateGoblin_C.hpp"
#include "ABP_SkinFX_Disapparate_C.hpp"
ABP_SkinFX_DisapparateGoblin_C* ABP_SkinFX_DisapparateGoblin_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/VFX/SkinFX/BP_SkinFX_DisapparateGoblin.BP_SkinFX_DisapparateGoblin_C");
    return (ABP_SkinFX_DisapparateGoblin_C*)res;
}
