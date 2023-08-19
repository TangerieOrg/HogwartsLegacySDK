#include "FRenderSettingsPPFilm.hpp"
#include "UDataAsset.hpp"
#include "URenderSettingsPPFilmSettings.hpp"
URenderSettingsPPFilmSettings* URenderSettingsPPFilmSettings::StaticClass() {
    static auto res = find_uobject("Class /Script/RenderSettings.RenderSettingsPPFilmSettings");
    return (URenderSettingsPPFilmSettings*)res;
}
