#include "FPerPlatformBool.hpp"
#include "FPerPlatformInt.hpp"
#include "FSkeletalMeshLODGroupSettings.hpp"
#include "UDataAsset.hpp"
#include "USkeletalMeshLODSettings.hpp"
USkeletalMeshLODSettings* USkeletalMeshLODSettings::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.SkeletalMeshLODSettings");
    return (USkeletalMeshLODSettings*)res;
}
