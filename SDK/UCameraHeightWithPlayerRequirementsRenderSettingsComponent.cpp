#include "FName_GameLogicVarBool.hpp"
#include "UCameraHeightWithCullingRenderSettingsComponent.hpp"
#include "UCameraHeightWithPlayerRequirementsRenderSettingsComponent.hpp"
UCameraHeightWithPlayerRequirementsRenderSettingsComponent* UCameraHeightWithPlayerRequirementsRenderSettingsComponent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.CameraHeightWithPlayerRequirementsRenderSettingsComponent");
    return (UCameraHeightWithPlayerRequirementsRenderSettingsComponent*)res;
}
