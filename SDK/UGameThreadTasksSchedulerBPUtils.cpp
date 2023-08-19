#include "UBlueprintFunctionLibrary.hpp"
#include "UGameThreadTasksSchedulerBPUtils.hpp"
UGameThreadTasksSchedulerBPUtils* UGameThreadTasksSchedulerBPUtils::StaticClass() {
    static auto res = find_uobject("Class /Script/GameThreadTasksScheduler.GameThreadTasksSchedulerBPUtils");
    return (UGameThreadTasksSchedulerBPUtils*)res;
}
void UGameThreadTasksSchedulerBPUtils::PushGameThreadTask() {}
