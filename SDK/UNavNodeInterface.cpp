#include "UInterface.hpp"
#include "UNavNodeInterface.hpp"
UNavNodeInterface* UNavNodeInterface::StaticClass() {
    static auto res = find_uobject("Class /Script/NavigationSystem.NavNodeInterface");
    return (UNavNodeInterface*)res;
}
