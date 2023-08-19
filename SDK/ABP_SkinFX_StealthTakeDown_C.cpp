#include "ABP_SkinFX_NoGraph_Parent_C.hpp"
#include "ABP_SkinFX_StealthTakeDown_C.hpp"
ABP_SkinFX_StealthTakeDown_C* ABP_SkinFX_StealthTakeDown_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/VFX/SkinFX/BP_SkinFX_StealthTakeDown.BP_SkinFX_StealthTakeDown_C");
    return (ABP_SkinFX_StealthTakeDown_C*)res;
}
