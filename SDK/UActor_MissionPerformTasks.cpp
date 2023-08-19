#include "UActorProvider.hpp"
#include "UActor_MissionPerformTasks.hpp"
UActor_MissionPerformTasks* UActor_MissionPerformTasks::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.Actor_MissionPerformTasks");
    return (UActor_MissionPerformTasks*)res;
}
