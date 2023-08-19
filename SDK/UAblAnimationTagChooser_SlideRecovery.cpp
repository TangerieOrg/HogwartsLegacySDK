#include "UAblAnimationTagChooser.hpp"
#include "UAblAnimationTagChooser_SlideRecovery.hpp"
UAblAnimationTagChooser_SlideRecovery* UAblAnimationTagChooser_SlideRecovery::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblAnimationTagChooser_SlideRecovery");
    return (UAblAnimationTagChooser_SlideRecovery*)res;
}
