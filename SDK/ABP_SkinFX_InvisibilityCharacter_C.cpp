#include "ABP_SkinFX_InvisibilityCharacter_C.hpp"
#include "ABP_SkinFX_NoGraph_Parent_C.hpp"
ABP_SkinFX_InvisibilityCharacter_C* ABP_SkinFX_InvisibilityCharacter_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/VFX/SkinFX/BP_SkinFX_InvisibilityCharacter.BP_SkinFX_InvisibilityCharacter_C");
    return (ABP_SkinFX_InvisibilityCharacter_C*)res;
}
