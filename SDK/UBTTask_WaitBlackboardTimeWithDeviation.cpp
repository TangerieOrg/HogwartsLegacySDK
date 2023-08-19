#include "FBlackboardKeySelector.hpp"
#include "UBTTask_Wait.hpp"
#include "UBTTask_WaitBlackboardTimeWithDeviation.hpp"
UBTTask_WaitBlackboardTimeWithDeviation* UBTTask_WaitBlackboardTimeWithDeviation::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.BTTask_WaitBlackboardTimeWithDeviation");
    return (UBTTask_WaitBlackboardTimeWithDeviation*)res;
}
