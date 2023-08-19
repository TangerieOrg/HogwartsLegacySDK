#include "ABP_SkinFX_FelixFelicis_C.hpp"
#include "ABP_SkinFX_NoGraph_Parent_C.hpp"
ABP_SkinFX_FelixFelicis_C* ABP_SkinFX_FelixFelicis_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/VFX/SkinFX/BP_SkinFX_FelixFelicis.BP_SkinFX_FelixFelicis_C");
    return (ABP_SkinFX_FelixFelicis_C*)res;
}
