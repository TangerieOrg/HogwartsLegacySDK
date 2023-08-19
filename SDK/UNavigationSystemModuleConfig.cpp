#include "UNavigationSystemConfig.hpp"
#include "UNavigationSystemModuleConfig.hpp"
UNavigationSystemModuleConfig* UNavigationSystemModuleConfig::StaticClass() {
    static auto res = find_uobject("Class /Script/NavigationSystem.NavigationSystemModuleConfig");
    return (UNavigationSystemModuleConfig*)res;
}
