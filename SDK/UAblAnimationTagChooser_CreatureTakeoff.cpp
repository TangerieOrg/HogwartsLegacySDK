#include "UAblAnimationTagChooser.hpp"
#include "UAblAnimationTagChooser_CreatureTakeoff.hpp"
UAblAnimationTagChooser_CreatureTakeoff* UAblAnimationTagChooser_CreatureTakeoff::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblAnimationTagChooser_CreatureTakeoff");
    return (UAblAnimationTagChooser_CreatureTakeoff*)res;
}
