#include "FRotator.hpp"
#include "FVector.hpp"
#include "UAblPlayObjectArchitectVfxTaskBase.hpp"
#include "UAblPlayObjectArchitectVfxWithRandomTraitsTask.hpp"
UAblPlayObjectArchitectVfxWithRandomTraitsTask* UAblPlayObjectArchitectVfxWithRandomTraitsTask::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblPlayObjectArchitectVfxWithRandomTraitsTask");
    return (UAblPlayObjectArchitectVfxWithRandomTraitsTask*)res;
}
