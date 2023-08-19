#include "UInterface.hpp"
#include "UNavLinkHostInterface.hpp"
UNavLinkHostInterface* UNavLinkHostInterface::StaticClass() {
    static auto res = find_uobject("Class /Script/NavigationSystem.NavLinkHostInterface");
    return (UNavLinkHostInterface*)res;
}
