#include "ABP_SkinFX_LevelUpL1_C.hpp"
#include "ABP_SkinFX_NoGraph_Parent_C.hpp"
ABP_SkinFX_LevelUpL1_C* ABP_SkinFX_LevelUpL1_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/VFX/SkinFX/BP_SkinFX_LevelUpL1.BP_SkinFX_LevelUpL1_C");
    return (ABP_SkinFX_LevelUpL1_C*)res;
}
