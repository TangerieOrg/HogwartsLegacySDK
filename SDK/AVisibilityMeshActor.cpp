#include "AActor.hpp"
#include "AVisibilityMeshActor.hpp"
#include "UStaticMeshComponent.hpp"
AVisibilityMeshActor* AVisibilityMeshActor::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.VisibilityMeshActor");
    return (AVisibilityMeshActor*)res;
}
