#include "AActor.hpp"
#include "AWindSourceDebugActor.hpp"
#include "FVector.hpp"
#include "FVector2D.hpp"
#include "UInstancedStaticMeshComponent.hpp"
#include "UMaterialInterface.hpp"
#include "UStaticMesh.hpp"
#include "UWindSourceDebugUpdateComponent.hpp"
AWindSourceDebugActor* AWindSourceDebugActor::StaticClass() {
    static auto res = find_uobject("Class /Script/Wind.WindSourceDebugActor");
    return (AWindSourceDebugActor*)res;
}
