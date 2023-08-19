#include "UConjurationSnappingComponentBase.hpp"
#include "UConjurationSnappingWallComponent.hpp"
UConjurationSnappingWallComponent* UConjurationSnappingWallComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ConjurationSnappingWallComponent");
    return (UConjurationSnappingWallComponent*)res;
}
