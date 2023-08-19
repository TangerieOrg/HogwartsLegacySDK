#include "FBlendDomain.hpp"
#include "FPostProcessSettings.hpp"
#include "USceneAction_PostProcessing.hpp"
#include "USceneAction_PostProcessingBaseFeatherInOut.hpp"
USceneAction_PostProcessing* USceneAction_PostProcessing::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneAction_PostProcessing");
    return (USceneAction_PostProcessing*)res;
}
