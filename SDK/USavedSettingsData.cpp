#include "USaveGame.hpp"
#include "USavedSettingsData.hpp"
USavedSettingsData* USavedSettingsData::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SavedSettingsData");
    return (USavedSettingsData*)res;
}
