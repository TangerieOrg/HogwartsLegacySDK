#include "UAssetUserData.hpp"
#include "UDatasmithAssetUserData.hpp"
UDatasmithAssetUserData* UDatasmithAssetUserData::StaticClass() {
    static auto res = find_uobject("Class /Script/DatasmithContent.DatasmithAssetUserData");
    return (UDatasmithAssetUserData*)res;
}
