#include "ABP_SkinFX_Apparate_C.hpp"
#include "ABP_SkinFX_NoGraph_Parent_C.hpp"
ABP_SkinFX_Apparate_C* ABP_SkinFX_Apparate_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/VFX/SkinFX/BP_SkinFX_Apparate.BP_SkinFX_Apparate_C");
    return (ABP_SkinFX_Apparate_C*)res;
}
