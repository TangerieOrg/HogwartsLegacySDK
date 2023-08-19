#include "ABP_HW_RT_Ext_WindowSet_F_C.hpp"
#include "ABP_Window_Parent_C.hpp"
ABP_HW_RT_Ext_WindowSet_F_C* ABP_HW_RT_Ext_WindowSet_F_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Environment/Hogwarts/Blueprints/HogwartsWindows/BP_HW_RT_Ext_WindowSet_F.BP_HW_RT_Ext_WindowSet_F_C");
    return (ABP_HW_RT_Ext_WindowSet_F_C*)res;
}
