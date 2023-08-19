#include "FNavigationLink.hpp"
#include "FNavigationSegmentLink.hpp"
#include "UNavLinkDefinition.hpp"
#include "UObject.hpp"
UNavLinkDefinition* UNavLinkDefinition::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.NavLinkDefinition");
    return (UNavLinkDefinition*)res;
}
