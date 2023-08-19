#include "EOpacitySourceMode.hpp"
#include "ESubUVBoundingVertexCount.hpp"
#include "UObject.hpp"
#include "USubUVAnimation.hpp"
#include "UTexture2D.hpp"
USubUVAnimation* USubUVAnimation::StaticClass() {
    static auto res = find_uobject("Class /Script/Engine.SubUVAnimation");
    return (USubUVAnimation*)res;
}
