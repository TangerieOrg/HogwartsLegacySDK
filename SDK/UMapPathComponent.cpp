#include "UMapPathComponent.hpp"
#include "UProceduralMeshComponent.hpp"
UMapPathComponent* UMapPathComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.MapPathComponent");
    return (UMapPathComponent*)res;
}
