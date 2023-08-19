#include "USceneActionState_ExternalRenderingCut.hpp"
#include "USceneRigActionState.hpp"
USceneActionState_ExternalRenderingCut* USceneActionState_ExternalRenderingCut::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneActionState_ExternalRenderingCut");
    return (USceneActionState_ExternalRenderingCut*)res;
}
