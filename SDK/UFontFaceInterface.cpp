#include "UFontFaceInterface.hpp"
#include "UInterface.hpp"
UFontFaceInterface* UFontFaceInterface::StaticClass() {
    static auto res = find_uobject("Class /Script/SlateCore.FontFaceInterface");
    return (UFontFaceInterface*)res;
}
