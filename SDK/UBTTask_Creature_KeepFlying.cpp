#include "UBTTaskNode.hpp"
#include "UBTTask_Creature_KeepFlying.hpp"
UBTTask_Creature_KeepFlying* UBTTask_Creature_KeepFlying::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.BTTask_Creature_KeepFlying");
    return (UBTTask_Creature_KeepFlying*)res;
}
