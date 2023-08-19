#include "ANavigationData.hpp"
#include "AOdcNavData.hpp"
AOdcNavData* AOdcNavData::StaticClass() {
    static auto res = find_uobject("Class /Script/OdysseyRuntime.OdcNavData");
    return (AOdcNavData*)res;
}
