#include "UAblAnimationTagChooser.hpp"
#include "UAblAnimationTagChooser_Jump_Student.hpp"
UAblAnimationTagChooser_Jump_Student* UAblAnimationTagChooser_Jump_Student::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblAnimationTagChooser_Jump_Student");
    return (UAblAnimationTagChooser_Jump_Student*)res;
}
