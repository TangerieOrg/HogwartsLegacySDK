#include "UHoudiniAssetParameter.hpp"
#include "UHoudiniAssetParameterFolderList.hpp"
UHoudiniAssetParameterFolderList* UHoudiniAssetParameterFolderList::StaticClass() {
    static auto res = find_uobject("Class /Script/HoudiniEngineRuntime.HoudiniAssetParameterFolderList");
    return (UHoudiniAssetParameterFolderList*)res;
}
