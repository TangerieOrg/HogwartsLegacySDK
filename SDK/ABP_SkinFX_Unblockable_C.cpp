#include "ABP_SkinFX_NoGraph_Parent_C.hpp"
#include "ABP_SkinFX_Unblockable_C.hpp"
ABP_SkinFX_Unblockable_C* ABP_SkinFX_Unblockable_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/VFX/SkinFX/BP_SkinFX_Unblockable.BP_SkinFX_Unblockable_C");
    return (ABP_SkinFX_Unblockable_C*)res;
}
