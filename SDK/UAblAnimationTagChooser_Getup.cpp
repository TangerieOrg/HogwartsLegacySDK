#include "FVector2D.hpp"
#include "UAblAnimationTagChooser.hpp"
#include "UAblAnimationTagChooser_Getup.hpp"
UAblAnimationTagChooser_Getup* UAblAnimationTagChooser_Getup::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblAnimationTagChooser_Getup");
    return (UAblAnimationTagChooser_Getup*)res;
}
