#include "ABP_HW_GST_EXT_WindowSet_H_C.hpp"
#include "ABP_Window_Parent_C.hpp"
ABP_HW_GST_EXT_WindowSet_H_C* ABP_HW_GST_EXT_WindowSet_H_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Environment/Hogwarts/Blueprints/HogwartsWindows/BP_HW_GST_EXT_WindowSet_H.BP_HW_GST_EXT_WindowSet_H_C");
    return (ABP_HW_GST_EXT_WindowSet_H_C*)res;
}
