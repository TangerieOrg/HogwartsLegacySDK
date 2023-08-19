#include "AStaticMeshActor.hpp"
#include "UBindSphereToMaterialComponent.hpp"
#include "USceneComponent.hpp"
UBindSphereToMaterialComponent* UBindSphereToMaterialComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.BindSphereToMaterialComponent");
    return (UBindSphereToMaterialComponent*)res;
}
