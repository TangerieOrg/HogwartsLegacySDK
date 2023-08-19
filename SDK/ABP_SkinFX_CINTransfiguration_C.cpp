#include "ABP_SkinFX_CINTransfiguration_C.hpp"
#include "ABP_SkinFX_NoGraph_Parent_C.hpp"
ABP_SkinFX_CINTransfiguration_C* ABP_SkinFX_CINTransfiguration_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/VFX/SkinFX/BP_SkinFX_CINTransfiguration.BP_SkinFX_CINTransfiguration_C");
    return (ABP_SkinFX_CINTransfiguration_C*)res;
}
