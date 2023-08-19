#pragma once
#include <cstdint>
namespace EBoneTranslationRetargetingMode {
#pragma pack(push, 1)
enum Type : uint8_t {
    Animation = 0,
    Skeleton = 1,
    AnimationScaled = 2,
    AnimationRelative = 3,
    OrientAndScale = 4,
    EBoneTranslationRetargetingMode_MAX = 5,
};
#pragma pack(pop)
}
