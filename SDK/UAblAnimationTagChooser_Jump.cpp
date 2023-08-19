#include "FVector.hpp"
#include "FVector2D.hpp"
#include "UAblAnimationTagChooser.hpp"
#include "UAblAnimationTagChooser_Jump.hpp"
UAblAnimationTagChooser_Jump* UAblAnimationTagChooser_Jump::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblAnimationTagChooser_Jump");
    return (UAblAnimationTagChooser_Jump*)res;
}
