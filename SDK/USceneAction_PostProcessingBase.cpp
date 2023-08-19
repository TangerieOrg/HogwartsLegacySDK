#include "USceneAction_PostProcessingBase.hpp"
#include "USceneRigActionBase.hpp"
USceneAction_PostProcessingBase* USceneAction_PostProcessingBase::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneAction_PostProcessingBase");
    return (USceneAction_PostProcessingBase*)res;
}
