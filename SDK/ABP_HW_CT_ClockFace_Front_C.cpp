#include "ABP_HW_CT_ClockFace_Front_C.hpp"
#include "ABP_Window_Parent_C.hpp"
ABP_HW_CT_ClockFace_Front_C* ABP_HW_CT_ClockFace_Front_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Environment/Hogwarts/Blueprints/HogwartsWindows/BP_HW_CT_ClockFace_Front.BP_HW_CT_ClockFace_Front_C");
    return (ABP_HW_CT_ClockFace_Front_C*)res;
}
