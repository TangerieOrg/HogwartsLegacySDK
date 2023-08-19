#include "UDataAsset.hpp"
#include "UFXAutoTriggerHighContrastGameplayConditions.hpp"
#include "UPhoenixHighContrastGameplaySettings.hpp"
UPhoenixHighContrastGameplaySettings* UPhoenixHighContrastGameplaySettings::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.PhoenixHighContrastGameplaySettings");
    return (UPhoenixHighContrastGameplaySettings*)res;
}
