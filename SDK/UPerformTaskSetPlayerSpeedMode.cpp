#include "ETargetSpeedMode\Type.hpp"
#include "UAIPerformTaskBase.hpp"
#include "UPerformTaskSetPlayerSpeedMode.hpp"
UPerformTaskSetPlayerSpeedMode* UPerformTaskSetPlayerSpeedMode::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.PerformTaskSetPlayerSpeedMode");
    return (UPerformTaskSetPlayerSpeedMode*)res;
}
