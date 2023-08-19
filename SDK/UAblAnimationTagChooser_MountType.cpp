#include "UAblAnimationTagChooser.hpp"
#include "UAblAnimationTagChooser_MountType.hpp"
UAblAnimationTagChooser_MountType* UAblAnimationTagChooser_MountType::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblAnimationTagChooser_MountType");
    return (UAblAnimationTagChooser_MountType*)res;
}
