#include "UExtendedOdcRepulsorComponent.hpp"
#include "USceneComponent.hpp"
UExtendedOdcRepulsorComponent* UExtendedOdcRepulsorComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/OdysseyRuntime.ExtendedOdcRepulsorComponent");
    return (UExtendedOdcRepulsorComponent*)res;
}
