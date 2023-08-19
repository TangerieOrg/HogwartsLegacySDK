#include "ABP_HW_DADA_WindowSet_B_C.hpp"
#include "ABP_Window_Parent_C.hpp"
ABP_HW_DADA_WindowSet_B_C* ABP_HW_DADA_WindowSet_B_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Environment/Hogwarts/Blueprints/HogwartsWindows/BP_HW_DADA_WindowSet_B.BP_HW_DADA_WindowSet_B_C");
    return (ABP_HW_DADA_WindowSet_B_C*)res;
}
