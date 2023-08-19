#include "UDebugMapVolumeComponent.hpp"
#include "UProceduralMeshComponent.hpp"
UDebugMapVolumeComponent* UDebugMapVolumeComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.DebugMapVolumeComponent");
    return (UDebugMapVolumeComponent*)res;
}
