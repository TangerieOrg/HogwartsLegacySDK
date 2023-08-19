#include "UConjurationSnappingComponentBase.hpp"
#include "UConjurationSnappingFootprintComponent.hpp"
UConjurationSnappingFootprintComponent* UConjurationSnappingFootprintComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ConjurationSnappingFootprintComponent");
    return (UConjurationSnappingFootprintComponent*)res;
}
