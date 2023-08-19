#include "FChunkInfoData.hpp"
#include "FCustomFieldData.hpp"
#include "FFileManifestData.hpp"
#include "UBuildPatchManifest.hpp"
#include "UObject.hpp"
UBuildPatchManifest* UBuildPatchManifest::StaticClass() {
    static auto res = find_uobject("Class /Script/BuildPatchServices.BuildPatchManifest");
    return (UBuildPatchManifest*)res;
}
