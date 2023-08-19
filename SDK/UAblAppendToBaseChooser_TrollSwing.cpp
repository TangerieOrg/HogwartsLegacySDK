#include "FGameplayTag.hpp"
#include "UAblAnimationTagChooser_AppendToBaseChooser.hpp"
#include "UAblAppendToBaseChooser_TrollSwing.hpp"
UAblAppendToBaseChooser_TrollSwing* UAblAppendToBaseChooser_TrollSwing::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblAppendToBaseChooser_TrollSwing");
    return (UAblAppendToBaseChooser_TrollSwing*)res;
}
