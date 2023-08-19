#include "UOrientToComponent.hpp"
#include "UPointAtComponent.hpp"
UPointAtComponent* UPointAtComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.PointAtComponent");
    return (UPointAtComponent*)res;
}
