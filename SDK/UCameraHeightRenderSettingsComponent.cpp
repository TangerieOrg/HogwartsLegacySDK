#include "EWorldBaseHeightAffect.hpp"
#include "UCameraHeightRenderSettingsComponent.hpp"
#include "URenderSettingsComponent.hpp"
UCameraHeightRenderSettingsComponent* UCameraHeightRenderSettingsComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.CameraHeightRenderSettingsComponent");
    return (UCameraHeightRenderSettingsComponent*)res;
}
