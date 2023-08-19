#include "AActor.hpp"
#include "ANavSystemConfigOverride.hpp"
#include "ENavSystemOverridePolicy.hpp"
#include "UNavigationSystemConfig.hpp"
ANavSystemConfigOverride* ANavSystemConfigOverride::StaticClass() {
    static auto res = find_uobject("Class /Script/NavigationSystem.NavSystemConfigOverride");
    return (ANavSystemConfigOverride*)res;
}
