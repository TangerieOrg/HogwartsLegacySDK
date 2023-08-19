#include "ABP_SkinFX_NoGraph_Parent_C.hpp"
#include "ABP_SkinFX_ProtegoRed_C.hpp"
ABP_SkinFX_ProtegoRed_C* ABP_SkinFX_ProtegoRed_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/VFX/SkinFX/BP_SkinFX_ProtegoRed.BP_SkinFX_ProtegoRed_C");
    return (ABP_SkinFX_ProtegoRed_C*)res;
}
