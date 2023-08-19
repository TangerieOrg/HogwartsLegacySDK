#include "FLerpVolumesTagName.hpp"
#include "ULerpVolumeInterpolant.hpp"
#include "ULerpVolumeTagInterpolantBase.hpp"
ULerpVolumeTagInterpolantBase* ULerpVolumeTagInterpolantBase::StaticClass() {
    static auto res = find_uobject("Class /Script/LerpVolumes.LerpVolumeTagInterpolantBase");
    return (ULerpVolumeTagInterpolantBase*)res;
}
