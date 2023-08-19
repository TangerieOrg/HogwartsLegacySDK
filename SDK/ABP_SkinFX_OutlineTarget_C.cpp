#include "ABP_SkinFX_NoGraph_Parent_C.hpp"
#include "ABP_SkinFX_OutlineTarget_C.hpp"
ABP_SkinFX_OutlineTarget_C* ABP_SkinFX_OutlineTarget_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/VFX/SkinFX/BP_SkinFX_OutlineTarget.BP_SkinFX_OutlineTarget_C");
    return (ABP_SkinFX_OutlineTarget_C*)res;
}
