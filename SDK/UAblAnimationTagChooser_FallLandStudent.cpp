#include "UAblAnimationTagChooser.hpp"
#include "UAblAnimationTagChooser_FallLandStudent.hpp"
UAblAnimationTagChooser_FallLandStudent* UAblAnimationTagChooser_FallLandStudent::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblAnimationTagChooser_FallLandStudent");
    return (UAblAnimationTagChooser_FallLandStudent*)res;
}
