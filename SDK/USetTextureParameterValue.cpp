#include "USetParameterValue.hpp"
#include "USetTextureParameterValue.hpp"
#include "UTexture.hpp"
USetTextureParameterValue* USetTextureParameterValue::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.SetTextureParameterValue");
    return (USetTextureParameterValue*)res;
}
