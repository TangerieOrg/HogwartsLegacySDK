#include "FSoftObjectPath.hpp"
#include "UDataAsset.hpp"
#include "UPhoenixPersistentAssets.hpp"
UPhoenixPersistentAssets* UPhoenixPersistentAssets::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.PhoenixPersistentAssets");
    return (UPhoenixPersistentAssets*)res;
}
