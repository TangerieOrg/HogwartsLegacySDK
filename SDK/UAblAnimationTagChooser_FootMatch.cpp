#include "FVector.hpp"
#include "UAblAnimationTagChooser.hpp"
#include "UAblAnimationTagChooser_FootMatch.hpp"
UAblAnimationTagChooser_FootMatch* UAblAnimationTagChooser_FootMatch::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblAnimationTagChooser_FootMatch");
    return (UAblAnimationTagChooser_FootMatch*)res;
}
