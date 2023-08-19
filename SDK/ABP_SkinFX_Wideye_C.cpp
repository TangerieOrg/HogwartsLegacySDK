#include "ABP_SkinFX_NoGraph_Parent_C.hpp"
#include "ABP_SkinFX_Wideye_C.hpp"
ABP_SkinFX_Wideye_C* ABP_SkinFX_Wideye_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/VFX/SkinFX/BP_SkinFX_Wideye.BP_SkinFX_Wideye_C");
    return (ABP_SkinFX_Wideye_C*)res;
}
