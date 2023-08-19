#include "FOdcCollisionAreaUsageFlag.hpp"
#include "FOdcCollisionChannelSet.hpp"
#include "FOdcFlags.hpp"
#include "FOdcFlagsDefinition.hpp"
#include "FOdcGeometryMetrics.hpp"
#include "FOdcLayerConfig.hpp"
#include "FOdcSlopeAreaUsageFlag.hpp"
#include "UObject.hpp"
#include "UOdcNavmeshConfig.hpp"
UOdcNavmeshConfig* UOdcNavmeshConfig::StaticClass() {
    static auto res = find_uobject("Class /Script/OdysseyRuntime.OdcNavmeshConfig");
    return (UOdcNavmeshConfig*)res;
}
