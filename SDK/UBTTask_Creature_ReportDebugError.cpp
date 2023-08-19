#include "UBTTaskNode.hpp"
#include "UBTTask_Creature_ReportDebugError.hpp"
UBTTask_Creature_ReportDebugError* UBTTask_Creature_ReportDebugError::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.BTTask_Creature_ReportDebugError");
    return (UBTTask_Creature_ReportDebugError*)res;
}
