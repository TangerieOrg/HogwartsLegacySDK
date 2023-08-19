#include "UInterface.hpp"
#include "URVOAvoidanceInterface.hpp"
URVOAvoidanceInterface* URVOAvoidanceInterface::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.RVOAvoidanceInterface");
    return (URVOAvoidanceInterface*)res;
}
