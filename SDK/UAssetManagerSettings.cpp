#include "FAssetManagerRedirect.hpp"
#include "FDirectoryPath.hpp"
#include "FPrimaryAssetRulesCustomOverride.hpp"
#include "FPrimaryAssetRulesOverride.hpp"
#include "FPrimaryAssetTypeInfo.hpp"
#include "UAssetManagerSettings.hpp"
#include "UDeveloperSettings.hpp"
UAssetManagerSettings* UAssetManagerSettings::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.AssetManagerSettings");
    return (UAssetManagerSettings*)res;
}
