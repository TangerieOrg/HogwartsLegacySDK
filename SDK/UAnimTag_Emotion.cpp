#include "UAnimTag_Emotion.hpp"
#include "UAnimationArchitectTagProvider.hpp"
UAnimTag_Emotion* UAnimTag_Emotion::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AnimTag_Emotion");
    return (UAnimTag_Emotion*)res;
}
