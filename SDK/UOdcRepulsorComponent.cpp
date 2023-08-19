#include "UOdcRepulsorComponent.hpp"
#include "USceneComponent.hpp"
UOdcRepulsorComponent* UOdcRepulsorComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/OdysseyRuntime.OdcRepulsorComponent");
    return (UOdcRepulsorComponent*)res;
}
