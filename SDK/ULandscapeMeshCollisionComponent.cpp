#include "FGuid.hpp"
#include "ULandscapeHeightfieldCollisionComponent.hpp"
#include "ULandscapeMeshCollisionComponent.hpp"
ULandscapeMeshCollisionComponent* ULandscapeMeshCollisionComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Landscape.LandscapeMeshCollisionComponent");
    return (ULandscapeMeshCollisionComponent*)res;
}
