#include "FOrientToSlerp.hpp"
#include "FRotator.hpp"
#include "UOrientToAbsoluteComponent.hpp"
#include "UOrientToComponent.hpp"
UOrientToAbsoluteComponent* UOrientToAbsoluteComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.OrientToAbsoluteComponent");
    return (UOrientToAbsoluteComponent*)res;
}
