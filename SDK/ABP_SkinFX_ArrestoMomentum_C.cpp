#include "ABP_SkinFX_ArrestoMomentum_C.hpp"
#include "ABP_SkinFX_NoGraph_Parent_C.hpp"
ABP_SkinFX_ArrestoMomentum_C* ABP_SkinFX_ArrestoMomentum_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/VFX/SkinFX/BP_SkinFX_ArrestoMomentum.BP_SkinFX_ArrestoMomentum_C");
    return (ABP_SkinFX_ArrestoMomentum_C*)res;
}
