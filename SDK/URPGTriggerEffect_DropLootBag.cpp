#include "URPGTriggerEffect_Conditional.hpp"
#include "URPGTriggerEffect_DropLootBag.hpp"
URPGTriggerEffect_DropLootBag* URPGTriggerEffect_DropLootBag::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RPGTriggerEffect_DropLootBag");
    return (URPGTriggerEffect_DropLootBag*)res;
}
