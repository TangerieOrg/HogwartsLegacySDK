#include "UAblSpawnActorTask.hpp"
#include "UAblSpawnInteractActorTask.hpp"
UAblSpawnInteractActorTask* UAblSpawnInteractActorTask::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblSpawnInteractActorTask");
    return (UAblSpawnInteractActorTask*)res;
}
