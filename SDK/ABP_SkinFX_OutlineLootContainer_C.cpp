#include "ABP_SkinFX_NoGraph_Parent_C.hpp"
#include "ABP_SkinFX_OutlineLootContainer_C.hpp"
ABP_SkinFX_OutlineLootContainer_C* ABP_SkinFX_OutlineLootContainer_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/VFX/SkinFX/BP_SkinFX_OutlineLootContainer.BP_SkinFX_OutlineLootContainer_C");
    return (ABP_SkinFX_OutlineLootContainer_C*)res;
}
