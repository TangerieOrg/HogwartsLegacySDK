#include "UNavigationQueryFilter.hpp"
#include "URecastFilter_UseDefaultArea.hpp"
URecastFilter_UseDefaultArea* URecastFilter_UseDefaultArea::StaticClass() {
    static auto res = find_uobject("Class /Script/NavigationSystem.RecastFilter_UseDefaultArea");
    return (URecastFilter_UseDefaultArea*)res;
}
