#include "UFXFilter.hpp"
#include "UFXFilter_IsOnGround.hpp"
UFXFilter_IsOnGround* UFXFilter_IsOnGround::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXFilter_IsOnGround");
    return (UFXFilter_IsOnGround*)res;
}
