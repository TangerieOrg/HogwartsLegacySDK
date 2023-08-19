#include "UBTTaskNode.hpp"
#include "UBTTask_Creature_WaitUntilStationary.hpp"
UBTTask_Creature_WaitUntilStationary* UBTTask_Creature_WaitUntilStationary::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.BTTask_Creature_WaitUntilStationary");
    return (UBTTask_Creature_WaitUntilStationary*)res;
}
