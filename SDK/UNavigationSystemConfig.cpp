#include "FNavAgentSelector.hpp"
#include "FSoftClassPath.hpp"
#include "UNavigationSystemConfig.hpp"
#include "UObject.hpp"
UNavigationSystemConfig* UNavigationSystemConfig::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.NavigationSystemConfig");
    return (UNavigationSystemConfig*)res;
}
