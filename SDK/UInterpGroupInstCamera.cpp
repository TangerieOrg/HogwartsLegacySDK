#include "UInterpGroupInst.hpp"
#include "UInterpGroupInstCamera.hpp"
UInterpGroupInstCamera* UInterpGroupInstCamera::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.InterpGroupInstCamera");
    return (UInterpGroupInstCamera*)res;
}
