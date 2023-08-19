#include "ABP_SkinFX_NoGraph_Parent_C.hpp"
#include "ABP_SkinFX_POMaxima_C.hpp"
ABP_SkinFX_POMaxima_C* ABP_SkinFX_POMaxima_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/VFX/SkinFX/BP_SkinFX_POMaxima.BP_SkinFX_POMaxima_C");
    return (ABP_SkinFX_POMaxima_C*)res;
}
