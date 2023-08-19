#include "UInterpGroupInst.hpp"
#include "UInterpGroupInstDirector.hpp"
UInterpGroupInstDirector* UInterpGroupInstDirector::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.InterpGroupInstDirector");
    return (UInterpGroupInstDirector*)res;
}
