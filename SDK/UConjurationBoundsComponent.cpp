#include "UBoxComponent.hpp"
#include "UConjurationBoundsComponent.hpp"
UConjurationBoundsComponent* UConjurationBoundsComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ConjurationBoundsComponent");
    return (UConjurationBoundsComponent*)res;
}
