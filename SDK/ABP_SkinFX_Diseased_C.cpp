#include "ABP_SkinFX_Diseased_C.hpp"
#include "ABP_SkinFX_NoGraph_Parent_C.hpp"
ABP_SkinFX_Diseased_C* ABP_SkinFX_Diseased_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/VFX/SkinFX/BP_SkinFX_Diseased.BP_SkinFX_Diseased_C");
    return (ABP_SkinFX_Diseased_C*)res;
}
