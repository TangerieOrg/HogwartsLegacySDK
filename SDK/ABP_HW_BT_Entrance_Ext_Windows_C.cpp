#include "ABP_HW_BT_Entrance_Ext_Windows_C.hpp"
#include "ABP_Window_Parent_C.hpp"
ABP_HW_BT_Entrance_Ext_Windows_C* ABP_HW_BT_Entrance_Ext_Windows_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Environment/Hogwarts/Blueprints/HogwartsWindows/BP_HW_BT_Entrance_Ext_Windows.BP_HW_BT_Entrance_Ext_Windows_C");
    return (ABP_HW_BT_Entrance_Ext_Windows_C*)res;
}
