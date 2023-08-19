#include "ABP_SkinFX_Disintegrate_C.hpp"
#include "ABP_SkinFX_NoGraph_Parent_C.hpp"
ABP_SkinFX_Disintegrate_C* ABP_SkinFX_Disintegrate_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/VFX/SkinFX/BP_SkinFX_Disintegrate.BP_SkinFX_Disintegrate_C");
    return (ABP_SkinFX_Disintegrate_C*)res;
}
