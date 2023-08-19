#include "ABP_SkinFX_DiffindoSlice_C.hpp"
#include "ABP_SkinFX_NoGraph_Parent_C.hpp"
ABP_SkinFX_DiffindoSlice_C* ABP_SkinFX_DiffindoSlice_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/VFX/SkinFX/BP_SkinFX_DiffindoSlice.BP_SkinFX_DiffindoSlice_C");
    return (ABP_SkinFX_DiffindoSlice_C*)res;
}
