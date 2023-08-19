#include "USceneRigProvider.hpp"
#include "USceneRig_ByStat.hpp"
USceneRig_ByStat* USceneRig_ByStat::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SceneRig_ByStat");
    return (USceneRig_ByStat*)res;
}
