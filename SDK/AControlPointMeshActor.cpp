#include "AActor.hpp"
#include "AControlPointMeshActor.hpp"
#include "UControlPointMeshComponent.hpp"
AControlPointMeshActor* AControlPointMeshActor::StaticClass() {
    static auto res = find_uobject("Class /Script/Landscape.ControlPointMeshActor");
    return (AControlPointMeshActor*)res;
}
