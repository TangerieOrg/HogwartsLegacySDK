#include "ABP_SkinFX_NoGraph_Parent_C.hpp"
#include "ABP_SkinFX_Rain_C.hpp"
ABP_SkinFX_Rain_C* ABP_SkinFX_Rain_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/VFX/SkinFX/BP_SkinFX_Rain.BP_SkinFX_Rain_C");
    return (ABP_SkinFX_Rain_C*)res;
}
