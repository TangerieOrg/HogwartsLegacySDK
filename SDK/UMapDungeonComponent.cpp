#include "UMapDungeonComponent.hpp"
#include "UProceduralMeshComponent.hpp"
UMapDungeonComponent* UMapDungeonComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.MapDungeonComponent");
    return (UMapDungeonComponent*)res;
}
