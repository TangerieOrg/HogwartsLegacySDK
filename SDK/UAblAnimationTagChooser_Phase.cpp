#include "UAblAnimationTagChooser.hpp"
#include "UAblAnimationTagChooser_Phase.hpp"
UAblAnimationTagChooser_Phase* UAblAnimationTagChooser_Phase::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblAnimationTagChooser_Phase");
    return (UAblAnimationTagChooser_Phase*)res;
}
