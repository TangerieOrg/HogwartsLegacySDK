#include "AAbstractNavData.hpp"
#include "ANavigationData.hpp"
AAbstractNavData* AAbstractNavData::StaticClass() {
    static auto res = find_uobject("Class /Script/NavigationSystem.AbstractNavData");
    return (AAbstractNavData*)res;
}
