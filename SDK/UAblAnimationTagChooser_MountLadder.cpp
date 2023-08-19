#include "UAblAnimationTagChooser.hpp"
#include "UAblAnimationTagChooser_MountLadder.hpp"
UAblAnimationTagChooser_MountLadder* UAblAnimationTagChooser_MountLadder::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblAnimationTagChooser_MountLadder");
    return (UAblAnimationTagChooser_MountLadder*)res;
}
