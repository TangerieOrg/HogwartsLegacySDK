#include "FLinearizedPath.hpp"
#include "UPathComponent.hpp"
#include "USplineComponent.hpp"
UPathComponent* UPathComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/PathRuntime.PathComponent");
    return (UPathComponent*)res;
}
