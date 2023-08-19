#include "FGameplayTag.hpp"
#include "FGameplayTagContainer.hpp"
#include "UAblAnimationTagChooser.hpp"
#include "UAblAnimationTagChooser_DeathlyHallows.hpp"
UAblAnimationTagChooser_DeathlyHallows* UAblAnimationTagChooser_DeathlyHallows::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblAnimationTagChooser_DeathlyHallows");
    return (UAblAnimationTagChooser_DeathlyHallows*)res;
}
