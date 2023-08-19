#include "ECreatureTargetPredictionLookAheadOption.hpp"
#include "ECreatureTargetPredictionStraightLineReachableOption.hpp"
#include "FAIDataProviderFloatValue.hpp"
#include "FBlackboardKeySelector.hpp"
#include "UBTService.hpp"
#include "UBTService_Creature_TargetPrediction.hpp"
#include "UCreatureCombatAttackData.hpp"
UBTService_Creature_TargetPrediction* UBTService_Creature_TargetPrediction::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.BTService_Creature_TargetPrediction");
    return (UBTService_Creature_TargetPrediction*)res;
}
