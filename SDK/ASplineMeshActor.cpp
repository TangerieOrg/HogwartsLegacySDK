#include "AActor.hpp"
#include "ASplineMeshActor.hpp"
#include "USplineMeshComponent.hpp"
ASplineMeshActor* ASplineMeshActor::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.SplineMeshActor");
    return (ASplineMeshActor*)res;
}
