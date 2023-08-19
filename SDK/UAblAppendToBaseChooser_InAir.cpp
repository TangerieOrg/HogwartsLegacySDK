#include "UAblAnimationTagChooser_AppendToBaseChooser.hpp"
#include "UAblAppendToBaseChooser_InAir.hpp"
UAblAppendToBaseChooser_InAir* UAblAppendToBaseChooser_InAir::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.AblAppendToBaseChooser_InAir");
    return (UAblAppendToBaseChooser_InAir*)res;
}
