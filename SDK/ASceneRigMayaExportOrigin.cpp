#include "AActor.hpp"
#include "ASceneRigMayaExportOrigin.hpp"
ASceneRigMayaExportOrigin* ASceneRigMayaExportOrigin::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneRigMayaExportOrigin");
    return (ASceneRigMayaExportOrigin*)res;
}
