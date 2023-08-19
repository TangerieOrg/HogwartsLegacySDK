#include "AActor.hpp"
#include "ANavigationData.hpp"
#include "ERuntimeGenerationType.hpp"
#include "FNavDataConfig.hpp"
#include "FSupportedAreaData.hpp"
#include "UPrimitiveComponent.hpp"
ANavigationData* ANavigationData::StaticClass() {
    static auto res = find_uobject("Class /Script/NavigationSystem.NavigationData");
    return (ANavigationData*)res;
}
