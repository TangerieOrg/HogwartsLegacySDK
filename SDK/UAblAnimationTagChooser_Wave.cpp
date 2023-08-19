#include "UAblAnimationTagChooser.hpp"
#include "UAblAnimationTagChooser_Wave.hpp"
UAblAnimationTagChooser_Wave* UAblAnimationTagChooser_Wave::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblAnimationTagChooser_Wave");
    return (UAblAnimationTagChooser_Wave*)res;
}
