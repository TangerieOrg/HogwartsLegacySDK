#include "UInterface.hpp"
#include "UNavigationDataInterface.hpp"
UNavigationDataInterface* UNavigationDataInterface::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.NavigationDataInterface");
    return (UNavigationDataInterface*)res;
}
