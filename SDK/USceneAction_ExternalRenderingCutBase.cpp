#include "USceneAction_ExternalRenderingCutBase.hpp"
#include "USceneRigActionBase.hpp"
USceneAction_ExternalRenderingCutBase* USceneAction_ExternalRenderingCutBase::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneAction_ExternalRenderingCutBase");
    return (USceneAction_ExternalRenderingCutBase*)res;
}
