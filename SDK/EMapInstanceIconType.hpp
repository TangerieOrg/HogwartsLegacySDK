#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum EMapInstanceIconType {
    MAP_INSTANCE_ICON_TYPE_NONE = 0,
    MAP_INSTANCE_ICON_TYPE_ICON = 1,
    MAP_INSTANCE_ICON_TYPE_PERCEPTION = 2,
    MAP_INSTANCE_ICON_TYPE_AREA_BEACON_CIRCLE = 3,
    MAP_INSTANCE_ICON_TYPE_AREA_BEACON_ICON = 4,
    MAP_INSTANCE_ICON_TYPE_AREA_BEACON_OUTLINE = 5,
    MAP_INSTANCE_ICON_TYPE_PATH = 6,
    MAP_INSTANCE_ICON_TYPE_AUTHORITY = 7,
    MAP_INSTANCE_ICON_TYPE_ACCESSIBILITY_AUDIO_CUE = 9,
    MAP_INSTANCE_ICON_TYPE_ACCESSIBILITY_EFFECT = 9,
    MAP_INSTANCE_ICON_TYPE_ENEMY = 10,
    MAP_INSTANCE_ICON_TYPE_MAX = 11,
};
#pragma pack(pop)
