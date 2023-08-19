#include "ETurnAssistUseDirection\Type.hpp"
#include "FVector2D.hpp"
#include "UAblAbilityTask.hpp"
#include "UCurveFloat.hpp"
#include "UablTurnAssistTask.hpp"
UablTurnAssistTask* UablTurnAssistTask::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ablTurnAssistTask");
    return (UablTurnAssistTask*)res;
}
