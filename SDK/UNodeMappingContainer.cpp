#include "UNodeMappingContainer.hpp"
#include "UObject.hpp"
UNodeMappingContainer* UNodeMappingContainer::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.NodeMappingContainer");
    return (UNodeMappingContainer*)res;
}
