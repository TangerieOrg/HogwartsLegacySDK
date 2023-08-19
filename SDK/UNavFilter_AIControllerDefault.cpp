#include "UNavFilter_AIControllerDefault.hpp"
#include "UNavigationQueryFilter.hpp"
UNavFilter_AIControllerDefault* UNavFilter_AIControllerDefault::StaticClass() {
    static auto res = find_uobject("Class /Script/AIModule.NavFilter_AIControllerDefault");
    return (UNavFilter_AIControllerDefault*)res;
}
