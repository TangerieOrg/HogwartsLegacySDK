#include "UInterface.hpp"
#include "UNodeMappingProviderInterface.hpp"
UNodeMappingProviderInterface* UNodeMappingProviderInterface::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.NodeMappingProviderInterface");
    return (UNodeMappingProviderInterface*)res;
}
