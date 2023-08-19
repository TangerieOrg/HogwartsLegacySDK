#include "URPGTriggerEffect_AdjustInventoryItem.hpp"
#include "URPGTriggerEffect_Base.hpp"
URPGTriggerEffect_AdjustInventoryItem* URPGTriggerEffect_AdjustInventoryItem::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RPGTriggerEffect_AdjustInventoryItem");
    return (URPGTriggerEffect_AdjustInventoryItem*)res;
}
