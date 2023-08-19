#include "ABP_SkinFX_ForceSpell_C.hpp"
#include "ABP_SkinFX_NoGraph_Parent_C.hpp"
ABP_SkinFX_ForceSpell_C* ABP_SkinFX_ForceSpell_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/VFX/SkinFX/BP_SkinFX_ForceSpell.BP_SkinFX_ForceSpell_C");
    return (ABP_SkinFX_ForceSpell_C*)res;
}
