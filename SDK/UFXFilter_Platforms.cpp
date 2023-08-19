#include "UFXFilter.hpp"
#include "UFXFilter_Platforms.hpp"
UFXFilter_Platforms* UFXFilter_Platforms::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXFilter_Platforms");
    return (UFXFilter_Platforms*)res;
}
