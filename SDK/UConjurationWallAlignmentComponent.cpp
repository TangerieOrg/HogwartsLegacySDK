#include "UBoxComponent.hpp"
#include "UConjurationWallAlignmentComponent.hpp"
UConjurationWallAlignmentComponent* UConjurationWallAlignmentComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.ConjurationWallAlignmentComponent");
    return (UConjurationWallAlignmentComponent*)res;
}
