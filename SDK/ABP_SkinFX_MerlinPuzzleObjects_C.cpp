#include "ABP_SkinFX_MerlinPuzzleObjects_C.hpp"
#include "ABP_SkinFX_NoGraph_Parent_C.hpp"
ABP_SkinFX_MerlinPuzzleObjects_C* ABP_SkinFX_MerlinPuzzleObjects_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/VFX/SkinFX/BP_SkinFX_MerlinPuzzleObjects.BP_SkinFX_MerlinPuzzleObjects_C");
    return (ABP_SkinFX_MerlinPuzzleObjects_C*)res;
}
