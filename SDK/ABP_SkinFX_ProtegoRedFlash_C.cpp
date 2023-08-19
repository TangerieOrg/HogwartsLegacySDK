#include "ABP_SkinFX_NoGraph_Parent_C.hpp"
#include "ABP_SkinFX_ProtegoRedFlash_C.hpp"
ABP_SkinFX_ProtegoRedFlash_C* ABP_SkinFX_ProtegoRedFlash_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/VFX/SkinFX/BP_SkinFX_ProtegoRedFlash.BP_SkinFX_ProtegoRedFlash_C");
    return (ABP_SkinFX_ProtegoRedFlash_C*)res;
}
