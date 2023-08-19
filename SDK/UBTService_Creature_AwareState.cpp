#include "ENPC_TargetAwareState.hpp"
#include "FBlackboardKeySelector.hpp"
#include "UBTService.hpp"
#include "UBTService_Creature_AwareState.hpp"
UBTService_Creature_AwareState* UBTService_Creature_AwareState::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.BTService_Creature_AwareState");
    return (UBTService_Creature_AwareState*)res;
}
