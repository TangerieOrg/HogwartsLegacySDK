#include "FWidgetNavigationData.hpp"
#include "UObject.hpp"
#include "UWidgetNavigation.hpp"
UWidgetNavigation* UWidgetNavigation::StaticClass() {
    static auto res = find_uobject("Class /Script/UMG.WidgetNavigation");
    return (UWidgetNavigation*)res;
}
