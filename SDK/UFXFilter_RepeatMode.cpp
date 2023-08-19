#include "EMultiFXRepeat.hpp"
#include "UFXFilter.hpp"
#include "UFXFilter_RepeatMode.hpp"
UFXFilter_RepeatMode* UFXFilter_RepeatMode::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXFilter_RepeatMode");
    return (UFXFilter_RepeatMode*)res;
}
