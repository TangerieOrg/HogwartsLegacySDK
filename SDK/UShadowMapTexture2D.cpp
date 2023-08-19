#include "EShadowMapFlags.hpp"
#include "UShadowMapTexture2D.hpp"
#include "UTexture2D.hpp"
UShadowMapTexture2D* UShadowMapTexture2D::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.ShadowMapTexture2D");
    return (UShadowMapTexture2D*)res;
}
