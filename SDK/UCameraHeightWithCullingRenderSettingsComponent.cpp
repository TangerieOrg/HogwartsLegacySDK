#include "FCameraHeightRenderSettingsCullVolume.hpp"
#include "UCameraHeightRenderSettingsComponent.hpp"
#include "UCameraHeightWithCullingRenderSettingsComponent.hpp"
UCameraHeightWithCullingRenderSettingsComponent* UCameraHeightWithCullingRenderSettingsComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.CameraHeightWithCullingRenderSettingsComponent");
    return (UCameraHeightWithCullingRenderSettingsComponent*)res;
}
