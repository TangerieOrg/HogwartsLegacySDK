#include "UHoudiniAssetParameter.hpp"
#include "UHoudiniAssetParameterFile.hpp"
UHoudiniAssetParameterFile* UHoudiniAssetParameterFile::StaticClass() {
    static auto res = find_uobject("Class /Script/HoudiniEngineRuntime.HoudiniAssetParameterFile");
    return (UHoudiniAssetParameterFile*)res;
}
