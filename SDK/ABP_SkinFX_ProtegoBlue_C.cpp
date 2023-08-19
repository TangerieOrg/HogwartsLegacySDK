#include "ABP_SkinFX_NoGraph_Parent_C.hpp"
#include "ABP_SkinFX_ProtegoBlue_C.hpp"
ABP_SkinFX_ProtegoBlue_C* ABP_SkinFX_ProtegoBlue_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/VFX/SkinFX/BP_SkinFX_ProtegoBlue.BP_SkinFX_ProtegoBlue_C");
    return (ABP_SkinFX_ProtegoBlue_C*)res;
}
