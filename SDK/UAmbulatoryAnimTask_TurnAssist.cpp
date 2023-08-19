#include "FAlphaBlend.hpp"
#include "FVector.hpp"
#include "UAmbulatoryAnimTask_TurnAssist.hpp"
#include "UAmbulatoryTurnAssistAnimTask.hpp"
UAmbulatoryAnimTask_TurnAssist* UAmbulatoryAnimTask_TurnAssist::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AmbulatoryAnimTask_TurnAssist");
    return (UAmbulatoryAnimTask_TurnAssist*)res;
}
