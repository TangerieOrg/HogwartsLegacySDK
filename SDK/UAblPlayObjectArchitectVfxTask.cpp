#include "FRotator.hpp"
#include "FVector.hpp"
#include "UAblPlayObjectArchitectVfxTask.hpp"
#include "UAblPlayObjectArchitectVfxTaskBase.hpp"
UAblPlayObjectArchitectVfxTask* UAblPlayObjectArchitectVfxTask::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblPlayObjectArchitectVfxTask");
    return (UAblPlayObjectArchitectVfxTask*)res;
}
