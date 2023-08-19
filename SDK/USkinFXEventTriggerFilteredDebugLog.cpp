#include "USkinFXEventTriggerFilteredDebugLog.hpp"
#include "USkinFXEventTriggerFilteredWithDistance.hpp"
USkinFXEventTriggerFilteredDebugLog* USkinFXEventTriggerFilteredDebugLog::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SkinFXEventTriggerFilteredDebugLog");
    return (USkinFXEventTriggerFilteredDebugLog*)res;
}
