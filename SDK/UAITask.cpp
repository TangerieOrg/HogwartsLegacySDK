#include "AAIController.hpp"
#include "UAITask.hpp"
#include "UGameplayTask.hpp"
UAITask* UAITask::StaticClass() {
    static auto res = find_uobject("Class /Script/AIModule.AITask");
    return (UAITask*)res;
}
