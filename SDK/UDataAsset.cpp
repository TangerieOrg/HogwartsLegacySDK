#include "UClass.hpp"
#include "UDataAsset.hpp"
#include "UObject.hpp"
UDataAsset* UDataAsset::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.DataAsset");
    return (UDataAsset*)res;
}
