#include "USceneAction_ExternalRenderingCut.hpp"
#include "USceneAction_ExternalRenderingCutBase.hpp"
USceneAction_ExternalRenderingCut* USceneAction_ExternalRenderingCut::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneAction_ExternalRenderingCut");
    return (USceneAction_ExternalRenderingCut*)res;
}
