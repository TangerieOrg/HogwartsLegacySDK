#include "ABP_HW_CT_MiddleSection_Ext_Window_C.hpp"
#include "ABP_Window_Parent_C.hpp"
ABP_HW_CT_MiddleSection_Ext_Window_C* ABP_HW_CT_MiddleSection_Ext_Window_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Environment/Hogwarts/Blueprints/HogwartsWindows/BP_HW_CT_MiddleSection_Ext_Window.BP_HW_CT_MiddleSection_Ext_Window_C");
    return (ABP_HW_CT_MiddleSection_Ext_Window_C*)res;
}
