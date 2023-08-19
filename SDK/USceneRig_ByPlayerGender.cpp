#include "USceneRigProvider.hpp"
#include "USceneRig_ByPlayerGender.hpp"
USceneRig_ByPlayerGender* USceneRig_ByPlayerGender::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneRig_ByPlayerGender");
    return (USceneRig_ByPlayerGender*)res;
}
