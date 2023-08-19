#include "UInterpGroup.hpp"
#include "UInterpGroupDirector.hpp"
UInterpGroupDirector* UInterpGroupDirector::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.InterpGroupDirector");
    return (UInterpGroupDirector*)res;
}
