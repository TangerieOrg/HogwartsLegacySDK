#include "ABP_SkinFX_NoGraph_Parent_C.hpp"
#include "ABP_SkinFX_Stone_C.hpp"
ABP_SkinFX_Stone_C* ABP_SkinFX_Stone_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/VFX/SkinFX/BP_SkinFX_Stone.BP_SkinFX_Stone_C");
    return (ABP_SkinFX_Stone_C*)res;
}
