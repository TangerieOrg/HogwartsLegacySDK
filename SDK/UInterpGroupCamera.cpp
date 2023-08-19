#include "UCameraAnim.hpp"
#include "UInterpGroup.hpp"
#include "UInterpGroupCamera.hpp"
UInterpGroupCamera* UInterpGroupCamera::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.InterpGroupCamera");
    return (UInterpGroupCamera*)res;
}
