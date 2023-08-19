#include "UCameraStackBehavior.hpp"
#include "UCameraStackBehaviorDisableCreatureTickThrottling.hpp"
UCameraStackBehaviorDisableCreatureTickThrottling* UCameraStackBehaviorDisableCreatureTickThrottling::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.CameraStackBehaviorDisableCreatureTickThrottling");
    return (UCameraStackBehaviorDisableCreatureTickThrottling*)res;
}
