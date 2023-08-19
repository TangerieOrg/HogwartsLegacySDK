#include "UInterface.hpp"
#include "UNavLinkCustomInterface.hpp"
UNavLinkCustomInterface* UNavLinkCustomInterface::StaticClass() {
    static auto res = find_uobject("Class /Script/NavigationSystem.NavLinkCustomInterface");
    return (UNavLinkCustomInterface*)res;
}
