#include "AActor.hpp"
#include "ASceneRigMayaExportSphere.hpp"
#include "USphereComponent.hpp"
ASceneRigMayaExportSphere* ASceneRigMayaExportSphere::StaticClass() {
    static auto res = find_uobject("Class /Script/SceneRig.SceneRigMayaExportSphere");
    return (ASceneRigMayaExportSphere*)res;
}
