#include "FBlackboardKeySelector.hpp"
#include "UBTTaskNode.hpp"
#include "UBTTask_GetDirectionBetween.hpp"
UBTTask_GetDirectionBetween* UBTTask_GetDirectionBetween::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.BTTask_GetDirectionBetween");
    return (UBTTask_GetDirectionBetween*)res;
}
