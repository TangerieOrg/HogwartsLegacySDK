#include "EFacialEmotion.hpp"
#include "EManagedFacialEmotionPriority.hpp"
#include "FGameplayTagContainer.hpp"
#include "UAnimNotifyState.hpp"
#include "UFacialEmotionAnimNotifyState.hpp"
UFacialEmotionAnimNotifyState* UFacialEmotionAnimNotifyState::StaticClass() {
    static auto res = find_uobject("Class /Script/Ambulatory.FacialEmotionAnimNotifyState");
    return (UFacialEmotionAnimNotifyState*)res;
}
