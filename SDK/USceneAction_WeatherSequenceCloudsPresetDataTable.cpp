#include "FDataTableRowHandle.hpp"
#include "USceneAction_WeatherSequenceCloudsPreset.hpp"
#include "USceneAction_WeatherSequenceCloudsPresetDataTable.hpp"
USceneAction_WeatherSequenceCloudsPresetDataTable* USceneAction_WeatherSequenceCloudsPresetDataTable::StaticClass() {
    static auto res = find_uobject("Class /Script/Weather.SceneAction_WeatherSequenceCloudsPresetDataTable");
    return (USceneAction_WeatherSequenceCloudsPresetDataTable*)res;
}
