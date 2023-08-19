#include "FRotator.hpp"
#include "FRuntimeCurveVector.hpp"
#include "FRuntimeFloatCurve.hpp"
#include "FVector2D.hpp"
#include "UAkAudioEvent.hpp"
#include "UDataAsset.hpp"
#include "UPhysicalResponseConfig.hpp"
UPhysicalResponseConfig* UPhysicalResponseConfig::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.PhysicalResponseConfig");
    return (UPhysicalResponseConfig*)res;
}
