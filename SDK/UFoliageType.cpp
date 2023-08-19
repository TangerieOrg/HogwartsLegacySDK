#include "EComponentMobility\Type.hpp"
#include "EFoliageScaling.hpp"
#include "EHasCustomNavigableGeometry\Type.hpp"
#include "ELightmapType.hpp"
#include "ERendererStencilMask.hpp"
#include "ERuntimeVirtualTextureMainPassType.hpp"
#include "FBodyInstance.hpp"
#include "FBoxSphereBounds.hpp"
#include "FFloatInterval.hpp"
#include "FFoliageVertexColorChannelMask.hpp"
#include "FGuid.hpp"
#include "FInt32Interval.hpp"
#include "FLightingChannels.hpp"
#include "FRuntimeFloatCurve.hpp"
#include "FVector.hpp"
#include "FoliageVertexColorMask.hpp"
#include "UFoliageType.hpp"
#include "UObject.hpp"
#include "URuntimeVirtualTexture.hpp"
UFoliageType* UFoliageType::StaticClass() {
    static auto res = find_uobject("Class /Script/Foliage.FoliageType");
    return (UFoliageType*)res;
}
