#include "UInterface.hpp"
#include "UInterface_AssetUserData.hpp"
UInterface_AssetUserData* UInterface_AssetUserData::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.Interface_AssetUserData");
    return (UInterface_AssetUserData*)res;
}
