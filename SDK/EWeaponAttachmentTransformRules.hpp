#pragma once
#include <cstdint>
#pragma pack(push, 1)
enum class EWeaponAttachmentTransformRules : uint8_t {
    SnapToTargetNotIncludingScale = 0,
    SnapToTargetIncludingScale = 1,
    KeepRelativeTransform = 2,
    KeepWorldTransform = 3,
    EWeaponAttachmentTransformRules_MAX = 4,
};
#pragma pack(pop)
