#include "ECustomAttributeBlendType.hpp"
#include "FCustomAttributeSetting.hpp"
#include "UAnimationSettings.hpp"
#include "UDeveloperSettings.hpp"
UAnimationSettings* UAnimationSettings::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.AnimationSettings");
    return (UAnimationSettings*)res;
}
