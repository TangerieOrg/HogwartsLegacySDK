#include "UAblAbilityTask.hpp"
#include "UAblFlyToLocationTaskBase.hpp"
UAblFlyToLocationTaskBase* UAblFlyToLocationTaskBase::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblFlyToLocationTaskBase");
    return (UAblFlyToLocationTaskBase*)res;
}
