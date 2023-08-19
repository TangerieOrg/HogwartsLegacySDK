#include "FRenderSettingsCustomBlendDomainName.hpp"
#include "USceneAction_CustomBlendDomainOverride.hpp"
#include "USceneAction_CustomBlendDomainOverrideBase.hpp"
USceneAction_CustomBlendDomainOverride* USceneAction_CustomBlendDomainOverride::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneAction_CustomBlendDomainOverride");
    return (USceneAction_CustomBlendDomainOverride*)res;
}
