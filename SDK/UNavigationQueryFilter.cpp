#include "FNavigationFilterArea.hpp"
#include "FNavigationFilterFlags.hpp"
#include "UNavigationQueryFilter.hpp"
#include "UObject.hpp"
UNavigationQueryFilter* UNavigationQueryFilter::StaticClass() {
    static auto res = find_uobject("Class /Script/NavigationSystem.NavigationQueryFilter");
    return (UNavigationQueryFilter*)res;
}
