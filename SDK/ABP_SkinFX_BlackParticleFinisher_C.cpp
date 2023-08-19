#include "ABP_SkinFX_BlackParticleFinisher_C.hpp"
#include "ABP_SkinFX_NoGraph_Parent_C.hpp"
ABP_SkinFX_BlackParticleFinisher_C* ABP_SkinFX_BlackParticleFinisher_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/VFX/SkinFX/BP_SkinFX_BlackParticleFinisher.BP_SkinFX_BlackParticleFinisher_C");
    return (ABP_SkinFX_BlackParticleFinisher_C*)res;
}
