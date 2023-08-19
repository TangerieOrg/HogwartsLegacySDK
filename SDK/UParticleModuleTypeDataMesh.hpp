#pragma once
#include <cstdint>
#include "EMeshCameraFacingOptions.hpp"
#include "EMeshCameraFacingUpAxis.hpp"
#include "EMeshScreenAlignment.hpp"
#include "EParticleAxisLock.hpp"
#include "FRawDistributionVector.hpp"
#include "UParticleModuleTypeDataBase.hpp"
class UStaticMesh;
#pragma pack(push, 1)
class UParticleModuleTypeDataMesh : public UParticleModuleTypeDataBase {
public:
    UStaticMesh* Mesh; // 0x30
    char pad_38[0x8];
    float LODSizeScale; // 0x40
    uint8_t bUseStaticMeshLODs : 1; // 0x44
    uint8_t CastShadows : 1; // 0x44
    uint8_t DoCollisions : 1; // 0x44
    uint8_t pad_bitfield_44_3 : 5;
    EMeshScreenAlignment MeshAlignment; // 0x45
    uint8_t bOverrideMaterial : 1; // 0x46
    uint8_t bOverrideDefaultMotionBlurSettings : 1; // 0x46
    uint8_t bEnableMotionBlur : 1; // 0x46
    uint8_t pad_bitfield_46_3 : 5;
    char pad_47[0x1];
    FRawDistributionVector RollPitchYawRange; // 0x48
    EParticleAxisLock AxisLockOption; // 0x90
    uint8_t bCameraFacing : 1; // 0x91
    uint8_t pad_bitfield_91_1 : 7;
    EMeshCameraFacingUpAxis CameraFacingUpAxisOption; // 0x92
    EMeshCameraFacingOptions CameraFacingOption; // 0x93
    uint8_t bApplyParticleRotationAsSpin : 1; // 0x94
    uint8_t bFaceCameraDirectionRatherThanPosition : 1; // 0x94
    uint8_t bCollisionsConsiderPartilceSize : 1; // 0x94
    uint8_t pad_bitfield_94_3 : 5;
    char pad_95[0x3];
    static UParticleModuleTypeDataMesh* StaticClass();
}; // Size: 0x98
#pragma pack(pop)
