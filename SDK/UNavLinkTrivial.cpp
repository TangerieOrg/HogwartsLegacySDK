#include "UNavLinkDefinition.hpp"
#include "UNavLinkTrivial.hpp"
UNavLinkTrivial* UNavLinkTrivial::StaticClass() {
    static auto res = find_uobject("Class /Script/NavigationSystem.NavLinkTrivial");
    return (UNavLinkTrivial*)res;
}
