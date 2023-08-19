#include "UInterface.hpp"
#include "UNavigationPathGenerator.hpp"
UNavigationPathGenerator* UNavigationPathGenerator::StaticClass() {
    static auto res = find_uobject("Class /Script/NavigationSystem.NavigationPathGenerator");
    return (UNavigationPathGenerator*)res;
}
