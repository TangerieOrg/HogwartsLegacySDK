#include "EMultiFXState.hpp"
#include "UFXFilter.hpp"
#include "UFXFilter_State.hpp"
UFXFilter_State* UFXFilter_State::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXFilter_State");
    return (UFXFilter_State*)res;
}
