#include "ABP_SkinFX_InvisibilityObject_C.hpp"
#include "ABP_SkinFX_NoGraph_Parent_C.hpp"
ABP_SkinFX_InvisibilityObject_C* ABP_SkinFX_InvisibilityObject_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/VFX/SkinFX/BP_SkinFX_InvisibilityObject.BP_SkinFX_InvisibilityObject_C");
    return (ABP_SkinFX_InvisibilityObject_C*)res;
}
