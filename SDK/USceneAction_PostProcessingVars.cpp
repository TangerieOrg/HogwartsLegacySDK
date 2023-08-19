#include "FBlendDomain.hpp"
#include "UPostProcessingVar.hpp"
#include "USceneAction_PostProcessingBaseFeatherInOut.hpp"
#include "USceneAction_PostProcessingVars.hpp"
USceneAction_PostProcessingVars* USceneAction_PostProcessingVars::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneAction_PostProcessingVars");
    return (USceneAction_PostProcessingVars*)res;
}
