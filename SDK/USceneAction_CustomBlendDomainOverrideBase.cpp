#include "USceneAction_CustomBlendDomainOverrideBase.hpp"
#include "USceneRigActionBase.hpp"
USceneAction_CustomBlendDomainOverrideBase* USceneAction_CustomBlendDomainOverrideBase::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneAction_CustomBlendDomainOverrideBase");
    return (USceneAction_CustomBlendDomainOverrideBase*)res;
}
