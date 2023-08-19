#include "FAlphaBlend.hpp"
#include "UAblAbilityEvent.hpp"
#include "UAblBranchCondition.hpp"
#include "UAblBranchEvent.hpp"
#include "UClass.hpp"
UAblBranchEvent* UAblBranchEvent::StaticClass() {
    static auto res = find_uobject("Class /Script/AbleCore.AblBranchEvent");
    return (UAblBranchEvent*)res;
}
