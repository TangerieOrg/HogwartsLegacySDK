#include "ABP_SkinFX_NoGraph_Parent_C.hpp"
#include "ABP_SkinFX_WebbedUp_C.hpp"
ABP_SkinFX_WebbedUp_C* ABP_SkinFX_WebbedUp_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/VFX/SkinFX/BP_SkinFX_WebbedUp.BP_SkinFX_WebbedUp_C");
    return (ABP_SkinFX_WebbedUp_C*)res;
}
