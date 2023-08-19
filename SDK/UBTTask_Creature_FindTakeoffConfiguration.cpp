#include "FBlackboardKeySelector.hpp"
#include "FGameplayTagContainer.hpp"
#include "UBTTaskNode.hpp"
#include "UBTTask_Creature_FindTakeoffConfiguration.hpp"
UBTTask_Creature_FindTakeoffConfiguration* UBTTask_Creature_FindTakeoffConfiguration::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.BTTask_Creature_FindTakeoffConfiguration");
    return (UBTTask_Creature_FindTakeoffConfiguration*)res;
}
