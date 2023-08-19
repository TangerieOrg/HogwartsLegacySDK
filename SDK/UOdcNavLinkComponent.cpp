#include "ELinkType.hpp"
#include "FOdcFlags.hpp"
#include "UOdcNavLinkComponent.hpp"
#include "USceneComponent.hpp"
UOdcNavLinkComponent* UOdcNavLinkComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/OdysseyRuntime.OdcNavLinkComponent");
    return (UOdcNavLinkComponent*)res;
}
