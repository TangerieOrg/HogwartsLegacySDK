#include "FSoftClassPath.hpp"
#include "UOdcMoverPathFollowingComponent.hpp"
#include "UPathFollowingComponent.hpp"
UOdcMoverPathFollowingComponent* UOdcMoverPathFollowingComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/OdysseyRuntime.OdcMoverPathFollowingComponent");
    return (UOdcMoverPathFollowingComponent*)res;
}
