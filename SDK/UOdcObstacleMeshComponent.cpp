#include "UOdcObstacleMeshComponent.hpp"
#include "UStaticMesh.hpp"
#include "UStaticMeshComponent.hpp"
UOdcObstacleMeshComponent* UOdcObstacleMeshComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/OdysseyRuntime.OdcObstacleMeshComponent");
    return (UOdcObstacleMeshComponent*)res;
}
