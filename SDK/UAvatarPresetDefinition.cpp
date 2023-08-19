#include "EAvatarPresetType.hpp"
#include "EGenderEnum.hpp"
#include "UAvatarPresetDefinition.hpp"
#include "UDataAsset.hpp"
UAvatarPresetDefinition* UAvatarPresetDefinition::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AvatarPresetDefinition");
    return (UAvatarPresetDefinition*)res;
}
