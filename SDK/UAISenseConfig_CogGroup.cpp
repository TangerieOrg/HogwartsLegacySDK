#include "UAISenseConfig_CogGroup.hpp"
#include "UAISenseConfig_Cognition.hpp"
#include "UClass.hpp"
#include "UCogGroupDebug.hpp"
#include "UCogGroupEvaluation.hpp"
#include "UCogGroupEvaluation_SecondOrder.hpp"
#include "UCogGroupFocusDirection.hpp"
#include "UCogGroupPerceiverPoint.hpp"
#include "UCogGroupTargetPoint.hpp"
#include "UCogGroupUpDirection.hpp"
UAISenseConfig_CogGroup* UAISenseConfig_CogGroup::StaticClass() {
    static auto res = find_uobject("Class /Script/Cognition.AISenseConfig_CogGroup");
    return (UAISenseConfig_CogGroup*)res;
}
