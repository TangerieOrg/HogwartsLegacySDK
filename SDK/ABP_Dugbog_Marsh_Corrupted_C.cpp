#include "ABP_Dugbog_C.hpp"
#include "ABP_Dugbog_Marsh_Corrupted_C.hpp"
ABP_Dugbog_Marsh_Corrupted_C* ABP_Dugbog_Marsh_Corrupted_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Pawn/NPC/Enemy/Character/Dugbog/BP_Dugbog_Marsh_Corrupted.BP_Dugbog_Marsh_Corrupted_C");
    return (ABP_Dugbog_Marsh_Corrupted_C*)res;
}
