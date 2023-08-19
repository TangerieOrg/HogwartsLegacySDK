#include "FSanctuaryIdentitySettings.hpp"
#include "UDataAsset.hpp"
#include "USanctuaryIdentitySettingsAsset.hpp"
USanctuaryIdentitySettingsAsset* USanctuaryIdentitySettingsAsset::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SanctuaryIdentitySettingsAsset");
    return (USanctuaryIdentitySettingsAsset*)res;
}
