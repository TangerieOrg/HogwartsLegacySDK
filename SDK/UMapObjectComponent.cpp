#include "FDbSingleColumnInfo.hpp"
#include "FVector.hpp"
#include "FVector2D.hpp"
#include "UMapObjectComponent.hpp"
#include "UStaticMeshComponent.hpp"
UMapObjectComponent* UMapObjectComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.MapObjectComponent");
    return (UMapObjectComponent*)res;
}
