#include "FVector.hpp"
#include "FVector2D.hpp"
#include "UAblAnimationTagChooser.hpp"
#include "UAblAnimationTagChooser_Jump_New.hpp"
UAblAnimationTagChooser_Jump_New* UAblAnimationTagChooser_Jump_New::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblAnimationTagChooser_Jump_New");
    return (UAblAnimationTagChooser_Jump_New*)res;
}
