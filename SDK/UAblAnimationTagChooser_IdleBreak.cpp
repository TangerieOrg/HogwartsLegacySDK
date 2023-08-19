#include "FGameplayTag.hpp"
#include "FGameplayTagContainer.hpp"
#include "UAblAnimationTagChooser.hpp"
#include "UAblAnimationTagChooser_IdleBreak.hpp"
UAblAnimationTagChooser_IdleBreak* UAblAnimationTagChooser_IdleBreak::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblAnimationTagChooser_IdleBreak");
    return (UAblAnimationTagChooser_IdleBreak*)res;
}
