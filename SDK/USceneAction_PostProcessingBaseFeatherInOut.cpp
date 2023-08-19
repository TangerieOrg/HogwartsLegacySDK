#include "USceneAction_PostProcessingBase.hpp"
#include "USceneAction_PostProcessingBaseFeatherInOut.hpp"
USceneAction_PostProcessingBaseFeatherInOut* USceneAction_PostProcessingBaseFeatherInOut::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneAction_PostProcessingBaseFeatherInOut");
    return (USceneAction_PostProcessingBaseFeatherInOut*)res;
}
