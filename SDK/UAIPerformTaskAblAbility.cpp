#include "UAIPerformTaskAblAbility.hpp"
#include "UAIPerformTaskBase.hpp"
#include "UClass.hpp"
UAIPerformTaskAblAbility* UAIPerformTaskAblAbility::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AIPerformTaskAblAbility");
    return (UAIPerformTaskAblAbility*)res;
}
