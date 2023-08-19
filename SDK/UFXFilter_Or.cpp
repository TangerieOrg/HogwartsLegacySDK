#include "UFXFilter.hpp"
#include "UFXFilter_Or.hpp"
UFXFilter_Or* UFXFilter_Or::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.FXFilter_Or");
    return (UFXFilter_Or*)res;
}
