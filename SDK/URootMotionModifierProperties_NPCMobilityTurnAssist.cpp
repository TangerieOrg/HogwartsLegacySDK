#include "ENPC_TurnAssist.hpp"
#include "URootMotionModifierProperties.hpp"
#include "URootMotionModifierProperties_NPCMobilityTurnAssist.hpp"
URootMotionModifierProperties_NPCMobilityTurnAssist* URootMotionModifierProperties_NPCMobilityTurnAssist::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.RootMotionModifierProperties_NPCMobilityTurnAssist");
    return (URootMotionModifierProperties_NPCMobilityTurnAssist*)res;
}
