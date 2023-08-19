#include "UAblAnimationTagChooser.hpp"
#include "UAblAnimationTagChooser_MountGait.hpp"
UAblAnimationTagChooser_MountGait* UAblAnimationTagChooser_MountGait::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblAnimationTagChooser_MountGait");
    return (UAblAnimationTagChooser_MountGait*)res;
}
