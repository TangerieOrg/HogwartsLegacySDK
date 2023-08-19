#include "USchedulerTimeProvider.hpp"
#include "USchedulerTime_Direct.hpp"
USchedulerTime_Direct* USchedulerTime_Direct::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SchedulerTime_Direct");
    return (USchedulerTime_Direct*)res;
}
