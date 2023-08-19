#include "ABP_BroomMoonTrimmerItem_C.hpp"
#include "ABroomItemTool.hpp"
#include "USceneComponent.hpp"
ABP_BroomMoonTrimmerItem_C* ABP_BroomMoonTrimmerItem_C::StaticClass() {
    static auto res = find_uobject("BlueprintGeneratedClass /Game/Gameplay/ToolSet/Items/InventoryItems/Broom/BP_BroomMoonTrimmerItem.BP_BroomMoonTrimmerItem_C");
    return (ABP_BroomMoonTrimmerItem_C*)res;
}
