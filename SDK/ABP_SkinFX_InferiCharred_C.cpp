#include "ABP_SkinFX_InferiCharred_C.hpp"
#include "ABP_SkinFX_NoGraph_Parent_C.hpp"
ABP_SkinFX_InferiCharred_C* ABP_SkinFX_InferiCharred_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/VFX/SkinFX/BP_SkinFX_InferiCharred.BP_SkinFX_InferiCharred_C");
    return (ABP_SkinFX_InferiCharred_C*)res;
}
