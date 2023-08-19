#include "FVector2D.hpp"
#include "UAmbulatoryAnimTask.hpp"
#include "UAmbulatoryTurnAssistAnimTask.hpp"
#include "UCurveFloat.hpp"
UAmbulatoryTurnAssistAnimTask* UAmbulatoryTurnAssistAnimTask::StaticClass() {
    static auto res = find_uobject("Class /Script/Ambulatory.AmbulatoryTurnAssistAnimTask");
    return (UAmbulatoryTurnAssistAnimTask*)res;
}
