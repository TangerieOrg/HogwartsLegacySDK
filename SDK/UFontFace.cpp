#include "EFontHinting.hpp"
#include "EFontLayoutMethod.hpp"
#include "EFontLoadingPolicy.hpp"
#include "UFontFace.hpp"
#include "UObject.hpp"
UFontFace* UFontFace::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.FontFace");
    return (UFontFace*)res;
}
