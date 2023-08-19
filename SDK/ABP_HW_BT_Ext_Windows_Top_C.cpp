#include "ABP_HW_BT_Ext_Windows_Top_C.hpp"
#include "ABP_Window_Parent_C.hpp"
ABP_HW_BT_Ext_Windows_Top_C* ABP_HW_BT_Ext_Windows_Top_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Environment/Hogwarts/Blueprints/HogwartsWindows/BP_HW_BT_Ext_Windows_Top.BP_HW_BT_Ext_Windows_Top_C");
    return (ABP_HW_BT_Ext_Windows_Top_C*)res;
}
