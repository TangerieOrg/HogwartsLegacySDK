#include "ABP_SkinFX_NoGraph_Parent_C.hpp"
#include "ABP_SkinFX_PetrificusWipe_C.hpp"
ABP_SkinFX_PetrificusWipe_C* ABP_SkinFX_PetrificusWipe_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/VFX/SkinFX/BP_SkinFX_PetrificusWipe.BP_SkinFX_PetrificusWipe_C");
    return (ABP_SkinFX_PetrificusWipe_C*)res;
}
