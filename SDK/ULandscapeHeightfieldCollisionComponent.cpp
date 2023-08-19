#include "FBox.hpp"
#include "FGuid.hpp"
#include "UFunction.hpp"
#include "ULandscapeComponent.hpp"
#include "ULandscapeHeightfieldCollisionComponent.hpp"
#include "ULandscapeLayerInfoObject.hpp"
#include "UPhysicalMaterial.hpp"
#include "UPrimitiveComponent.hpp"
ULandscapeHeightfieldCollisionComponent* ULandscapeHeightfieldCollisionComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Landscape.LandscapeHeightfieldCollisionComponent");
    return (ULandscapeHeightfieldCollisionComponent*)res;
}
ULandscapeComponent* ULandscapeHeightfieldCollisionComponent::GetRenderComponent() {
    static auto func = (UFunction*)(find_uobject("Function /Script/Landscape.LandscapeHeightfieldCollisionComponent.GetRenderComponent"));
    struct Params_GetRenderComponent {
        ULandscapeComponent* ReturnValue; // 0x0
    }; // Size: 0x8
    Params_GetRenderComponent params{};
    ProcessEvent(func, &params);
    return (ULandscapeComponent*)params.ReturnValue;
}
