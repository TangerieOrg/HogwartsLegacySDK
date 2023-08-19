#include "UInterface.hpp"
#include "UNavEdgeProviderInterface.hpp"
UNavEdgeProviderInterface* UNavEdgeProviderInterface::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.NavEdgeProviderInterface");
    return (UNavEdgeProviderInterface*)res;
}
