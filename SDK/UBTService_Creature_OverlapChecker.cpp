#include "FBlackboardKeySelector.hpp"
#include "UBTService.hpp"
#include "UBTService_Creature_OverlapChecker.hpp"
UBTService_Creature_OverlapChecker* UBTService_Creature_OverlapChecker::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.BTService_Creature_OverlapChecker");
    return (UBTService_Creature_OverlapChecker*)res;
}
