#include "FVector.hpp"
#include "UAblAnimationTagChooser.hpp"
#include "UAblAnimationTagChooser_HandMatch.hpp"
UAblAnimationTagChooser_HandMatch* UAblAnimationTagChooser_HandMatch::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblAnimationTagChooser_HandMatch");
    return (UAblAnimationTagChooser_HandMatch*)res;
}
