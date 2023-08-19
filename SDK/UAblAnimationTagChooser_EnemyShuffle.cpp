#include "UAblAnimationTagChooser.hpp"
#include "UAblAnimationTagChooser_EnemyShuffle.hpp"
UAblAnimationTagChooser_EnemyShuffle* UAblAnimationTagChooser_EnemyShuffle::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblAnimationTagChooser_EnemyShuffle");
    return (UAblAnimationTagChooser_EnemyShuffle*)res;
}
