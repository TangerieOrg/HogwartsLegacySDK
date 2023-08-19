#include "ABP_HW_GST_EXT_WindowSet_I_C.hpp"
#include "ABP_Window_Parent_C.hpp"
ABP_HW_GST_EXT_WindowSet_I_C* ABP_HW_GST_EXT_WindowSet_I_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Environment/Hogwarts/Blueprints/HogwartsWindows/BP_HW_GST_EXT_WindowSet_I.BP_HW_GST_EXT_WindowSet_I_C");
    return (ABP_HW_GST_EXT_WindowSet_I_C*)res;
}
